// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataInterfaceDroneArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDroneArray() {}

// ********** Begin Cross Module References ********************************************************
DRONESHOWNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDroneArray();
DRONESHOWNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
UPackage* Z_Construct_UPackage__Script_DroneShowNiagara();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNiagaraDataInterfaceDroneArray ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNiagaraDataInterfaceDroneArray;
UClass* UNiagaraDataInterfaceDroneArray::GetPrivateStaticClass()
{
	using TClass = UNiagaraDataInterfaceDroneArray;
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDroneArray.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NiagaraDataInterfaceDroneArray"),
			Z_Registration_Info_UClass_UNiagaraDataInterfaceDroneArray.InnerSingleton,
			StaticRegisterNativesUNiagaraDataInterfaceDroneArray,
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
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceDroneArray.InnerSingleton;
}
UClass* Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_NoRegister()
{
	return UNiagaraDataInterfaceDroneArray::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "DroneShow" },
		{ "DisplayName", "Drone Array Data Interface" },
		{ "IncludePath", "NiagaraDataInterfaceDroneArray.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceDroneArray.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNiagaraDataInterfaceDroneArray constinit property declarations **********
// ********** End Class UNiagaraDataInterfaceDroneArray constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDroneArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_Statics
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_Statics::ClassParams = {
	&UNiagaraDataInterfaceDroneArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_Statics::Class_MetaDataParams)
};
void UNiagaraDataInterfaceDroneArray::StaticRegisterNativesUNiagaraDataInterfaceDroneArray()
{
}
UClass* Z_Construct_UClass_UNiagaraDataInterfaceDroneArray()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDroneArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDroneArray.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDroneArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceDroneArray.OuterSingleton;
}
UNiagaraDataInterfaceDroneArray::UNiagaraDataInterfaceDroneArray(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNiagaraDataInterfaceDroneArray);
UNiagaraDataInterfaceDroneArray::~UNiagaraDataInterfaceDroneArray() {}
// ********** End Class UNiagaraDataInterfaceDroneArray ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowNiagara_Public_NiagaraDataInterfaceDroneArray_h__Script_DroneShowNiagara_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDroneArray, UNiagaraDataInterfaceDroneArray::StaticClass, TEXT("UNiagaraDataInterfaceDroneArray"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDroneArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDroneArray), 3162075215U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowNiagara_Public_NiagaraDataInterfaceDroneArray_h__Script_DroneShowNiagara_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowNiagara_Public_NiagaraDataInterfaceDroneArray_h__Script_DroneShowNiagara_88555986{
	TEXT("/Script/DroneShowNiagara"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowNiagara_Public_NiagaraDataInterfaceDroneArray_h__Script_DroneShowNiagara_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowNiagara_Public_NiagaraDataInterfaceDroneArray_h__Script_DroneShowNiagara_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
