using UnrealBuildTool;

public class PyroDroneCore : ModuleRules {
public PyroDroneCore(ReadOnlyTargetRules Target) : base(Target) {
PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

// Correção para UE 5.7: Nível de aviso de cast seguro
CppCompileWarningSettings.UnsafeTypeCastWarningLevel = WarningLevel.Error;

PublicDependencyModuleNames.AddRange(new string { 
"Core", "CoreUObject", "Engine", "InputCore", 
"MassEntity", "MassCommon", "MassMovement", "MassSpawner",
"Niagara", "DMXRuntime", "DMXProtocol", "Json", "JsonUtilities",
"ScriptableToolsFramework", "AudioSynesthesia", "MovieScene"
});
}
}
