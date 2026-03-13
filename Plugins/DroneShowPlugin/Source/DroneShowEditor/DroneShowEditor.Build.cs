using UnrealBuildTool;
using System.Collections.Generic;

public class DroneShowEditor : ModuleRules
{
    public DroneShowEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            // Auto-inserted editor dependencies
            PrivateDependencyModuleNames.Add("ScriptableToolsFramework");
            PrivateDependencyModuleNames.Add("NiagaraEditor");
            PrivateDependencyModuleNames.Add("MovieScene");
            // Added by automated fix: editor-only dependencies
            PrivateDependencyModuleNames.Add("ScriptableToolsFramework");
            PrivateDependencyModuleNames.Add("NiagaraEditor");
        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "UnrealEd", "EditorStyle", "Slate", "SlateCore", "NiagaraEditor" });
    }
}


