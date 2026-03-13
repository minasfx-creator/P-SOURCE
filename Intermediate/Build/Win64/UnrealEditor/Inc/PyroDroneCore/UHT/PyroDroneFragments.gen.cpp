// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fragments/PyroDroneFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePyroDroneFragments() {}

// ********** Begin Cross Module References ********************************************************
PYRODRONECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDMXColorFragment();
PYRODRONECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProfessionalShowFragment();
UPackage* Z_Construct_UPackage__Script_PyroDroneCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProfessionalShowFragment *****************************************
struct Z_Construct_UScriptStruct_FProfessionalShowFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProfessionalShowFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProfessionalShowFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments/PyroDroneFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProfessionalShowFragment constinit property declarations *********
// ********** End ScriptStruct FProfessionalShowFragment constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfessionalShowFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProfessionalShowFragment_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProfessionalShowFragment;
class UScriptStruct* FProfessionalShowFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProfessionalShowFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProfessionalShowFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfessionalShowFragment, (UObject*)Z_Construct_UPackage__Script_PyroDroneCore(), TEXT("ProfessionalShowFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FProfessionalShowFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfessionalShowFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PyroDroneCore,
	nullptr,
	&NewStructOps,
	"ProfessionalShowFragment",
	nullptr,
	0,
	sizeof(FProfessionalShowFragment),
	alignof(FProfessionalShowFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfessionalShowFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfessionalShowFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfessionalShowFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FProfessionalShowFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProfessionalShowFragment.InnerSingleton, Z_Construct_UScriptStruct_FProfessionalShowFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProfessionalShowFragment.InnerSingleton);
}
// ********** End ScriptStruct FProfessionalShowFragment *******************************************

// ********** Begin ScriptStruct FDMXColorFragment *************************************************
struct Z_Construct_UScriptStruct_FDMXColorFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDMXColorFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDMXColorFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments/PyroDroneFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDMXColorFragment constinit property declarations *****************
// ********** End ScriptStruct FDMXColorFragment constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXColorFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDMXColorFragment_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDMXColorFragment;
class UScriptStruct* FDMXColorFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDMXColorFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDMXColorFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXColorFragment, (UObject*)Z_Construct_UPackage__Script_PyroDroneCore(), TEXT("DMXColorFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FDMXColorFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXColorFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PyroDroneCore,
	nullptr,
	&NewStructOps,
	"DMXColorFragment",
	nullptr,
	0,
	sizeof(FDMXColorFragment),
	alignof(FDMXColorFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXColorFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDMXColorFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FDMXColorFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDMXColorFragment.InnerSingleton, Z_Construct_UScriptStruct_FDMXColorFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDMXColorFragment.InnerSingleton);
}
// ********** End ScriptStruct FDMXColorFragment ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Fragments_PyroDroneFragments_h__Script_PyroDroneCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProfessionalShowFragment::StaticStruct, Z_Construct_UScriptStruct_FProfessionalShowFragment_Statics::NewStructOps, TEXT("ProfessionalShowFragment"),&Z_Registration_Info_UScriptStruct_FProfessionalShowFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfessionalShowFragment), 4063916284U) },
		{ FDMXColorFragment::StaticStruct, Z_Construct_UScriptStruct_FDMXColorFragment_Statics::NewStructOps, TEXT("DMXColorFragment"),&Z_Registration_Info_UScriptStruct_FDMXColorFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXColorFragment), 1645767387U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Fragments_PyroDroneFragments_h__Script_PyroDroneCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Fragments_PyroDroneFragments_h__Script_PyroDroneCore_1429390102{
	TEXT("/Script/PyroDroneCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Fragments_PyroDroneFragments_h__Script_PyroDroneCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Fragments_PyroDroneFragments_h__Script_PyroDroneCore_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
