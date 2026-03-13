using UnrealBuildTool;
using System.Collections.Generic;

public class DroneShowRuntime : ModuleRules
{
    public DroneShowRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            // Auto-inserted runtime dependencies
            PrivateDependencyModuleNames.Add("Sockets");
            PrivateDependencyModuleNames.Add("Networking");
            PrivateDependencyModuleNames.Add("Json");
            PrivateDependencyModuleNames.Add("JsonUtilities");
            PrivateDependencyModuleNames.Add("Niagara");
            PrivateDependencyModuleNames.Add("MassEntity");
            PrivateDependencyModuleNames.Add("MassMovement");
            PrivateDependencyModuleNames.Add("XmlParser");
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
        PrivateDependencyModuleNames.AddRange(new string[] { "Sockets", "Networking", "Json", "JsonUtilities", "Niagara" });
    }
}

