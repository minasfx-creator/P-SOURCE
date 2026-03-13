// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Processors/PyroDroneProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePyroDroneProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
PYRODRONECORE_API UClass* Z_Construct_UClass_UPyroDroneProcessor();
PYRODRONECORE_API UClass* Z_Construct_UClass_UPyroDroneProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_PyroDroneCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPyroDroneProcessor ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPyroDroneProcessor;
UClass* UPyroDroneProcessor::GetPrivateStaticClass()
{
	using TClass = UPyroDroneProcessor;
	if (!Z_Registration_Info_UClass_UPyroDroneProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PyroDroneProcessor"),
			Z_Registration_Info_UClass_UPyroDroneProcessor.InnerSingleton,
			StaticRegisterNativesUPyroDroneProcessor,
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
	return Z_Registration_Info_UClass_UPyroDroneProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UPyroDroneProcessor_NoRegister()
{
	return UPyroDroneProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPyroDroneProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/PyroDroneProcessor.h" },
		{ "ModuleRelativePath", "Public/Processors/PyroDroneProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPyroDroneProcessor constinit property declarations **********************
// ********** End Class UPyroDroneProcessor constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyroDroneProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPyroDroneProcessor_Statics
UObject* (*const Z_Construct_UClass_UPyroDroneProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_PyroDroneCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPyroDroneProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyroDroneProcessor_Statics::ClassParams = {
	&UPyroDroneProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPyroDroneProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPyroDroneProcessor_Statics::Class_MetaDataParams)
};
void UPyroDroneProcessor::StaticRegisterNativesUPyroDroneProcessor()
{
}
UClass* Z_Construct_UClass_UPyroDroneProcessor()
{
	if (!Z_Registration_Info_UClass_UPyroDroneProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyroDroneProcessor.OuterSingleton, Z_Construct_UClass_UPyroDroneProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPyroDroneProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPyroDroneProcessor);
UPyroDroneProcessor::~UPyroDroneProcessor() {}
// ********** End Class UPyroDroneProcessor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h__Script_PyroDroneCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPyroDroneProcessor, UPyroDroneProcessor::StaticClass, TEXT("UPyroDroneProcessor"), &Z_Registration_Info_UClass_UPyroDroneProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyroDroneProcessor), 3191149888U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h__Script_PyroDroneCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h__Script_PyroDroneCore_3389479950{
	TEXT("/Script/PyroDroneCore"),
	Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h__Script_PyroDroneCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h__Script_PyroDroneCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
