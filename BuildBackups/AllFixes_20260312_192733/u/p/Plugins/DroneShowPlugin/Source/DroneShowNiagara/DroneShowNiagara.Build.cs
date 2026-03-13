using UnrealBuildTool;
using System.Collections.Generic;

public class DroneShowNiagara : ModuleRules
{
    public DroneShowNiagara(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });
        PrivateDependencyModuleNames.AddRange(new string[] { "Niagara", "NiagaraCore", "NiagaraShader", "RenderCore" });
    }
}
