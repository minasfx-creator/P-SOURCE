// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GDTFParser.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGDTFParser() {}

// ********** Begin Cross Module References ********************************************************
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGDTFChannel();
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGDTFFixture();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGDTFChannel ******************************************************
struct Z_Construct_UScriptStruct_FGDTFChannel_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGDTFChannel); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGDTFChannel); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GDTFParser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/GDTFParser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GDTFParser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Public/GDTFParser.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGDTFChannel constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Function;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGDTFChannel constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGDTFChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGDTFChannel_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGDTFChannel;
class UScriptStruct* FGDTFChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGDTFChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGDTFChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGDTFChannel, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("GDTFChannel"));
	}
	return Z_Registration_Info_UScriptStruct_FGDTFChannel.OuterSingleton;
	}

// ********** Begin ScriptStruct FGDTFChannel Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGDTFChannel_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGDTFChannel, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGDTFChannel_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGDTFChannel, ChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelIndex_MetaData), NewProp_ChannelIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGDTFChannel_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGDTFChannel, Function), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGDTFChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGDTFChannel_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGDTFChannel_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGDTFChannel_Statics::NewProp_Function,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGDTFChannel_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGDTFChannel Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGDTFChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	nullptr,
	&NewStructOps,
	"GDTFChannel",
	Z_Construct_UScriptStruct_FGDTFChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGDTFChannel_Statics::PropPointers),
	sizeof(FGDTFChannel),
	alignof(FGDTFChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGDTFChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGDTFChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGDTFChannel()
{
	if (!Z_Registration_Info_UScriptStruct_FGDTFChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGDTFChannel.InnerSingleton, Z_Construct_UScriptStruct_FGDTFChannel_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGDTFChannel.InnerSingleton);
}
// ********** End ScriptStruct FGDTFChannel ********************************************************

// ********** Begin ScriptStruct FGDTFFixture ******************************************************
struct Z_Construct_UScriptStruct_FGDTFFixture_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGDTFFixture); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGDTFFixture); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GDTFParser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manufacturer_MetaData[] = {
		{ "ModuleRelativePath", "Public/GDTFParser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/GDTFParser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
		{ "ModuleRelativePath", "Public/GDTFParser.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGDTFFixture constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Manufacturer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGDTFFixture constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGDTFFixture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGDTFFixture_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGDTFFixture;
class UScriptStruct* FGDTFFixture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGDTFFixture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGDTFFixture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGDTFFixture, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("GDTFFixture"));
	}
	return Z_Registration_Info_UScriptStruct_FGDTFFixture.OuterSingleton;
	}

// ********** Begin ScriptStruct FGDTFFixture Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewProp_Manufacturer = { "Manufacturer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGDTFFixture, Manufacturer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manufacturer_MetaData), NewProp_Manufacturer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGDTFFixture, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGDTFChannel, METADATA_PARAMS(0, nullptr) }; // 366082956
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGDTFFixture, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channels_MetaData), NewProp_Channels_MetaData) }; // 366082956
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGDTFFixture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewProp_Manufacturer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewProp_Channels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewProp_Channels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGDTFFixture_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGDTFFixture Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGDTFFixture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	nullptr,
	&NewStructOps,
	"GDTFFixture",
	Z_Construct_UScriptStruct_FGDTFFixture_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGDTFFixture_Statics::PropPointers),
	sizeof(FGDTFFixture),
	alignof(FGDTFFixture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGDTFFixture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGDTFFixture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGDTFFixture()
{
	if (!Z_Registration_Info_UScriptStruct_FGDTFFixture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGDTFFixture.InnerSingleton, Z_Construct_UScriptStruct_FGDTFFixture_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGDTFFixture.InnerSingleton);
}
// ********** End ScriptStruct FGDTFFixture ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_GDTFParser_h__Script_DroneShowRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGDTFChannel::StaticStruct, Z_Construct_UScriptStruct_FGDTFChannel_Statics::NewStructOps, TEXT("GDTFChannel"),&Z_Registration_Info_UScriptStruct_FGDTFChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGDTFChannel), 366082956U) },
		{ FGDTFFixture::StaticStruct, Z_Construct_UScriptStruct_FGDTFFixture_Statics::NewStructOps, TEXT("GDTFFixture"),&Z_Registration_Info_UScriptStruct_FGDTFFixture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGDTFFixture), 3213276185U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_GDTFParser_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_GDTFParser_h__Script_DroneShowRuntime_170067015{
	TEXT("/Script/DroneShowRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_GDTFParser_h__Script_DroneShowRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_GDTFParser_h__Script_DroneShowRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
