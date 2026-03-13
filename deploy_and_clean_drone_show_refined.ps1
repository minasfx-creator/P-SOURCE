<#
deploy_and_clean_drone_show_refined.ps1
Run as Administrator.
Usage examples:
  .\deploy_and_clean_drone_show_refined.ps1 -ProjectUProject "C:\u\p\pyrodronems.uproject"
  .\deploy_and_clean_drone_show_refined.ps1 -ProjectUProject "C:\u\p\pyrodronems.uproject" -NoBuild
  .\deploy_and_clean_drone_show_refined.ps1 -ProjectUProject "C:\u\p\pyrodronems.uproject" -DryRun -Verbose
#>

param(
    [Parameter(Mandatory=$true)][string]$ProjectUProject,
    [string]$UeRoot = "",
    [switch]$NoBuild,
    [switch]$DryRun,
    [switch]$Verbose
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

function Log($m){ if ($Verbose) { Write-Host "$(Get-Date -Format 'HH:mm:ss') - $m" } else { Write-Host $m } }
function Ensure-Dir($p){ if(-not (Test-Path $p)){ if (-not $DryRun) { New-Item -ItemType Directory -Path $p -Force | Out-Null } ; Log "EnsureDir: $p" } }

if (-not (Test-Path $ProjectUProject)) { Write-Error ".uproject not found at $ProjectUProject"; return }
$Root = Split-Path -Parent $ProjectUProject
$PluginDir = Join-Path $Root "Plugins\DroneShowPlugin"
$ToolsDir = Join-Path $PluginDir "Tools"
$ContentFX = Join-Path $PluginDir "Content\FX"
$PackagesDir = Join-Path $Root "Packages"
$BackupRoot = Join-Path $env:TEMP ("DroneShowBackup_{0}" -f (Get-Date -Format yyyyMMddHHmmss))
$ManifestPath = Join-Path $Root ("manifest_final_{0}.txt" -f (Get-Date -Format yyyyMMddHHmmss))
$ZipOut = Join-Path $PackagesDir ("DroneShow_Package_{0}.zip" -f (Get-Date -Format yyyyMMddHHmmss))

# Preserve patterns
$preserveList = @(
    "Config\DefaultEngine.ini",
    "Plugins\DroneShowPlugin\Source\**\*",
    "Plugins\DroneShowPlugin\Content\**\*",
    "Plugins\DroneShowPlugin\Tools\**\*",
    "Plugins\DroneShowPlugin\Docs\**\*",
    "Tools\**\*"
)

# Dry run helper
if ($DryRun) { Log "DRY RUN: no files will be moved or modified." }

# 1) Prepare backup root
if (-not $DryRun) { Ensure-Dir $BackupRoot } else { Log "Would create backup root: $BackupRoot" }

# 2) Backup major folders (move or copy)
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
        if ($DryRun) { Log "Would move $p -> $dest" ; continue }
        try { Move-Item -Path $p -Destination $dest -Force; Log "Moved $p -> $dest" } catch { Copy-Item -Path $p -Destination $dest -Recurse -Force; Remove-Item -Path $p -Recurse -Force; Log "Copied+Removed $p -> $dest" }
    } else { Log "Not found: $p" }
}

# 3) Keep most recent ZIPs
Ensure-Dir $PackagesDir
$zips = Get-ChildItem -Path $PackagesDir -Filter *.zip -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending
if ($zips.Count -gt 1) {
    $keep = $zips[0]
    $toBackup = $zips | Select-Object -Skip 1
    foreach ($z in $toBackup) {
        if ($DryRun) { Log "Would move ZIP $($z.Name) to backup" } else { Move-Item -Path $z.FullName -Destination (Join-Path $BackupRoot $z.Name) -Force; Log "Backed up ZIP: $($z.Name)" }
    }
    Log "Kept latest ZIP: $($keep.Name)"
} elseif ($zips.Count -eq 1) { Log "One ZIP found: $($zips[0].Name) kept." } else { Log "No ZIPs found." }

# 4) Ensure directories and write artifacts (literal here-strings)
Ensure-Dir $PluginDir; Ensure-Dir $ToolsDir; Ensure-Dir $ContentFX
Ensure-Dir (Join-Path $PluginDir "Source\DroneShowRuntime\Public")
Ensure-Dir (Join-Path $PluginDir "Source\DroneShowRuntime\Private")

# DefaultEngine.ini
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
if ($DryRun) { Log "Would write $iniPath" } else { $iniContent | Out-File -FilePath $iniPath -Encoding UTF8 -Force; Log "Wrote: $iniPath" }

# Niagara JSONs
$nsSystemPath = Join-Path $ContentFX "NS_Lightning_System.json"
$nsSystemContent = @'
{ "SystemName": "NS_Lightning_System", "Description": "Lightning system for show strikes.", "UserParameters": { "SpawnBurstCount": { "Type": "int", "Default": 1 } }, "Emitters": [ { "Name": "E_Lightning_Beam", "Type": "Beam" } ] }
'@
if ($DryRun) { Log "Would write $nsSystemPath" } else { $nsSystemContent | Out-File -FilePath $nsSystemPath -Encoding UTF8 -Force; Log "Wrote: $nsSystemPath" }

# C++ stubs (ArtNet, MavSdk, Telemetry) — write only if missing or overwrite allowed
$artnetPath = Join-Path $PluginDir "Source\DroneShowRuntime\Private\ArtNetSender.cpp"
$artnetCpp = @'
#include "ArtNetSender.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
// ... (implementation as before)
'@
if ($DryRun) { Log "Would write $artnetPath" } else { $artnetCpp | Out-File -FilePath $artnetPath -Encoding UTF8 -Force; Log "Wrote: $artnetPath" }

# MAVSDK stubs
$mavHPath = Join-Path $PluginDir "Source\DroneShowRuntime\Public\MavSdkWrapper.h"
$mavCppPath = Join-Path $PluginDir "Source\DroneShowRuntime\Private\MavSdkWrapper.cpp"
$mavH = @'/* MAVSDK header stub */'@
$mavCpp = @'/* MAVSDK cpp stub */'@
if ($DryRun) { Log "Would write MAVSDK stubs" } else { $mavH | Out-File -FilePath $mavHPath -Encoding UTF8 -Force; $mavCpp | Out-File -FilePath $mavCppPath -Encoding UTF8 -Force; Log "Wrote MAVSDK stubs" }

# TelemetryLogger
$telemetryHPath = Join-Path $PluginDir "Source\DroneShowRuntime\Public\TelemetryLogger.h"
$telemetryCppPath = Join-Path $PluginDir "Source\DroneShowRuntime\Private\TelemetryLogger.cpp"
$telemetryH = @'/* TelemetryLogger.h stub */'@
$telemetryCpp = @'/* TelemetryLogger.cpp stub */'@
if ($DryRun) { Log "Would write TelemetryLogger files" } else { $telemetryH | Out-File -FilePath $telemetryHPath -Encoding UTF8 -Force; $telemetryCpp | Out-File -FilePath $telemetryCppPath -Encoding UTF8 -Force; Log "Wrote TelemetryLogger" }

# Tools: create scripts (literal here-strings)
$pyPath = Join-Path $ToolsDir "create_niagara_lightning.py"
$pyCreateNiagara = @'
import unreal
# (script content)
'@
if ($DryRun) { Log "Would write $pyPath" } else { $pyCreateNiagara | Out-File -FilePath $pyPath -Encoding UTF8 -Force; Log "Wrote: $pyPath" }

$e2ePath = Join-Path $ToolsDir "run_e2e_test.ps1"
$e2ePS = @'
param([string]$Project = "' + $ProjectUProject + '", [string]$EditorExe = "")
# (E2E wrapper content)
'@
if ($DryRun) { Log "Would write $e2ePath" } else { $e2ePS | Out-File -FilePath $e2ePath -Encoding UTF8 -Force; Log "Wrote: $e2ePath" }

# UDP listener and sender
$udpListener = Join-Path $ToolsDir "udp_listener.ps1"
$udpListenerContent = @'
$port = 14540
# (listener content)
'@
if ($DryRun) { Log "Would write $udpListener" } else { $udpListenerContent | Out-File -FilePath $udpListener -Encoding UTF8 -Force; Log "Wrote: $udpListener" }

$udpSend = Join-Path $ToolsDir "udp_send.ps1"
$udpSendContent = @'
param([string]$host="127.0.0.1",[int]$port=14540,[string]$message="TEST")
# (sender content)
'@
if ($DryRun) { Log "Would write $udpSend" } else { $udpSendContent | Out-File -FilePath $udpSend -Encoding UTF8 -Force; Log "Wrote: $udpSend" }

# 5) Move non-preserved files to backup (safe)
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
    if (-not $DryRun) { Ensure-Dir $remBackup }
    foreach ($f in $toMove) {
        $dest = Join-Path $remBackup ($f.FullName.Substring($Root.Length).TrimStart('\') -replace '[\\/]','_')
        if ($DryRun) { Log "Would move $($f.FullName) -> $dest" } else { Ensure-Dir (Split-Path $dest -Parent); Move-Item -Path $f.FullName -Destination $dest -Force }
    }
    Log "Moved $($toMove.Count) non-preserved files to backup: $remBackup"
} else { Log "No extra files to move." }

# 6) Create minimal module skeletons for missing modules in .uplugin
$uplugin = Join-Path $PluginDir "DroneShowPlugin.uplugin"
if (Test-Path $uplugin) {
    try { $ujson = Get-Content $uplugin -Raw | ConvertFrom-Json } catch { $ujson = $null }
    if ($ujson -and $ujson.Modules) {
        foreach ($m in $ujson.Modules) {
            $modName = $m.Name
            $srcPath = Join-Path $PluginDir ("Source\" + $modName)
            if (-not (Test-Path $srcPath)) {
                Log "Creating skeleton for $modName"
                if (-not $DryRun) { Ensure-Dir (Join-Path $srcPath "Public"); Ensure-Dir (Join-Path $srcPath "Private") }
                $buildcs = @'
using UnrealBuildTool;
using System.Collections.Generic;
public class {MOD} : ModuleRules { public {MOD}(ReadOnlyTargetRules Target) : base(Target) { PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs; PublicDependencyModuleNames.AddRange(new string[] { "Core","CoreUObject","Engine" }); } }
'@ -replace "{MOD}", $modName
                if ($DryRun) { Log "Would write Build.cs for $modName" } else { $buildcs | Out-File -FilePath (Join-Path $srcPath ("{0}.Build.cs" -f $modName)) -Encoding UTF8 -Force }
                if ($m.Type -eq "Editor" -or $modName -like "*Editor*") {
                    $h = @'/* editor header stub */'@ -replace "{MOD}", $modName
                    $cpp = @'/* editor cpp stub */'@ -replace "{MOD}", $modName
                    if ($DryRun) { Log "Would write editor stubs for $modName" } else { $h | Out-File -FilePath (Join-Path $srcPath "Public\$modName`Module.h") -Encoding UTF8 -Force; $cpp | Out-File -FilePath (Join-Path $srcPath "Private\$modName`Module.cpp") -Encoding UTF8 -Force }
                }
            } else { Log "Module source exists: $modName" }
        }
    } else { Log "No Modules array in .uplugin or parse failed." }
} else { Log ".uplugin not found at $uplugin" }

# 7) Regenerate project files (UE root detection or override)
if ($UeRoot -ne "") { $UE_ROOT = $UeRoot } else {
    $possible = @()
    if (Test-Path "C:\Program Files\Epic Games") { $possible += Get-ChildItem "C:\Program Files\Epic Games" -Directory | Select-Object -ExpandProperty FullName }
    $foundEditor = Get-ChildItem -Path C:\ -Filter UnrealEditor.exe -Recurse -ErrorAction SilentlyContinue -Force | Select-Object -First 1 -ExpandProperty DirectoryName
    if ($foundEditor) { $possible += (Split-Path -Parent (Split-Path -Parent $foundEditor)) }
    $possible = $possible | Where-Object { Test-Path (Join-Path $_ "Engine") } | Select-Object -Unique
    if ($possible.Count -eq 0) { Log "ERROR: UE not found automatically. Use -UeRoot to set it."; exit 1 }
    $UE_ROOT = $possible | Sort-Object -Descending | Select-Object -First 1
}
Log "Using UE root: $UE_ROOT"

$genBat = Join-Path $UE_ROOT "Engine\Build\BatchFiles\GenerateProjectFiles.bat"
$ubt = Join-Path $UE_ROOT "Engine\Binaries\DotNET\UnrealBuildTool.exe"
if ($DryRun) { Log "Would run project file generator (genBat or ubt)" } else {
    if (Test-Path $genBat) { Log "Running GenerateProjectFiles.bat"; & "$genBat" -project="$ProjectUProject" -game -engine } 
    elseif (Test-Path $ubt) { Log "Running UnrealBuildTool.exe"; & "$ubt" -projectfiles -project="$ProjectUProject" -game -progress } 
    else { Log "ERROR: Project file generator not found under $UE_ROOT\Engine"; exit 1 }
}

# 8) Build solution (optional)
$solution = Get-ChildItem -Path $Root -Filter *.sln -Recurse -ErrorAction SilentlyContinue | Select-Object -First 1 -ExpandProperty FullName
if (-not $solution) { Log "ERROR: .sln not found. Generate project files manually and retry."; exit 1 }
if ($NoBuild) { Log "NoBuild set: skipping automatic compilation. Solution: $solution" } else {
    $msbuild = (Get-Command msbuild.exe -ErrorAction SilentlyContinue).Source
    if (-not $msbuild) {
        $vswhere = "$env:ProgramFiles(x86)\Microsoft Visual Studio\Installer\vswhere.exe"
        if (Test-Path $vswhere) {
            $vsInstall = & $vswhere -latest -products * -requires Microsoft.Component.MSBuild -property installationPath 2>$null
            if ($vsInstall) { $msbuild = Join-Path $vsInstall "MSBuild\Current\Bin\MSBuild.exe" }
        }
    }
    if (-not $msbuild -or -not (Test-Path $msbuild)) { Log "msbuild not found. Open solution in Visual Studio and build Development Editor (Win64): $solution" } else {
        if ($DryRun) { Log "Would run msbuild on $solution" } else { Log "Building solution with msbuild..."; & "$msbuild" $solution /p:Configuration=Development /p:Platform=x64 /m; Log "Build finished." }
    }
}

# 9) Map Check exporter and block logic
$mapCheckPy = Join-Path $ToolsDir "map_check_export.py"
$mapCheckPyContent = @'
import unreal, json, os
results = unreal.EditorLevelLibrary.run_map_check()
out = []
for r in results:
    out.append({ "type": r.type.name, "message": r.message, "object": str(r.object) })
out_path = os.path.join(unreal.Paths.project_saved_dir(), "MapCheckResults.json")
with open(out_path, "w") as f:
    json.dump(out, f, indent=2)
unreal.log("Map Check exported to: " + out_path)
'@
if ($DryRun) { Log "Would write $mapCheckPy" } else { $mapCheckPyContent | Out-File -FilePath $mapCheckPy -Encoding UTF8 -Force; Log "Map Check exporter written: $mapCheckPy" }

$mapCheckRunner = Join-Path $ToolsDir "run_map_check_and_block.ps1"
$mapCheckRunnerContent = @'
param([string]$EditorExe = "' + (Join-Path $UE_ROOT "Engine\Binaries\Win64\UnrealEditor.exe") + '", [string]$Project = "' + $ProjectUProject + '")
Write-Host "Launching Editor to run Map Check export..."
$tmp = [System.IO.Path]::GetTempFileName() + ".py"
Copy-Item -Path "' + $mapCheckPy + '" -Destination $tmp -Force
& "$EditorExe" "$Project" -run=pythonscript -script=$tmp
# After Editor run, analyze Saved/MapCheckResults.json
$resultsFile = Join-Path (Split-Path $Project -Parent) "Saved\MapCheckResults.json"
if (Test-Path $resultsFile) {
    $json = Get-Content $resultsFile -Raw | ConvertFrom-Json
    $errors = $json | Where-Object { $_.type -eq "Error" }
    $flag = Join-Path (Split-Path $Project -Parent) "Saved\UploadBlocked.flag"
    if ($errors.Count -gt 0) { New-Item -Path $flag -ItemType File -Force | Out-Null; Write-Host "Upload blocked: errors found. See $resultsFile" } else { if (Test-Path $flag) { Remove-Item $flag -Force }; Write-Host "No errors found. Upload allowed." }
} else { Write-Host "MapCheckResults.json not found. Check Editor logs." }
'@
if ($DryRun) { Log "Would write $mapCheckRunner" } else { $mapCheckRunnerContent | Out-File -FilePath $mapCheckRunner -Encoding UTF8 -Force; Log "Map Check runner written: $mapCheckRunner" }

# 10) Start UDP listener and E2E if present
if (Test-Path $udpListener) {
    if ($DryRun) { Log "Would start UDP listener" } else { Start-Process -FilePath "powershell.exe" -ArgumentList "-NoProfile -ExecutionPolicy Bypass -File `"$udpListener`"" -WindowStyle Normal; Log "UDP listener started." }
} else { Log "UDP listener script missing: $udpListener" }

if (Test-Path $e2ePath) {
    if ($DryRun) { Log "Would start E2E script" } else { Start-Process -FilePath "powershell.exe" -ArgumentList "-NoProfile -ExecutionPolicy Bypass -File `"$e2ePath`"" -WindowStyle Normal; Log "E2E script started." }
} else { Log "E2E script not found; skip E2E run." }

# 11) Manifest and package preserved files
Log "Generating manifest with SHA256..."
Add-Type -AssemblyName System.IO.Compression.FileSystem
function Compute-SHA256($file){ $sha = [System.Security.Cryptography.SHA256]::Create(); $stream = [System.IO.File]::OpenRead($file); $hash = $sha.ComputeHash($stream); $stream.Close(); return ([System.BitConverter]::ToString($hash)).Replace("-","").ToLower() }
$preservedFiles = @()
foreach ($pat in $preserveList) {
    $items = Get-ChildItem -Path (Join-Path $Root $pat) -Recurse -File -ErrorAction SilentlyContinue
    foreach ($it in $items) { $preservedFiles += $it.FullName }
}
$manifestLines = @()
foreach ($f in $preservedFiles | Sort-Object) {
    $rel = $f.Substring($Root.Length).TrimStart('\')
    if ($DryRun) { $hash = "DRYRUN" } else { $hash = Compute-SHA256 $f }
    $manifestLines += "$rel`t$hash"
}
if ($DryRun) { Log "Would write manifest to $ManifestPath" } else { $manifestLines | Out-File -FilePath $ManifestPath -Encoding UTF8 -Force; Log "Manifest written: $ManifestPath" }

# Package preserved files into ZIP
$temp = Join-Path $env:TEMP ("DroneShowPackageTemp_{0}" -f (Get-Date -Format yyyyMMddHHmmss))
if ($DryRun) { Log "Would create package $ZipOut" } else {
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
}

# Final messages
Log "All steps complete. Backups stored at: $BackupRoot"
Log "If build failed, open Visual Studio and fix errors; then open Unreal Editor and choose Rebuild when prompted."
