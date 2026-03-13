// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneDroneSection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneDroneSection() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DRONESHOWEDITOR_API UClass* Z_Construct_UClass_UMovieSceneDroneSection();
DRONESHOWEDITOR_API UClass* Z_Construct_UClass_UMovieSceneDroneSection_NoRegister();
DRONESHOWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDroneCue();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
UPackage* Z_Construct_UPackage__Script_DroneShowEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDroneCue *********************************************************
struct Z_Construct_UScriptStruct_FDroneCue_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDroneCue); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDroneCue); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneDroneSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[] = {
		{ "Category", "DroneCue" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "DroneCue" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "DroneCue" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "DroneCue" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "DroneCue" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneSection.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDroneCue constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDroneCue constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDroneCue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDroneCue_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDroneCue;
class UScriptStruct* FDroneCue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDroneCue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDroneCue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDroneCue, (UObject*)Z_Construct_UPackage__Script_DroneShowEditor(), TEXT("DroneCue"));
	}
	return Z_Registration_Info_UScriptStruct_FDroneCue.OuterSingleton;
	}

// ********** Begin ScriptStruct FDroneCue Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneCue, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentId_MetaData), NewProp_AgentId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneCue, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneCue, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneCue, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneCue, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDroneCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_AgentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneCue_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneCue_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDroneCue Property Definitions **************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDroneCue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowEditor,
	nullptr,
	&NewStructOps,
	"DroneCue",
	Z_Construct_UScriptStruct_FDroneCue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneCue_Statics::PropPointers),
	sizeof(FDroneCue),
	alignof(FDroneCue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneCue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDroneCue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDroneCue()
{
	if (!Z_Registration_Info_UScriptStruct_FDroneCue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDroneCue.InnerSingleton, Z_Construct_UScriptStruct_FDroneCue_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDroneCue.InnerSingleton);
}
// ********** End ScriptStruct FDroneCue ***********************************************************

// ********** Begin Class UMovieSceneDroneSection **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneDroneSection;
UClass* UMovieSceneDroneSection::GetPrivateStaticClass()
{
	using TClass = UMovieSceneDroneSection;
	if (!Z_Registration_Info_UClass_UMovieSceneDroneSection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MovieSceneDroneSection"),
			Z_Registration_Info_UClass_UMovieSceneDroneSection.InnerSingleton,
			StaticRegisterNativesUMovieSceneDroneSection,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMovieSceneDroneSection.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovieSceneDroneSection_NoRegister()
{
	return UMovieSceneDroneSection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovieSceneDroneSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneDroneSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cues_MetaData[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneSection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneDroneSection constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMovieSceneDroneSection constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDroneSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMovieSceneDroneSection_Statics

// ********** Begin Class UMovieSceneDroneSection Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDroneSection_Statics::NewProp_Cues_Inner = { "Cues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDroneCue, METADATA_PARAMS(0, nullptr) }; // 2198150956
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDroneSection_Statics::NewProp_Cues = { "Cues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDroneSection, Cues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cues_MetaData), NewProp_Cues_MetaData) }; // 2198150956
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDroneSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDroneSection_Statics::NewProp_Cues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDroneSection_Statics::NewProp_Cues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDroneSection_Statics::PropPointers) < 2048);
// ********** End Class UMovieSceneDroneSection Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UMovieSceneDroneSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDroneSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDroneSection_Statics::ClassParams = {
	&UMovieSceneDroneSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneDroneSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDroneSection_Statics::PropPointers),
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDroneSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDroneSection_Statics::Class_MetaDataParams)
};
void UMovieSceneDroneSection::StaticRegisterNativesUMovieSceneDroneSection()
{
}
UClass* Z_Construct_UClass_UMovieSceneDroneSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDroneSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDroneSection.OuterSingleton, Z_Construct_UClass_UMovieSceneDroneSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDroneSection.OuterSingleton;
}
UMovieSceneDroneSection::UMovieSceneDroneSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneDroneSection);
UMovieSceneDroneSection::~UMovieSceneDroneSection() {}
// ********** End Class UMovieSceneDroneSection ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h__Script_DroneShowEditor_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDroneCue::StaticStruct, Z_Construct_UScriptStruct_FDroneCue_Statics::NewStructOps, TEXT("DroneCue"),&Z_Registration_Info_UScriptStruct_FDroneCue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDroneCue), 2198150956U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDroneSection, UMovieSceneDroneSection::StaticClass, TEXT("UMovieSceneDroneSection"), &Z_Registration_Info_UClass_UMovieSceneDroneSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDroneSection), 3275936451U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h__Script_DroneShowEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h__Script_DroneShowEditor_42276514{
	TEXT("/Script/DroneShowEditor"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h__Script_DroneShowEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h__Script_DroneShowEditor_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h__Script_DroneShowEditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h__Script_DroneShowEditor_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
