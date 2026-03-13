// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneMovementProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDroneMovementProcessor() {}

// ********** Begin Cross Module References ********************************************************
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UDroneMovementProcessor();
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UDroneMovementProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDroneMovementProcessor **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDroneMovementProcessor;
UClass* UDroneMovementProcessor::GetPrivateStaticClass()
{
	using TClass = UDroneMovementProcessor;
	if (!Z_Registration_Info_UClass_UDroneMovementProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DroneMovementProcessor"),
			Z_Registration_Info_UClass_UDroneMovementProcessor.InnerSingleton,
			StaticRegisterNativesUDroneMovementProcessor,
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
	return Z_Registration_Info_UClass_UDroneMovementProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UDroneMovementProcessor_NoRegister()
{
	return UDroneMovementProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDroneMovementProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DroneMovementProcessor.h" },
		{ "ModuleRelativePath", "Public/DroneMovementProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDroneMovementProcessor constinit property declarations ******************
// ********** End Class UDroneMovementProcessor constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneMovementProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDroneMovementProcessor_Statics
UObject* (*const Z_Construct_UClass_UDroneMovementProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneMovementProcessor_Statics::ClassParams = {
	&UDroneMovementProcessor::StaticClass,
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
	0x400030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneMovementProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UDroneMovementProcessor_Statics::Class_MetaDataParams)
};
void UDroneMovementProcessor::StaticRegisterNativesUDroneMovementProcessor()
{
}
UClass* Z_Construct_UClass_UDroneMovementProcessor()
{
	if (!Z_Registration_Info_UClass_UDroneMovementProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneMovementProcessor.OuterSingleton, Z_Construct_UClass_UDroneMovementProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDroneMovementProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDroneMovementProcessor);
UDroneMovementProcessor::~UDroneMovementProcessor() {}
// ********** End Class UDroneMovementProcessor ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h__Script_DroneShowRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDroneMovementProcessor, UDroneMovementProcessor::StaticClass, TEXT("UDroneMovementProcessor"), &Z_Registration_Info_UClass_UDroneMovementProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneMovementProcessor), 3413724120U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h__Script_DroneShowRuntime_874067459{
	TEXT("/Script/DroneShowRuntime"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h__Script_DroneShowRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h__Script_DroneShowRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
