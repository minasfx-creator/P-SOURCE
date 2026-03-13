using UnrealBuildTool;
using System.Collections.Generic;

public class DroneShowEditor : ModuleRules
{
    public DroneShowEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core", "CoreUObject", "Engine",
            "MovieScene", "MovieSceneTracks"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "UnrealEd", "EditorStyle",
            "Slate", "SlateCore",
            "Niagara", "NiagaraEditor",
            "ScriptableToolsFramework"
        });
    }
}


