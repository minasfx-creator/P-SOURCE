// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SVGParser.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSVGParser() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_USVGParser();
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_USVGParser_NoRegister();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USVGParser ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USVGParser;
UClass* USVGParser::GetPrivateStaticClass()
{
	using TClass = USVGParser;
	if (!Z_Registration_Info_UClass_USVGParser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SVGParser"),
			Z_Registration_Info_UClass_USVGParser.InnerSingleton,
			StaticRegisterNativesUSVGParser,
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
	return Z_Registration_Info_UClass_USVGParser.InnerSingleton;
}
UClass* Z_Construct_UClass_USVGParser_NoRegister()
{
	return USVGParser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USVGParser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SVGParser.h" },
		{ "ModuleRelativePath", "Public/SVGParser.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USVGParser constinit property declarations *******************************
// ********** End Class USVGParser constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USVGParser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USVGParser_Statics
UObject* (*const Z_Construct_UClass_USVGParser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USVGParser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USVGParser_Statics::ClassParams = {
	&USVGParser::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USVGParser_Statics::Class_MetaDataParams), Z_Construct_UClass_USVGParser_Statics::Class_MetaDataParams)
};
void USVGParser::StaticRegisterNativesUSVGParser()
{
}
UClass* Z_Construct_UClass_USVGParser()
{
	if (!Z_Registration_Info_UClass_USVGParser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USVGParser.OuterSingleton, Z_Construct_UClass_USVGParser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USVGParser.OuterSingleton;
}
USVGParser::USVGParser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USVGParser);
USVGParser::~USVGParser() {}
// ********** End Class USVGParser *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h__Script_DroneShowRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USVGParser, USVGParser::StaticClass, TEXT("USVGParser"), &Z_Registration_Info_UClass_USVGParser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USVGParser), 446279720U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h__Script_DroneShowRuntime_363037985{
	TEXT("/Script/DroneShowRuntime"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h__Script_DroneShowRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h__Script_DroneShowRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
