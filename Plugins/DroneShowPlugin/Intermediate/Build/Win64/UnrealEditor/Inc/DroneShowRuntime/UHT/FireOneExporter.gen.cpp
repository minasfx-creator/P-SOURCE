// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FireOneExporter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFireOneExporter() {}

// ********** Begin Cross Module References ********************************************************
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPyroEvent();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPyroEvent ********************************************************
struct Z_Construct_UScriptStruct_FPyroEvent_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPyroEvent); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPyroEvent); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireOneExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireOneExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireOneExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireOneExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Module_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireOneExporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireOneExporter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPyroEvent constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FireTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Module;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Pin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPyroEvent constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPyroEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPyroEvent_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPyroEvent;
class UScriptStruct* FPyroEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPyroEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPyroEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPyroEvent, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("PyroEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FPyroEvent.OuterSingleton;
	}

// ********** Begin ScriptStruct FPyroEvent Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPyroEvent, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_FireTime = { "FireTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPyroEvent, FireTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireTime_MetaData), NewProp_FireTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPyroEvent, EventID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventID_MetaData), NewProp_EventID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPyroEvent, Module), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Module_MetaData), NewProp_Module_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPyroEvent, Pin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pin_MetaData), NewProp_Pin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPyroEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_FireTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_EventID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_Module,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyroEvent_Statics::NewProp_Pin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyroEvent_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPyroEvent Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPyroEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	nullptr,
	&NewStructOps,
	"PyroEvent",
	Z_Construct_UScriptStruct_FPyroEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyroEvent_Statics::PropPointers),
	sizeof(FPyroEvent),
	alignof(FPyroEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyroEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPyroEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPyroEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FPyroEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPyroEvent.InnerSingleton, Z_Construct_UScriptStruct_FPyroEvent_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPyroEvent.InnerSingleton);
}
// ********** End ScriptStruct FPyroEvent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_FireOneExporter_h__Script_DroneShowRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPyroEvent::StaticStruct, Z_Construct_UScriptStruct_FPyroEvent_Statics::NewStructOps, TEXT("PyroEvent"),&Z_Registration_Info_UScriptStruct_FPyroEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPyroEvent), 1754283560U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_FireOneExporter_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_FireOneExporter_h__Script_DroneShowRuntime_3656327829{
	TEXT("/Script/DroneShowRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_FireOneExporter_h__Script_DroneShowRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_FireOneExporter_h__Script_DroneShowRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
