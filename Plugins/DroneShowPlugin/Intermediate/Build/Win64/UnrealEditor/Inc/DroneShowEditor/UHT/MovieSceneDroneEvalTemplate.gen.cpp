// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneDroneEvalTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneDroneEvalTemplate() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DRONESHOWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_DroneShowEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMovieSceneDroneEvalTemplate **************************************
struct Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMovieSceneDroneEvalTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneDroneEvalTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneDroneEvalTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedDataAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneDroneEvalTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneDroneEvalTemplate constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakedDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneDroneEvalTemplate constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDroneEvalTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics
static_assert(std::is_polymorphic<FMovieSceneDroneEvalTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneDroneEvalTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneDroneEvalTemplate;
class UScriptStruct* FMovieSceneDroneEvalTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneDroneEvalTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovieSceneDroneEvalTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate, (UObject*)Z_Construct_UPackage__Script_DroneShowEditor(), TEXT("MovieSceneDroneEvalTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FMovieSceneDroneEvalTemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FMovieSceneDroneEvalTemplate Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::NewProp_BakedDataAsset = { "BakedDataAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDroneEvalTemplate, BakedDataAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedDataAsset_MetaData), NewProp_BakedDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::NewProp_BakedDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneDroneEvalTemplate Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowEditor,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneDroneEvalTemplate",
	Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::PropPointers),
	sizeof(FMovieSceneDroneEvalTemplate),
	alignof(FMovieSceneDroneEvalTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneDroneEvalTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneDroneEvalTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneDroneEvalTemplate.InnerSingleton);
}
// ********** End ScriptStruct FMovieSceneDroneEvalTemplate ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneEvalTemplate_h__Script_DroneShowEditor_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneDroneEvalTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDroneEvalTemplate_Statics::NewStructOps, TEXT("MovieSceneDroneEvalTemplate"),&Z_Registration_Info_UScriptStruct_FMovieSceneDroneEvalTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDroneEvalTemplate), 2685489705U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneEvalTemplate_h__Script_DroneShowEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneEvalTemplate_h__Script_DroneShowEditor_700081429{
	TEXT("/Script/DroneShowEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneEvalTemplate_h__Script_DroneShowEditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneEvalTemplate_h__Script_DroneShowEditor_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
