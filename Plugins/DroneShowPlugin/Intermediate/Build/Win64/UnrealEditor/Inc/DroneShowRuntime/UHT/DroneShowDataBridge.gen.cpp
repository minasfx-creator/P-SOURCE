// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneShowDataBridge.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDroneShowDataBridge() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UDroneShowDataBridge();
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UDroneShowDataBridge_NoRegister();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDroneShowDataBridge Function Clear **************************************
struct Z_Construct_UFunction_UDroneShowDataBridge_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DroneShow|Bridge" },
		{ "ModuleRelativePath", "Public/DroneShowDataBridge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Clear constinit property declarations *********************************
// ********** End Function Clear constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDroneShowDataBridge_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDroneShowDataBridge, nullptr, "Clear", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneShowDataBridge_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDroneShowDataBridge_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDroneShowDataBridge_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDroneShowDataBridge_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDroneShowDataBridge::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UDroneShowDataBridge Function Clear ****************************************

// ********** Begin Class UDroneShowDataBridge Function SetTransforms ******************************
struct Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics
{
	struct DroneShowDataBridge_eventSetTransforms_Parms
	{
		TArray<FTransform> Transforms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DroneShow|Bridge" },
		{ "ModuleRelativePath", "Public/DroneShowDataBridge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTransforms constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTransforms constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTransforms Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DroneShowDataBridge_eventSetTransforms_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::NewProp_Transforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::PropPointers) < 2048);
// ********** End Function SetTransforms Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDroneShowDataBridge, nullptr, "SetTransforms", 	Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::DroneShowDataBridge_eventSetTransforms_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::DroneShowDataBridge_eventSetTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDroneShowDataBridge::execSetTransforms)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransforms(Z_Param_Out_Transforms);
	P_NATIVE_END;
}
// ********** End Class UDroneShowDataBridge Function SetTransforms ********************************

// ********** Begin Class UDroneShowDataBridge *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDroneShowDataBridge;
UClass* UDroneShowDataBridge::GetPrivateStaticClass()
{
	using TClass = UDroneShowDataBridge;
	if (!Z_Registration_Info_UClass_UDroneShowDataBridge.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DroneShowDataBridge"),
			Z_Registration_Info_UClass_UDroneShowDataBridge.InnerSingleton,
			StaticRegisterNativesUDroneShowDataBridge,
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
	return Z_Registration_Info_UClass_UDroneShowDataBridge.InnerSingleton;
}
UClass* Z_Construct_UClass_UDroneShowDataBridge_NoRegister()
{
	return UDroneShowDataBridge::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDroneShowDataBridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DroneShowDataBridge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DroneShowDataBridge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "DroneShow|Bridge" },
		{ "ModuleRelativePath", "Public/DroneShowDataBridge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationsEuler_MetaData[] = {
		{ "Category", "DroneShow|Bridge" },
		{ "ModuleRelativePath", "Public/DroneShowDataBridge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensities_MetaData[] = {
		{ "Category", "DroneShow|Bridge" },
		{ "ModuleRelativePath", "Public/DroneShowDataBridge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameStamp_MetaData[] = {
		{ "Category", "DroneShow|Bridge" },
		{ "ModuleRelativePath", "Public/DroneShowDataBridge.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDroneShowDataBridge constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationsEuler_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationsEuler;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Intensities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameStamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDroneShowDataBridge constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Clear"), .Pointer = &UDroneShowDataBridge::execClear },
		{ .NameUTF8 = UTF8TEXT("SetTransforms"), .Pointer = &UDroneShowDataBridge::execSetTransforms },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDroneShowDataBridge_Clear, "Clear" }, // 321196963
		{ &Z_Construct_UFunction_UDroneShowDataBridge_SetTransforms, "SetTransforms" }, // 2860272148
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneShowDataBridge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDroneShowDataBridge_Statics

// ********** Begin Class UDroneShowDataBridge Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDroneShowDataBridge, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_RotationsEuler_Inner = { "RotationsEuler", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_RotationsEuler = { "RotationsEuler", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDroneShowDataBridge, RotationsEuler), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationsEuler_MetaData), NewProp_RotationsEuler_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_Intensities_Inner = { "Intensities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_Intensities = { "Intensities", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDroneShowDataBridge, Intensities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensities_MetaData), NewProp_Intensities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_FrameStamp = { "FrameStamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDroneShowDataBridge, FrameStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameStamp_MetaData), NewProp_FrameStamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDroneShowDataBridge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_RotationsEuler_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_RotationsEuler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_Intensities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_Intensities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneShowDataBridge_Statics::NewProp_FrameStamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneShowDataBridge_Statics::PropPointers) < 2048);
// ********** End Class UDroneShowDataBridge Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UDroneShowDataBridge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneShowDataBridge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneShowDataBridge_Statics::ClassParams = {
	&UDroneShowDataBridge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDroneShowDataBridge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDroneShowDataBridge_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneShowDataBridge_Statics::Class_MetaDataParams), Z_Construct_UClass_UDroneShowDataBridge_Statics::Class_MetaDataParams)
};
void UDroneShowDataBridge::StaticRegisterNativesUDroneShowDataBridge()
{
	UClass* Class = UDroneShowDataBridge::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDroneShowDataBridge_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDroneShowDataBridge()
{
	if (!Z_Registration_Info_UClass_UDroneShowDataBridge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneShowDataBridge.OuterSingleton, Z_Construct_UClass_UDroneShowDataBridge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDroneShowDataBridge.OuterSingleton;
}
UDroneShowDataBridge::UDroneShowDataBridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDroneShowDataBridge);
UDroneShowDataBridge::~UDroneShowDataBridge() {}
// ********** End Class UDroneShowDataBridge *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h__Script_DroneShowRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDroneShowDataBridge, UDroneShowDataBridge::StaticClass, TEXT("UDroneShowDataBridge"), &Z_Registration_Info_UClass_UDroneShowDataBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneShowDataBridge), 1959325909U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h__Script_DroneShowRuntime_3687765543{
	TEXT("/Script/DroneShowRuntime"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h__Script_DroneShowRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h__Script_DroneShowRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
