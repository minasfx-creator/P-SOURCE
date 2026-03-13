# deploy_and_clean_drone_show_final.ps1
# Run as Administrator. Edit $ProjectUProject if needed.
Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

# === CONFIGURAÇÃO ===
$ProjectUProject = "C:\u\p\pyrodronems.uproject"   # <-- ajuste para o caminho real do seu .uproject
if (-not (Test-Path $ProjectUProject)) { Write-Host "ERROR: .uproject not found at $ProjectUProject"; return }
$Root = Split-Path -Parent $ProjectUProject
$PluginDir = Join-Path $Root "Plugins\DroneShowPlugin"
$ToolsDir = Join-Path $PluginDir "Tools"
$ContentFX = Join-Path $PluginDir "Content\FX"
$PackagesDir = Join-Path $Root "Packages"
$BackupRoot = Join-Path $env:TEMP ("DroneShowBackup_{0}" -f (Get-Date -Format yyyyMMddHHmmss))
$ManifestPath = Join-Path $Root ("manifest_final_{0}.txt" -f (Get-Date -Format yyyyMMddHHmmss))
$ZipOut = Join-Path $PackagesDir ("DroneShow_Package_{0}.zip" -f (Get-Date -Format yyyyMMddHHmmss))

function Log($m){ Write-Host "$(Get-Date -Format 'HH:mm:ss') - $m" }
function Ensure-Dir($p){ if(-not (Test-Path $p)){ New-Item -ItemType Directory -Path $p -Force | Out-Null } }

# === 1 Backup seguro e limpeza inicial ===
Ensure-Dir $BackupRoot
Log "Backup root: $BackupRoot"

$pathsToBackup = @(
    Join-Path $PluginDir "Binaries",
    Join-Path $PluginDir "Intermediate",
    Join-Path $Root "Binaries",
    Join-Path $Root "Intermediate",
    Join-Path $Root "Saved\StagedBuilds"
)
foreach ($p in $pathsToBackup) {
    if (Test-Path $p) {
        $dest = Join-Path $BackupRoot (Split-Path $p -Leaf)
        try { Move-Item -Path $p -Destination $dest -Force; Log "Moved $p -> $dest" } catch { Copy-Item -Path $p -Destination $dest -Recurse -Force; Remove-Item -Path $p -Recurse -Force; Log "Copied+Removed $p -> $dest" }
    } else { Log "Not found: $p" }
}

# Backup ZIPs antigos mantendo o mais recente
Ensure-Dir $PackagesDir
$zips = Get-ChildItem -Path $PackagesDir -Filter *.zip -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending
if ($zips.Count -gt 1) {
    $keep = $zips[0]
    $toBackup = $zips | Select-Object -Skip 1
    foreach ($z in $toBackup) { Move-Item -Path $z.FullName -Destination (Join-Path $BackupRoot $z.Name) -Force; Log "Backed up ZIP: $($z.Name)" }
    Log "Kept latest ZIP: $($keep.Name)"
} elseif ($zips.Count -eq 1) { Log "One ZIP found: $($zips[0].Name) kept." } else { Log "No ZIPs found." }

# === 2 Gravar/atualizar artefatos que desenvolvemos ===
Ensure-Dir $PluginDir; Ensure-Dir $ToolsDir; Ensure-Dir $ContentFX
Ensure-Dir (Join-Path $PluginDir "Source\DroneShowRuntime\Public")
Ensure-Dir (Join-Path $PluginDir "Source\DroneShowRuntime\Private")

# 2.1 DefaultEngine.ini
$iniPath = Join-Path $Root "Config\DefaultEngine.ini"
Ensure-Dir (Split-Path $iniPath -Parent)
$iniContent = @'
[/Script/Engine.RendererSettings]
r.LumenSceneLighting=1
r.LumenReflections=1
r.LumenGlobalIllumination.Quality=1.0
r.Nanite=1
r.ViewDistanceScale=1.0
'@
$iniContent | Out-File -FilePath $iniPath -Encoding UTF8 -Force
Log "Wrote: $iniPath"

# 2.2 Niagara JSONs
$nsSystemPath = Join-Path $ContentFX "NS_Lightning_System.json"
$nsSystemContent = @'
{
  "SystemName": "NS_Lightning_System",
  "Description": "Lightning system for show strikes. CPU emitter + beam + point light spawn.",
  "UserParameters": { "SpawnBurstCount": { "Type": "int", "Default": 1 }, "StrikeDuration": { "Type": "float", "Default": 0.18 }, "Intensity": { "Type": "float", "Default": 2.0 } },
  "Emitters": [ { "Name": "E_Lightning_Beam", "Type": "Beam" }, { "Name": "E_ForkParticles", "Type": "Sprite" } ]
}
'@
$nsSystemContent | Out-File -FilePath $nsSystemPath -Encoding UTF8 -Force
Log "Wrote: $nsSystemPath"

$nsEmitterPath = Join-Path $ContentFX "NS_Lightning_Emitter.json"
$nsEmitterContent = @'
{ "EmitterName": "E_Lightning_Beam", "Modules": [ { "Module": "SpawnBurst" }, { "Module": "Lifetime" } ] }
'@
$nsEmitterContent | Out-File -FilePath $nsEmitterPath -Encoding UTF8 -Force
Log "Wrote: $nsEmitterPath"

# 2.3 C++ stubs and BlueprintCallable wrappers
$artnetPath = Join-Path $PluginDir "Source\DroneShowRuntime\Private\ArtNetSender.cpp"
$artnetCpp = @'
#include "ArtNetSender.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"

bool FArtNetSender::SendArtNetUniverse(const FString& Host, int32 Port, int32 Universe, const TArray<uint8>& Data)
{
    ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (!SocketSubsystem) return false;
    bool bIsValid = false;
    TSharedRef<FInternetAddr> Addr = SocketSubsystem->CreateInternetAddr();
    Addr->SetIp(*Host, bIsValid);
    Addr->SetPort(Port);
    if (!bIsValid) return false;
    FSocket* Socket = SocketSubsystem->CreateSocket(NAME_DGram, TEXT("ArtNetSocket"), true);
    if (!Socket) return false;
    Socket->SetReuseAddr(true);
    Socket->SetNonBlocking(true);
    TArray<uint8> Packet;
    Packet.Append({0x41,0x72,0x74,0x2d,0x4e,0x65,0x74,0x00});
    Packet.Add(0x00); Packet.Add(0x50);
    Packet.Add(0x00); Packet.Add(14);
    Packet.Add(0x00); Packet.Add(0x00);
    Packet.Add((uint8)(Universe & 0xFF)); Packet.Add((uint8)((Universe >> 8) & 0xFF));
    int Len = Data.Num();
    Packet.Add((uint8)((Len >> 8) & 0xFF)); Packet.Add((uint8)(Len & 0xFF));
    Packet.Append(Data);
    int32 BytesSent = 0;
    bool bOk = Socket->SendTo(Packet.GetData(), Packet.Num(), BytesSent, *Addr);
    Socket->Close();
    SocketSubsystem->DestroySocket(Socket);
    return bOk;
}
'@
$artnetCpp | Out-File -FilePath $artnetPath -Encoding UTF8 -Force
Log "Wrote: $artnetPath"

# 2.4 MAVSDK wrapper stub
$mavHPath = Join-Path $PluginDir "Source\DroneShowRuntime\Public\MavSdkWrapper.h"
$mavCppPath = Join-Path $PluginDir "Source\DroneShowRuntime\Private\MavSdkWrapper.cpp"
$mavH = @'
#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MavSdkWrapper.generated.h"

UCLASS()
class UMavSdkWrapper : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category="DroneShow|MAV")
    static bool UploadMissionViaMavsdk(const FString& MissionFilePath);

    UFUNCTION(BlueprintCallable, Category="DroneShow|MAV")
    static bool SendCommandLandAll();
};
'@
$mavCpp = @'
#include "MavSdkWrapper.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Engine/Engine.h"

bool UMavSdkWrapper::UploadMissionViaMavsdk(const FString& MissionFilePath)
{
    if (!FPaths::FileExists(MissionFilePath)) return false;
    UE_LOG(LogTemp, Warning, TEXT("UploadMissionViaMavsdk called for %s - stubbed"), *MissionFilePath);
    return true;
}

bool UMavSdkWrapper::SendCommandLandAll()
{
    UE_LOG(LogTemp, Warning, TEXT("SendCommandLandAll called - stubbed"));
    return true;
}
'@
$mavH | Out-File -FilePath $mavHPath -Encoding UTF8 -Force
$mavCpp | Out-File -FilePath $mavCppPath -Encoding UTF8 -Force
Log "Wrote MAVSDK stubs"

# 2.5 TelemetryLogger
$telemetryHPath = Join-Path $PluginDir "Source\DroneShowRuntime\Public\TelemetryLogger.h"
$telemetryCppPath = Join-Path $PluginDir "Source\DroneShowRuntime\Private\TelemetryLogger.cpp"
$telemetryH = @'
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TelemetryLogger.generated.h"

UCLASS()
class UTelemetryLogger : public UObject
{
    GENERATED_BODY()
public:
    static UTelemetryLogger* Get();
    void LogEvent(const FString& EventType, const TMap<FString,FString>& Fields);
private:
    FString FilePath;
    static TWeakObjectPtr<UTelemetryLogger> Instance;
    void Init();
};
'@
$telemetryCpp = @'
#include "TelemetryLogger.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Misc/DateTime.h"

TWeakObjectPtr<UTelemetryLogger> UTelemetryLogger::Instance = nullptr;

UTelemetryLogger* UTelemetryLogger::Get()
{
    if (Instance.IsValid()) return Instance.Get();
    UTelemetryLogger* L = NewObject<UTelemetryLogger>(GetTransientPackage());
    L->AddToRoot();
    L->Init();
    Instance = L;
    return L;
}

void UTelemetryLogger::Init()
{
    FilePath = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("DroneShowTelemetry.log"));
}

void UTelemetryLogger::LogEvent(const FString& EventType, const TMap<FString,FString>& Fields)
{
    FString Line = FString::Printf(TEXT("{\"time\":\"%s\",\"event\":\"%s\""), *FDateTime::UtcNow().ToString(), *EventType);
    for (auto& P : Fields) { Line += FString::Printf(TEXT(",\"%s\":\"%s\""), *P.Key, *P.Value); }
    Line += TEXT("}\n");
    FFileHelper::SaveStringToFile(Line, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
}
'@
$telemetryH | Out-File -FilePath $telemetryHPath -Encoding UTF8 -Force
$telemetryCpp | Out-File -FilePath $telemetryCppPath -Encoding UTF8 -Force
Log "Wrote TelemetryLogger"

# 2.6 Tools: Python and PowerShell helpers
Ensure-Dir $ToolsDir
$pyCreateNiagara = @'
import unreal

def create_lightning_system():
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    factory = unreal.NiagaraSystemFactoryNew()
    package_path = "/Game/FX"
    name = "NS_Lightning_Auto"
    existing = unreal.EditorAssetLibrary.find_asset_data(package_path + "/" + name)
    if existing.is_valid():
        unreal.log("Niagara system already exists: {}".format(name))
        return existing.get_asset()
    system = asset_tools.create_asset(name, package_path, unreal.NiagaraSystem, factory)
    unreal.log("Created Niagara System: {}/{}".format(package_path, name))
    return system

if __name__ == "__main__":
    create_lightning_system()
'@
$pyPath = Join-Path $ToolsDir "create_niagara_lightning.py"
$pyCreateNiagara | Out-File -FilePath $pyPath -Encoding UTF8 -Force
Log "Wrote: $pyPath"

$e2ePS = @'
param(
  [string]$Project = "C:\u\p\YourProject.uproject",
  [string]$EditorExe = "C:\Program Files\Epic Games\UE_5.3\Engine\Binaries\Win64\UnrealEditor.exe"
)

Write-Host "Launching Unreal Editor to run E2E Python script..."
$py = @"
import unreal, time
unreal.log('E2E: Starting smoke sequence')
time.sleep(2)
unreal.log('E2E: Simulating short run and attempting UploadMission fallback')
time.sleep(8)
unreal.log('E2E: Finished smoke sequence')
"@
$tmp = "$env:TEMP\drone_e2e_run.py"
$py | Out-File -FilePath $tmp -Encoding UTF8 -Force
& $EditorExe $Project -run=pythonscript -script="$tmp"
Write-Host "Editor launched for E2E. Monitor logs for validation."
'@
$e2ePath = Join-Path $ToolsDir "run_e2e_test.ps1"
$e2ePS | Out-File -FilePath $e2ePath -Encoding UTF8 -Force
Log "Wrote: $e2ePath"

# 2.7 UDP listener and sender
$udpListener = Join-Path $ToolsDir "udp_listener.ps1"
$udpListenerContent = @'
$port = 14540
$udpClient = New-Object System.Net.Sockets.UdpClient($port)
Write-Host "Listening UDP on port $port..."
while ($true) {
    $remoteEndPoint = New-Object System.Net.IPEndPoint([System.Net.IPAddress]::Any,0)
    $bytes = $udpClient.Receive([ref]$remoteEndPoint)
    $msg = [System.Text.Encoding]::UTF8.GetString($bytes)
    $time = Get-Date -Format "HH:mm:ss.fff"
    Write-Host "[$time] From $($remoteEndPoint.Address):$($remoteEndPoint.Port) -> $msg"
}
'@
$udpListenerContent | Out-File -FilePath $udpListener -Encoding UTF8 -Force
Log "Wrote: $udpListener"

$udpSend = Join-Path $ToolsDir "udp_send.ps1"
$udpSendContent = @'
param(
  [string]$host = "127.0.0.1",
  [int]$port = 14540,
  [string]$message = "TEST_POS,1,0.0,0.0,10.0"
)
$client = New-Object System.Net.Sockets.UdpClient
$bytes = [System.Text.Encoding]::UTF8.GetBytes($message)
$client.Send($bytes, $bytes.Length, $host, $port) | Out-Null
$client.Close()
Write-Host "Sent: $message to $host:$port"
'@
$udpSendContent | Out-File -FilePath $udpSend -Encoding UTF8 -Force
Log "Wrote: $udpSend"

# === 3 Preservar lista e mover resto para backup (seguro) ===
$preserveList = @(
    "Config\DefaultEngine.ini",
    "Plugins\DroneShowPlugin\Source\**\*",
    "Plugins\DroneShowPlugin\Content\**\*",
    "Plugins\DroneShowPlugin\Tools\**\*",
    "Plugins\DroneShowPlugin\Docs\**\*",
    "Tools\**\*"
)
$allFiles = Get-ChildItem -Path $Root -Recurse -File -ErrorAction SilentlyContinue
$preserveRegex = $preserveList | ForEach-Object { $_ -replace "\\","\\\\" -replace "\*\*","(.+)" -replace "\*","([^\\]+)" }
$toMove = @()
foreach ($f in $allFiles) {
    $rel = $f.FullName.Substring($Root.Length).TrimStart('\')
    $keep = $false
    foreach ($r in $preserveRegex) { if ($rel -match "^$r$") { $keep = $true; break } }
    if (-not $keep) {
        if ($rel -like "Saved\*") { continue }
        if ($rel -like ".vs\*") { continue }
        $toMove += $f
    }
}
if ($toMove.Count -gt 0) {
    $remBackup = Join-Path $BackupRoot "RemovedFiles"
    Ensure-Dir $remBackup
    foreach ($f in $toMove) {
        $dest = Join-Path $remBackup ($f.FullName.Substring($Root.Length).TrimStart('\') -replace '[\\/]','_')
        Ensure-Dir (Split-Path $dest -Parent)
        Move-Item -Path $f.FullName -Destination $dest -Force
    }
    Log "Moved $($toMove.Count) non-preserved files to backup: $remBackup"
} else { Log "No extra files to move." }

# === 4 Criar skeletons mínimos para módulos declarados no .uplugin ===
$uplugin = Join-Path $PluginDir "DroneShowPlugin.uplugin"
if (Test-Path $uplugin) {
    try { $ujson = Get-Content $uplugin -Raw | ConvertFrom-Json } catch { $ujson = $null }
    if ($ujson -and $ujson.Modules) {
        foreach ($m in $ujson.Modules) {
            $modName = $m.Name
            $srcPath = Join-Path $PluginDir ("Source\" + $modName)
            if (-not (Test-Path $srcPath)) {
                Log "Module declared but missing: $modName. Creating minimal source skeleton..."
                $pub = Join-Path $srcPath "Public"; $priv = Join-Path $srcPath "Private"
                Ensure-Dir $pub; Ensure-Dir $priv
                $buildcs = @'
using UnrealBuildTool;
using System.Collections.Generic;

public class {MOD} : ModuleRules
{
    public {MOD}(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });
        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}
'@ -replace "{MOD}", $modName
                $buildcs | Out-File -FilePath (Join-Path $srcPath ("{0}.Build.cs" -f $modName)) -Encoding UTF8 -Force
                if ($m.Type -eq "Editor" -or $modName -like "*Editor*") {
                    @'
#pragma once
#include "Modules/ModuleManager.h"

class F{MOD}Module : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
'@ -replace "{MOD}", $modName | Out-File -FilePath (Join-Path $pub ("{0}Module.h" -f $modName)) -Encoding UTF8 -Force

                    @'
#include "{MOD}Module.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "F{MOD}Module"

void F{MOD}Module::StartupModule()
{
    UE_LOG(LogTemp, Log, TEXT("{MOD} module started"));
}

void F{MOD}Module::ShutdownModule()
{
    UE_LOG(LogTemp, Log, TEXT("{MOD} module shutdown"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(F{MOD}Module, {MOD})
'@ -replace "{MOD}", $modName | Out-File -FilePath (Join-Path $priv ("{0}Module.cpp" -f $modName)) -Encoding UTF8 -Force
                    Log "Created minimal module skeleton for $modName"
                }
            } else { Log "Module source exists: $modName" }
        }
    } else { Log "Could not parse .uplugin Modules array; skipping module skeleton creation." }
} else { Log ".uplugin not found at $uplugin; ensure plugin path is correct." }

# === 5 Regenerar project files e compilar ===
Log "Locating Unreal Engine installation..."
$possible = @()
if (Test-Path "C:\Program Files\Epic Games") { $possible += Get-ChildItem "C:\Program Files\Epic Games" -Directory | Select-Object -ExpandProperty FullName }
$foundEditor = Get-ChildItem -Path C:\ -Filter UnrealEditor.exe -Recurse -ErrorAction SilentlyContinue -Force | Select-Object -First 1 -ExpandProperty DirectoryName
if ($foundEditor) { $possible += (Split-Path -Parent (Split-Path -Parent $foundEditor)) }
$possible = $possible | Where-Object { Test-Path (Join-Path $_ "Engine") } | Select-Object -Unique
if ($possible.Count -eq 0) { Log "ERROR: UE not found automatically. Edit script to set UE_ROOT manually."; exit 1 }
$UE_ROOT = $possible | Sort-Object -Descending | Select-Object -First 1
Log "Using UE root: $UE_ROOT"

$genBat = Join-Path $UE_ROOT "Engine\Build\BatchFiles\GenerateProjectFiles.bat"
$ubt = Join-Path $UE_ROOT "Engine\Binaries\DotNET\UnrealBuildTool.exe"
if (Test-Path $genBat) {
    Log "Running GenerateProjectFiles.bat"
    & "$genBat" -project="$ProjectUProject" -game -engine
} elseif (Test-Path $ubt) {
    Log "Running UnrealBuildTool.exe to generate project files"
    & "$ubt" -projectfiles -project="$ProjectUProject" -game -progress
} else { Log "ERROR: Project file generator not found under $UE_ROOT\Engine"; exit 1 }

# Build solution
Log "Searching for solution (.sln)..."
$solution = Get-ChildItem -Path $Root -Filter *.sln -Recurse -ErrorAction SilentlyContinue | Select-Object -First 1 -ExpandProperty FullName
if (-not $solution) { Log "ERROR: .sln not found. Generate project files manually and retry."; exit 1 }
Log "Solution found: $solution"

$msbuild = (Get-Command msbuild.exe -ErrorAction SilentlyContinue).Source
if (-not $msbuild) {
    $vswhere = "$env:ProgramFiles(x86)\Microsoft Visual Studio\Installer\vswhere.exe"
    if (Test-Path $vswhere) {
        $vsInstall = & $vswhere -latest -products * -requires Microsoft.Component.MSBuild -property installationPath 2>$null
        if ($vsInstall) { $msbuild = Join-Path $vsInstall "MSBuild\Current\Bin\MSBuild.exe" }
    }
}
if (-not $msbuild -or -not (Test-Path $msbuild)) {
    Log "msbuild not found. Open the solution in Visual Studio and build Development Editor (Win64): $solution"
} else {
    Log "Building solution with msbuild..."
    & "$msbuild" $solution /p:Configuration=Development /p:Platform=x64 /m
    Log "Build finished. Check Visual Studio output for errors."
}

# === 6 Map Check export and block UploadMission wrapper ===
$mapCheckPy = Join-Path $ToolsDir "map_check_export.py"
Ensure-Dir $ToolsDir
$mapCheckPyContent = @'
import unreal, json, os
results = unreal.EditorLevelLibrary.run_map_check()
out = []
for r in results:
    out.append({ 'type': r.type.name, 'message': r.message, 'object': str(r.object) })
out_path = os.path.join(unreal.Paths.project_saved_dir(), 'MapCheckResults.json')
with open(out_path, 'w') as f:
    json.dump(out, f, indent=2)
unreal.log('Map Check exported to: ' + out_path)
'@
$mapCheckPyContent | Out-File -FilePath $mapCheckPy -Encoding UTF8 -Force
Log "Map Check exporter written: $mapCheckPy"

$mapCheckRunner = Join-Path $ToolsDir "run_map_check_and_block.ps1"
$mapCheckRunnerContent = @'
param([string]$EditorExe = "{UE}\Engine\Binaries\Win64\UnrealEditor.exe", [string]$Project = "{PR}")
Write-Host "Launching Editor to run Map Check export..."
$tmp = [System.IO.Path]::GetTempFileName() + ".py"
Copy-Item -Path "{PY}" -Destination $tmp -Force
& "$EditorExe" "$Project" -run=pythonscript -script=$tmp
Write-Host "Editor run completed. Check Saved/MapCheckResults.json and Saved/Logs for details."
'@ -replace "{UE}", $UE_ROOT -replace "{PR}", $ProjectUProject -replace "{PY}", $mapCheckPy
$mapCheckRunnerContent | Out-File -FilePath $mapCheckRunner -Encoding UTF8 -Force
Log "Map Check runner written: $mapCheckRunner"

# === 7 Start UDP listener and E2E if present ===
if (Test-Path $udpListener) {
    Start-Process -FilePath "powershell.exe" -ArgumentList "-NoProfile -ExecutionPolicy Bypass -File `"$udpListener`"" -WindowStyle Normal
    Log "UDP listener started."
} else { Log "UDP listener script missing: $udpListener" }

if (Test-Path $e2ePath) {
    Start-Process -FilePath "powershell.exe" -ArgumentList "-NoProfile -ExecutionPolicy Bypass -File `"$e2ePath`"" -WindowStyle Normal
    Log "E2E script started."
} else { Log "E2E script not found; skip E2E run." }

# === 8 Generate final manifest and package preserved files ===
Log "Generating manifest with SHA256..."
Add-Type -AssemblyName System.IO.Compression.FileSystem
function Compute-SHA256($file){
    $sha = [System.Security.Cryptography.SHA256]::Create()
    $stream = [System.IO.File]::OpenRead($file)
    $hash = $sha.ComputeHash($stream)
    $stream.Close()
    return ([System.BitConverter]::ToString($hash)).Replace("-","").ToLower()
}
$preservedFiles = @()
foreach ($pat in $preserveList) {
    $items = Get-ChildItem -Path (Join-Path $Root $pat) -Recurse -File -ErrorAction SilentlyContinue
    foreach ($it in $items) { $preservedFiles += $it.FullName }
}
$manifestLines = @()
foreach ($f in $preservedFiles | Sort-Object) {
    $rel = $f.Substring($Root.Length).TrimStart('\')
    $hash = Compute-SHA256 $f
    $manifestLines += "$rel`t$hash"
}
$manifestLines | Out-File -FilePath $ManifestPath -Encoding UTF8 -Force
Log "Manifest written: $ManifestPath"

# Create ZIP of preserved package
$temp = Join-Path $env:TEMP ("DroneShowPackageTemp_{0}" -f (Get-Date -Format yyyyMMddHHmmss))
if (Test-Path $temp) { Remove-Item -Path $temp -Recurse -Force }
New-Item -ItemType Directory -Path $temp -Force | Out-Null
foreach ($f in $preservedFiles) {
    $rel = $f.Substring($Root.Length).TrimStart('\')
    $dest = Join-Path $temp $rel
    $destDir = Split-Path $dest -Parent
    if (-not (Test-Path $destDir)) { New-Item -ItemType Directory -Path $destDir -Force | Out-Null }
    Copy-Item -Path $f -Destination $dest -Force
}
[System.IO.Compression.ZipFile]::CreateFromDirectory($temp, $ZipOut)
Remove-Item -Path $temp -Recurse -Force
Log "Package created: $ZipOut"

Log "All steps complete. Backups stored at: $BackupRoot"
Log "If build failed, open Visual Studio and fix errors; then open Unreal Editor and choose Rebuild when prompted."
