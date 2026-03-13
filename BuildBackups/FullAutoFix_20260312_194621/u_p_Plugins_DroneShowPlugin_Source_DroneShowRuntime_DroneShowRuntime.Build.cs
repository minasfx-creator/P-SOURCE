using UnrealBuildTool;
using System.Collections.Generic;

public class DroneShowRuntime : ModuleRules
{
    public DroneShowRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
        PrivateDependencyModuleNames.AddRange(new string[] { "Sockets", "Networking", "Json", "JsonUtilities", "Niagara" });
    }
}
