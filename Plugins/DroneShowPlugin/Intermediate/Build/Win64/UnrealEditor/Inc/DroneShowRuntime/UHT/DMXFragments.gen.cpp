// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDMXFragments() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXLightFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDMXLightFragment *************************************************
struct Z_Construct_UScriptStruct_FDMXLightFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDMXLightFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDMXLightFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixtureID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDMXLightFragment constinit property declarations *****************
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_FixtureID;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ChannelStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDMXLightFragment constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXLightFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDMXLightFragment_Statics
static_assert(std::is_polymorphic<FDMXLightFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FDMXLightFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDMXLightFragment;
class UScriptStruct* FDMXLightFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDMXLightFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDMXLightFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXLightFragment, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("DMXLightFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FDMXLightFragment.OuterSingleton;
	}

// ********** Begin ScriptStruct FDMXLightFragment Property Definitions ****************************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewProp_FixtureID = { "FixtureID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXLightFragment, FixtureID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixtureID_MetaData), NewProp_FixtureID_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewProp_ChannelStart = { "ChannelStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXLightFragment, ChannelStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelStart_MetaData), NewProp_ChannelStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewProp_CurrentColor = { "CurrentColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXLightFragment, CurrentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentColor_MetaData), NewProp_CurrentColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXLightFragment, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXLightFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewProp_FixtureID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewProp_ChannelStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewProp_CurrentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLightFragment_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDMXLightFragment Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXLightFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"DMXLightFragment",
	Z_Construct_UScriptStruct_FDMXLightFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLightFragment_Statics::PropPointers),
	sizeof(FDMXLightFragment),
	alignof(FDMXLightFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLightFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXLightFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDMXLightFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FDMXLightFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDMXLightFragment.InnerSingleton, Z_Construct_UScriptStruct_FDMXLightFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDMXLightFragment.InnerSingleton);
}
// ********** End ScriptStruct FDMXLightFragment ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DMXFragments_h__Script_DroneShowRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDMXLightFragment::StaticStruct, Z_Construct_UScriptStruct_FDMXLightFragment_Statics::NewStructOps, TEXT("DMXLightFragment"),&Z_Registration_Info_UScriptStruct_FDMXLightFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXLightFragment), 3475449374U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DMXFragments_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DMXFragments_h__Script_DroneShowRuntime_952862533{
	TEXT("/Script/DroneShowRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DMXFragments_h__Script_DroneShowRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DMXFragments_h__Script_DroneShowRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
