// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/PyroDroneGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePyroDroneGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PYRODRONECORE_API UClass* Z_Construct_UClass_APyroDroneGameMode();
PYRODRONECORE_API UClass* Z_Construct_UClass_APyroDroneGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PyroDroneCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APyroDroneGameMode Function GenerateDroneShow ****************************
struct Z_Construct_UFunction_APyroDroneGameMode_GenerateDroneShow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PyroDrone" },
		{ "ModuleRelativePath", "Public/Core/PyroDroneGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateDroneShow constinit property declarations *********************
// ********** End Function GenerateDroneShow constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APyroDroneGameMode_GenerateDroneShow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APyroDroneGameMode, nullptr, "GenerateDroneShow", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APyroDroneGameMode_GenerateDroneShow_Statics::Function_MetaDataParams), Z_Construct_UFunction_APyroDroneGameMode_GenerateDroneShow_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APyroDroneGameMode_GenerateDroneShow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APyroDroneGameMode_GenerateDroneShow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APyroDroneGameMode::execGenerateDroneShow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateDroneShow();
	P_NATIVE_END;
}
// ********** End Class APyroDroneGameMode Function GenerateDroneShow ******************************

// ********** Begin Class APyroDroneGameMode *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APyroDroneGameMode;
UClass* APyroDroneGameMode::GetPrivateStaticClass()
{
	using TClass = APyroDroneGameMode;
	if (!Z_Registration_Info_UClass_APyroDroneGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PyroDroneGameMode"),
			Z_Registration_Info_UClass_APyroDroneGameMode.InnerSingleton,
			StaticRegisterNativesAPyroDroneGameMode,
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
	return Z_Registration_Info_UClass_APyroDroneGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APyroDroneGameMode_NoRegister()
{
	return APyroDroneGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APyroDroneGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/PyroDroneGameMode.h" },
		{ "ModuleRelativePath", "Public/Core/PyroDroneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class APyroDroneGameMode constinit property declarations ***********************
// ********** End Class APyroDroneGameMode constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateDroneShow"), .Pointer = &APyroDroneGameMode::execGenerateDroneShow },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APyroDroneGameMode_GenerateDroneShow, "GenerateDroneShow" }, // 2608079363
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APyroDroneGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APyroDroneGameMode_Statics
UObject* (*const Z_Construct_UClass_APyroDroneGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PyroDroneCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APyroDroneGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APyroDroneGameMode_Statics::ClassParams = {
	&APyroDroneGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APyroDroneGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APyroDroneGameMode_Statics::Class_MetaDataParams)
};
void APyroDroneGameMode::StaticRegisterNativesAPyroDroneGameMode()
{
	UClass* Class = APyroDroneGameMode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APyroDroneGameMode_Statics::Funcs));
}
UClass* Z_Construct_UClass_APyroDroneGameMode()
{
	if (!Z_Registration_Info_UClass_APyroDroneGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APyroDroneGameMode.OuterSingleton, Z_Construct_UClass_APyroDroneGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APyroDroneGameMode.OuterSingleton;
}
APyroDroneGameMode::APyroDroneGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APyroDroneGameMode);
APyroDroneGameMode::~APyroDroneGameMode() {}
// ********** End Class APyroDroneGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h__Script_PyroDroneCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APyroDroneGameMode, APyroDroneGameMode::StaticClass, TEXT("APyroDroneGameMode"), &Z_Registration_Info_UClass_APyroDroneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APyroDroneGameMode), 3723465554U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h__Script_PyroDroneCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h__Script_PyroDroneCore_4210148987{
	TEXT("/Script/PyroDroneCore"),
	Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h__Script_PyroDroneCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h__Script_PyroDroneCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
