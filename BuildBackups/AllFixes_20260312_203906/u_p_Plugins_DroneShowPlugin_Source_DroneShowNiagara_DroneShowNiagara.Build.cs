using UnrealBuildTool;
using System.Collections.Generic;

public class DroneShowNiagara : ModuleRules
{
    public DroneShowNiagara(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            // Auto-inserted niagara dependencies
            PrivateDependencyModuleNames.Add("NiagaraCore");
            PrivateDependencyModuleNames.Add("NiagaraShader");
            PrivateDependencyModuleNames.Add("RenderCore");
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });
        PrivateDependencyModuleNames.AddRange(new string[] { "Niagara", "NiagaraCore", "NiagaraShader", "RenderCore" });
    }
}

