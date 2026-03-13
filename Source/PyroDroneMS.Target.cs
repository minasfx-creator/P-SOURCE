using UnrealBuildTool;
using System.Collections.Generic;

public class PyroDroneMSTarget : TargetRules {
    public PyroDroneMSTarget(TargetInfo Target) : base(Target) {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        ExtraModuleNames.Add("PyroDroneCore");
        bUndefinedIdentifierErrors = false;
DefaultBuildSettings = BuildSettingsVersion.Latest;
IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
// Esta é a linha mágica para ignorar os avisos do log anterior:
bOverrideBuildEnvironment = true;
    }
}
