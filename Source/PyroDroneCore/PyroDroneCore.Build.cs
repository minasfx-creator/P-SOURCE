using UnrealBuildTool;
public class PyroDroneCore : ModuleRules {
    public PyroDroneCore(ReadOnlyTargetRules Target) : base(Target) {
        bEnableUndefinedIdentifierWarnings = false;
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { 
            "Core", "CoreUObject", "Engine", "InputCore", 
            "MassEntity", "MassCommon", "MassRepresentation" 
        });
    }
}
