using UnrealBuildTool;
using System.Collections.Generic;

public class DroneShowEditor : ModuleRules
{
    public DroneShowEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "UnrealEd", "EditorStyle", "Slate", "SlateCore", "NiagaraEditor" });
    }
}
