// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PyroPhysics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePyroPhysics() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UPyroPhysics();
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UPyroPhysics_NoRegister();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPyroPhysics Function ComputePyroAccel ***********************************
struct Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics
{
	struct PyroPhysics_eventComputePyroAccel_Parms
	{
		FVector Velocity;
		float Mass;
		float Area;
		float Cd;
		float Rho;
		FVector Wind;
		FVector Gravity;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pyro" },
		{ "ModuleRelativePath", "Public/PyroPhysics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wind_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ComputePyroAccel constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Area;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rho;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ComputePyroAccel constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ComputePyroAccel Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PyroPhysics_eventComputePyroAccel_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PyroPhysics_eventComputePyroAccel_Parms, Mass), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PyroPhysics_eventComputePyroAccel_Parms, Area), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Cd = { "Cd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PyroPhysics_eventComputePyroAccel_Parms, Cd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Rho = { "Rho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PyroPhysics_eventComputePyroAccel_Parms, Rho), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Wind = { "Wind", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PyroPhysics_eventComputePyroAccel_Parms, Wind), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wind_MetaData), NewProp_Wind_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PyroPhysics_eventComputePyroAccel_Parms, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PyroPhysics_eventComputePyroAccel_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Cd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Rho,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Wind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::PropPointers) < 2048);
// ********** End Function ComputePyroAccel Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPyroPhysics, nullptr, "ComputePyroAccel", 	Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::PyroPhysics_eventComputePyroAccel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::PyroPhysics_eventComputePyroAccel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPyroPhysics::execComputePyroAccel)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Mass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Area);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Cd);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rho);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Wind);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Gravity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPyroPhysics::ComputePyroAccel(Z_Param_Out_Velocity,Z_Param_Mass,Z_Param_Area,Z_Param_Cd,Z_Param_Rho,Z_Param_Out_Wind,Z_Param_Out_Gravity);
	P_NATIVE_END;
}
// ********** End Class UPyroPhysics Function ComputePyroAccel *************************************

// ********** Begin Class UPyroPhysics *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPyroPhysics;
UClass* UPyroPhysics::GetPrivateStaticClass()
{
	using TClass = UPyroPhysics;
	if (!Z_Registration_Info_UClass_UPyroPhysics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PyroPhysics"),
			Z_Registration_Info_UClass_UPyroPhysics.InnerSingleton,
			StaticRegisterNativesUPyroPhysics,
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
	return Z_Registration_Info_UClass_UPyroPhysics.InnerSingleton;
}
UClass* Z_Construct_UClass_UPyroPhysics_NoRegister()
{
	return UPyroPhysics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPyroPhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PyroPhysics.h" },
		{ "ModuleRelativePath", "Public/PyroPhysics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPyroPhysics constinit property declarations *****************************
// ********** End Class UPyroPhysics constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ComputePyroAccel"), .Pointer = &UPyroPhysics::execComputePyroAccel },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyroPhysics_ComputePyroAccel, "ComputePyroAccel" }, // 282574886
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyroPhysics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPyroPhysics_Statics
UObject* (*const Z_Construct_UClass_UPyroPhysics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPyroPhysics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyroPhysics_Statics::ClassParams = {
	&UPyroPhysics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPyroPhysics_Statics::Class_MetaDataParams), Z_Construct_UClass_UPyroPhysics_Statics::Class_MetaDataParams)
};
void UPyroPhysics::StaticRegisterNativesUPyroPhysics()
{
	UClass* Class = UPyroPhysics::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPyroPhysics_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPyroPhysics()
{
	if (!Z_Registration_Info_UClass_UPyroPhysics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyroPhysics.OuterSingleton, Z_Construct_UClass_UPyroPhysics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPyroPhysics.OuterSingleton;
}
UPyroPhysics::UPyroPhysics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPyroPhysics);
UPyroPhysics::~UPyroPhysics() {}
// ********** End Class UPyroPhysics ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h__Script_DroneShowRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPyroPhysics, UPyroPhysics::StaticClass, TEXT("UPyroPhysics"), &Z_Registration_Info_UClass_UPyroPhysics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyroPhysics), 617624351U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h__Script_DroneShowRuntime_405528203{
	TEXT("/Script/DroneShowRuntime"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h__Script_DroneShowRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h__Script_DroneShowRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
