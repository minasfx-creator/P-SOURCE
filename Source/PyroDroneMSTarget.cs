using UnrealBuildTool;
using System.Collections.Generic;

public class PyroDroneMSTarget : TargetRules
{
public PyroDroneMSTarget(TargetInfo Target) : base(Target)
{
Type = TargetType.Game;
DefaultBuildSettings = BuildSettingsVersion.V5;
IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
ExtraModuleNames.Add("PyroDroneCore");
}
}
