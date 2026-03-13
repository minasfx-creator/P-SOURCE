// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneDroneTrack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneDroneTrack() {}

// ********** Begin Cross Module References ********************************************************
DRONESHOWEDITOR_API UClass* Z_Construct_UClass_UMovieSceneDroneTrack();
DRONESHOWEDITOR_API UClass* Z_Construct_UClass_UMovieSceneDroneTrack_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
UPackage* Z_Construct_UPackage__Script_DroneShowEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMovieSceneDroneTrack ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneDroneTrack;
UClass* UMovieSceneDroneTrack::GetPrivateStaticClass()
{
	using TClass = UMovieSceneDroneTrack;
	if (!Z_Registration_Info_UClass_UMovieSceneDroneTrack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MovieSceneDroneTrack"),
			Z_Registration_Info_UClass_UMovieSceneDroneTrack.InnerSingleton,
			StaticRegisterNativesUMovieSceneDroneTrack,
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
	return Z_Registration_Info_UClass_UMovieSceneDroneTrack.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovieSceneDroneTrack_NoRegister()
{
	return UMovieSceneDroneTrack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovieSceneDroneTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneDroneTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneDroneTrack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneDroneTrack constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMovieSceneDroneTrack constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDroneTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMovieSceneDroneTrack_Statics

// ********** Begin Class UMovieSceneDroneTrack Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneDroneTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDroneTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDroneTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDroneTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDroneTrack_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDroneTrack_Statics::NewProp_Sections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDroneTrack_Statics::PropPointers) < 2048);
// ********** End Class UMovieSceneDroneTrack Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UMovieSceneDroneTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDroneTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDroneTrack_Statics::ClassParams = {
	&UMovieSceneDroneTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneDroneTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDroneTrack_Statics::PropPointers),
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDroneTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDroneTrack_Statics::Class_MetaDataParams)
};
void UMovieSceneDroneTrack::StaticRegisterNativesUMovieSceneDroneTrack()
{
}
UClass* Z_Construct_UClass_UMovieSceneDroneTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDroneTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDroneTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneDroneTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDroneTrack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneDroneTrack);
UMovieSceneDroneTrack::~UMovieSceneDroneTrack() {}
// ********** End Class UMovieSceneDroneTrack ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneTrack_h__Script_DroneShowEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDroneTrack, UMovieSceneDroneTrack::StaticClass, TEXT("UMovieSceneDroneTrack"), &Z_Registration_Info_UClass_UMovieSceneDroneTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDroneTrack), 2445847962U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneTrack_h__Script_DroneShowEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneTrack_h__Script_DroneShowEditor_3838454371{
	TEXT("/Script/DroneShowEditor"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneTrack_h__Script_DroneShowEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneTrack_h__Script_DroneShowEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
