// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VVIZExporter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVVIZExporter() {}

// ********** Begin Cross Module References ********************************************************
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAgentPerformance();
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAgentSample();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAgentSample ******************************************************
struct Z_Construct_UScriptStruct_FAgentSample_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAgentSample); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAgentSample); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VVIZExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dx_MetaData[] = {
		{ "ModuleRelativePath", "Public/VVIZExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dy_MetaData[] = {
		{ "ModuleRelativePath", "Public/VVIZExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dz_MetaData[] = {
		{ "ModuleRelativePath", "Public/VVIZExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VVIZExporter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAgentSample constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAgentSample constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentSample>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAgentSample_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAgentSample;
class UScriptStruct* FAgentSample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAgentSample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAgentSample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentSample, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("AgentSample"));
	}
	return Z_Registration_Info_UScriptStruct_FAgentSample.OuterSingleton;
	}

// ********** Begin ScriptStruct FAgentSample Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentSample_Statics::NewProp_dx = { "dx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentSample, dx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dx_MetaData), NewProp_dx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentSample_Statics::NewProp_dy = { "dy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentSample, dy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dy_MetaData), NewProp_dy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentSample_Statics::NewProp_dz = { "dz", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentSample, dz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dz_MetaData), NewProp_dz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentSample_Statics::NewProp_dh = { "dh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentSample, dh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dh_MetaData), NewProp_dh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentSample_Statics::NewProp_dx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentSample_Statics::NewProp_dy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentSample_Statics::NewProp_dz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentSample_Statics::NewProp_dh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentSample_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAgentSample Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentSample_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	nullptr,
	&NewStructOps,
	"AgentSample",
	Z_Construct_UScriptStruct_FAgentSample_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentSample_Statics::PropPointers),
	sizeof(FAgentSample),
	alignof(FAgentSample),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentSample_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAgentSample_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAgentSample()
{
	if (!Z_Registration_Info_UScriptStruct_FAgentSample.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAgentSample.InnerSingleton, Z_Construct_UScriptStruct_FAgentSample_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAgentSample.InnerSingleton);
}
// ********** End ScriptStruct FAgentSample ********************************************************

// ********** Begin ScriptStruct FAgentPerformance *************************************************
struct Z_Construct_UScriptStruct_FAgentPerformance_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAgentPerformance); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAgentPerformance); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VVIZExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VVIZExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[] = {
		{ "ModuleRelativePath", "Public/VVIZExporter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAgentPerformance constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AgentId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAgentPerformance constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentPerformance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAgentPerformance_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAgentPerformance;
class UScriptStruct* FAgentPerformance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAgentPerformance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAgentPerformance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentPerformance, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("AgentPerformance"));
	}
	return Z_Registration_Info_UScriptStruct_FAgentPerformance.OuterSingleton;
	}

// ********** Begin ScriptStruct FAgentPerformance Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentPerformance_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentPerformance, AgentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentId_MetaData), NewProp_AgentId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentPerformance_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAgentSample, METADATA_PARAMS(0, nullptr) }; // 3754467527
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAgentPerformance_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentPerformance, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Samples_MetaData), NewProp_Samples_MetaData) }; // 3754467527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentPerformance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentPerformance_Statics::NewProp_AgentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentPerformance_Statics::NewProp_Samples_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentPerformance_Statics::NewProp_Samples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentPerformance_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAgentPerformance Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentPerformance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	nullptr,
	&NewStructOps,
	"AgentPerformance",
	Z_Construct_UScriptStruct_FAgentPerformance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentPerformance_Statics::PropPointers),
	sizeof(FAgentPerformance),
	alignof(FAgentPerformance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentPerformance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAgentPerformance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAgentPerformance()
{
	if (!Z_Registration_Info_UScriptStruct_FAgentPerformance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAgentPerformance.InnerSingleton, Z_Construct_UScriptStruct_FAgentPerformance_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAgentPerformance.InnerSingleton);
}
// ********** End ScriptStruct FAgentPerformance ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_VVIZExporter_h__Script_DroneShowRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAgentSample::StaticStruct, Z_Construct_UScriptStruct_FAgentSample_Statics::NewStructOps, TEXT("AgentSample"),&Z_Registration_Info_UScriptStruct_FAgentSample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAgentSample), 3754467527U) },
		{ FAgentPerformance::StaticStruct, Z_Construct_UScriptStruct_FAgentPerformance_Statics::NewStructOps, TEXT("AgentPerformance"),&Z_Registration_Info_UScriptStruct_FAgentPerformance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAgentPerformance), 289716065U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_VVIZExporter_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_VVIZExporter_h__Script_DroneShowRuntime_1785289113{
	TEXT("/Script/DroneShowRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_VVIZExporter_h__Script_DroneShowRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_VVIZExporter_h__Script_DroneShowRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
