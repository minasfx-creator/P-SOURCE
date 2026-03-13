// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneFormationTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDroneFormationTool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DRONESHOWEDITOR_API UClass* Z_Construct_UClass_UDroneFormationTool();
DRONESHOWEDITOR_API UClass* Z_Construct_UClass_UDroneFormationTool_NoRegister();
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableClickDragTool();
UPackage* Z_Construct_UPackage__Script_DroneShowEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDroneFormationTool Function ExportSplineToMAVLinkMission ****************
struct Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics
{
	struct DroneFormationTool_eventExportSplineToMAVLinkMission_Parms
	{
		FString FilePath;
		int32 SampleRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DroneFormation" },
		{ "CPP_Default_SampleRate", "10" },
		{ "ModuleRelativePath", "Public/DroneFormationTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExportSplineToMAVLinkMission constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExportSplineToMAVLinkMission constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExportSplineToMAVLinkMission Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DroneFormationTool_eventExportSplineToMAVLinkMission_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DroneFormationTool_eventExportSplineToMAVLinkMission_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DroneFormationTool_eventExportSplineToMAVLinkMission_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DroneFormationTool_eventExportSplineToMAVLinkMission_Parms), &Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::PropPointers) < 2048);
// ********** End Function ExportSplineToMAVLinkMission Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDroneFormationTool, nullptr, "ExportSplineToMAVLinkMission", 	Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::DroneFormationTool_eventExportSplineToMAVLinkMission_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::DroneFormationTool_eventExportSplineToMAVLinkMission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDroneFormationTool::execExportSplineToMAVLinkMission)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ExportSplineToMAVLinkMission(Z_Param_FilePath,Z_Param_SampleRate);
	P_NATIVE_END;
}
// ********** End Class UDroneFormationTool Function ExportSplineToMAVLinkMission ******************

// ********** Begin Class UDroneFormationTool Function ExportSplineToVVIZ **************************
struct Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics
{
	struct DroneFormationTool_eventExportSplineToVVIZ_Parms
	{
		FString FilePath;
		int32 SampleRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DroneFormation" },
		{ "CPP_Default_SampleRate", "10" },
		{ "ModuleRelativePath", "Public/DroneFormationTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExportSplineToVVIZ constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExportSplineToVVIZ constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExportSplineToVVIZ Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DroneFormationTool_eventExportSplineToVVIZ_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DroneFormationTool_eventExportSplineToVVIZ_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DroneFormationTool_eventExportSplineToVVIZ_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DroneFormationTool_eventExportSplineToVVIZ_Parms), &Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::PropPointers) < 2048);
// ********** End Function ExportSplineToVVIZ Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDroneFormationTool, nullptr, "ExportSplineToVVIZ", 	Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::DroneFormationTool_eventExportSplineToVVIZ_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::DroneFormationTool_eventExportSplineToVVIZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDroneFormationTool::execExportSplineToVVIZ)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ExportSplineToVVIZ(Z_Param_FilePath,Z_Param_SampleRate);
	P_NATIVE_END;
}
// ********** End Class UDroneFormationTool Function ExportSplineToVVIZ ****************************

// ********** Begin Class UDroneFormationTool Function GetSplineWaypoints **************************
struct Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics
{
	struct DroneFormationTool_eventGetSplineWaypoints_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DroneFormation" },
		{ "ModuleRelativePath", "Public/DroneFormationTool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSplineWaypoints constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSplineWaypoints constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSplineWaypoints Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DroneFormationTool_eventGetSplineWaypoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::PropPointers) < 2048);
// ********** End Function GetSplineWaypoints Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDroneFormationTool, nullptr, "GetSplineWaypoints", 	Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::DroneFormationTool_eventGetSplineWaypoints_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::DroneFormationTool_eventGetSplineWaypoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDroneFormationTool::execGetSplineWaypoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetSplineWaypoints();
	P_NATIVE_END;
}
// ********** End Class UDroneFormationTool Function GetSplineWaypoints ****************************

// ********** Begin Class UDroneFormationTool ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDroneFormationTool;
UClass* UDroneFormationTool::GetPrivateStaticClass()
{
	using TClass = UDroneFormationTool;
	if (!Z_Registration_Info_UClass_UDroneFormationTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DroneFormationTool"),
			Z_Registration_Info_UClass_UDroneFormationTool.InnerSingleton,
			StaticRegisterNativesUDroneFormationTool,
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
	return Z_Registration_Info_UClass_UDroneFormationTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UDroneFormationTool_NoRegister()
{
	return UDroneFormationTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDroneFormationTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DroneFormationTool.h" },
		{ "ModuleRelativePath", "Public/DroneFormationTool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDroneFormationTool constinit property declarations **********************
// ********** End Class UDroneFormationTool constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ExportSplineToMAVLinkMission"), .Pointer = &UDroneFormationTool::execExportSplineToMAVLinkMission },
		{ .NameUTF8 = UTF8TEXT("ExportSplineToVVIZ"), .Pointer = &UDroneFormationTool::execExportSplineToVVIZ },
		{ .NameUTF8 = UTF8TEXT("GetSplineWaypoints"), .Pointer = &UDroneFormationTool::execGetSplineWaypoints },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDroneFormationTool_ExportSplineToMAVLinkMission, "ExportSplineToMAVLinkMission" }, // 2166085584
		{ &Z_Construct_UFunction_UDroneFormationTool_ExportSplineToVVIZ, "ExportSplineToVVIZ" }, // 84046389
		{ &Z_Construct_UFunction_UDroneFormationTool_GetSplineWaypoints, "GetSplineWaypoints" }, // 1730540809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneFormationTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDroneFormationTool_Statics
UObject* (*const Z_Construct_UClass_UDroneFormationTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScriptableClickDragTool,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneFormationTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneFormationTool_Statics::ClassParams = {
	&UDroneFormationTool::StaticClass,
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
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroneFormationTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDroneFormationTool_Statics::Class_MetaDataParams)
};
void UDroneFormationTool::StaticRegisterNativesUDroneFormationTool()
{
	UClass* Class = UDroneFormationTool::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDroneFormationTool_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDroneFormationTool()
{
	if (!Z_Registration_Info_UClass_UDroneFormationTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneFormationTool.OuterSingleton, Z_Construct_UClass_UDroneFormationTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDroneFormationTool.OuterSingleton;
}
UDroneFormationTool::UDroneFormationTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDroneFormationTool);
UDroneFormationTool::~UDroneFormationTool() {}
// ********** End Class UDroneFormationTool ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h__Script_DroneShowEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDroneFormationTool, UDroneFormationTool::StaticClass, TEXT("UDroneFormationTool"), &Z_Registration_Info_UClass_UDroneFormationTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneFormationTool), 620478420U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h__Script_DroneShowEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h__Script_DroneShowEditor_3899384481{
	TEXT("/Script/DroneShowEditor"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h__Script_DroneShowEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h__Script_DroneShowEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
