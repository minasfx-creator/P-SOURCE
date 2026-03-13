// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MavlinkConnectorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMavlinkConnectorComponent() {}

// ********** Begin Cross Module References ********************************************************
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UMavlinkConnectorComponent();
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UMavlinkConnectorComponent_NoRegister();
DRONESHOWRUNTIME_API UEnum* Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMavlinkMode **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMavlinkMode;
static UEnum* EMavlinkMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMavlinkMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMavlinkMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("EMavlinkMode"));
	}
	return Z_Registration_Info_UEnum_EMavlinkMode.OuterSingleton;
}
template<> DRONESHOWRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMavlinkMode>()
{
	return EMavlinkMode_StaticEnum();
}
struct Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FallbackUDP.Name", "EMavlinkMode::FallbackUDP" },
		{ "MAVSDK.Name", "EMavlinkMode::MAVSDK" },
		{ "ModuleRelativePath", "Public/MavlinkConnectorComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMavlinkMode::FallbackUDP", (int64)EMavlinkMode::FallbackUDP },
		{ "EMavlinkMode::MAVSDK", (int64)EMavlinkMode::MAVSDK },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	nullptr,
	"EMavlinkMode",
	"EMavlinkMode",
	Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode()
{
	if (!Z_Registration_Info_UEnum_EMavlinkMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMavlinkMode.InnerSingleton, Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMavlinkMode.InnerSingleton;
}
// ********** End Enum EMavlinkMode ****************************************************************

// ********** Begin Class UMavlinkConnectorComponent Function InitUDP ******************************
struct Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics
{
	struct MavlinkConnectorComponent_eventInitUDP_Parms
	{
		FString Host;
		int32 Port;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MAVLink" },
		{ "ModuleRelativePath", "Public/MavlinkConnectorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitUDP constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitUDP constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitUDP Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MavlinkConnectorComponent_eventInitUDP_Parms, Host), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Host_MetaData), NewProp_Host_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MavlinkConnectorComponent_eventInitUDP_Parms, Port), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MavlinkConnectorComponent_eventInitUDP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MavlinkConnectorComponent_eventInitUDP_Parms), &Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::NewProp_Host,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::PropPointers) < 2048);
// ********** End Function InitUDP Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMavlinkConnectorComponent, nullptr, "InitUDP", 	Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::MavlinkConnectorComponent_eventInitUDP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::MavlinkConnectorComponent_eventInitUDP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMavlinkConnectorComponent::execInitUDP)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Host);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitUDP(Z_Param_Host,Z_Param_Port);
	P_NATIVE_END;
}
// ********** End Class UMavlinkConnectorComponent Function InitUDP ********************************

// ********** Begin Class UMavlinkConnectorComponent Function SendHeartbeat ************************
struct Z_Construct_UFunction_UMavlinkConnectorComponent_SendHeartbeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MAVLink" },
		{ "ModuleRelativePath", "Public/MavlinkConnectorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SendHeartbeat constinit property declarations *************************
// ********** End Function SendHeartbeat constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMavlinkConnectorComponent_SendHeartbeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMavlinkConnectorComponent, nullptr, "SendHeartbeat", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMavlinkConnectorComponent_SendHeartbeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMavlinkConnectorComponent_SendHeartbeat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMavlinkConnectorComponent_SendHeartbeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMavlinkConnectorComponent_SendHeartbeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMavlinkConnectorComponent::execSendHeartbeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendHeartbeat();
	P_NATIVE_END;
}
// ********** End Class UMavlinkConnectorComponent Function SendHeartbeat **************************

// ********** Begin Class UMavlinkConnectorComponent Function SendPositionSetpoint *****************
struct Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics
{
	struct MavlinkConnectorComponent_eventSendPositionSetpoint_Parms
	{
		int32 Seq;
		double Lat;
		double Lon;
		double Alt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MAVLink" },
		{ "ModuleRelativePath", "Public/MavlinkConnectorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SendPositionSetpoint constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seq;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Lat;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Lon;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendPositionSetpoint constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendPositionSetpoint Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::NewProp_Seq = { "Seq", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MavlinkConnectorComponent_eventSendPositionSetpoint_Parms, Seq), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::NewProp_Lat = { "Lat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MavlinkConnectorComponent_eventSendPositionSetpoint_Parms, Lat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::NewProp_Lon = { "Lon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MavlinkConnectorComponent_eventSendPositionSetpoint_Parms, Lon), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MavlinkConnectorComponent_eventSendPositionSetpoint_Parms, Alt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::NewProp_Seq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::NewProp_Lat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::NewProp_Lon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::NewProp_Alt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::PropPointers) < 2048);
// ********** End Function SendPositionSetpoint Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMavlinkConnectorComponent, nullptr, "SendPositionSetpoint", 	Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::MavlinkConnectorComponent_eventSendPositionSetpoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::MavlinkConnectorComponent_eventSendPositionSetpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMavlinkConnectorComponent::execSendPositionSetpoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Seq);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Lat);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Lon);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendPositionSetpoint(Z_Param_Seq,Z_Param_Lat,Z_Param_Lon,Z_Param_Alt);
	P_NATIVE_END;
}
// ********** End Class UMavlinkConnectorComponent Function SendPositionSetpoint *******************

// ********** Begin Class UMavlinkConnectorComponent ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMavlinkConnectorComponent;
UClass* UMavlinkConnectorComponent::GetPrivateStaticClass()
{
	using TClass = UMavlinkConnectorComponent;
	if (!Z_Registration_Info_UClass_UMavlinkConnectorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MavlinkConnectorComponent"),
			Z_Registration_Info_UClass_UMavlinkConnectorComponent.InnerSingleton,
			StaticRegisterNativesUMavlinkConnectorComponent,
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
	return Z_Registration_Info_UClass_UMavlinkConnectorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMavlinkConnectorComponent_NoRegister()
{
	return UMavlinkConnectorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMavlinkConnectorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MavlinkConnectorComponent.h" },
		{ "ModuleRelativePath", "Public/MavlinkConnectorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "MAVLink" },
		{ "ModuleRelativePath", "Public/MavlinkConnectorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMavlinkConnectorComponent constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMavlinkConnectorComponent constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitUDP"), .Pointer = &UMavlinkConnectorComponent::execInitUDP },
		{ .NameUTF8 = UTF8TEXT("SendHeartbeat"), .Pointer = &UMavlinkConnectorComponent::execSendHeartbeat },
		{ .NameUTF8 = UTF8TEXT("SendPositionSetpoint"), .Pointer = &UMavlinkConnectorComponent::execSendPositionSetpoint },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMavlinkConnectorComponent_InitUDP, "InitUDP" }, // 3288536104
		{ &Z_Construct_UFunction_UMavlinkConnectorComponent_SendHeartbeat, "SendHeartbeat" }, // 4288933814
		{ &Z_Construct_UFunction_UMavlinkConnectorComponent_SendPositionSetpoint, "SendPositionSetpoint" }, // 2003563775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMavlinkConnectorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMavlinkConnectorComponent_Statics

// ********** Begin Class UMavlinkConnectorComponent Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMavlinkConnectorComponent_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMavlinkConnectorComponent_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMavlinkConnectorComponent, Mode), Z_Construct_UEnum_DroneShowRuntime_EMavlinkMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3236623869
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMavlinkConnectorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMavlinkConnectorComponent_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMavlinkConnectorComponent_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMavlinkConnectorComponent_Statics::PropPointers) < 2048);
// ********** End Class UMavlinkConnectorComponent Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UMavlinkConnectorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMavlinkConnectorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMavlinkConnectorComponent_Statics::ClassParams = {
	&UMavlinkConnectorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMavlinkConnectorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMavlinkConnectorComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMavlinkConnectorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMavlinkConnectorComponent_Statics::Class_MetaDataParams)
};
void UMavlinkConnectorComponent::StaticRegisterNativesUMavlinkConnectorComponent()
{
	UClass* Class = UMavlinkConnectorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMavlinkConnectorComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMavlinkConnectorComponent()
{
	if (!Z_Registration_Info_UClass_UMavlinkConnectorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMavlinkConnectorComponent.OuterSingleton, Z_Construct_UClass_UMavlinkConnectorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMavlinkConnectorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMavlinkConnectorComponent);
UMavlinkConnectorComponent::~UMavlinkConnectorComponent() {}
// ********** End Class UMavlinkConnectorComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h__Script_DroneShowRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMavlinkMode_StaticEnum, TEXT("EMavlinkMode"), &Z_Registration_Info_UEnum_EMavlinkMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3236623869U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMavlinkConnectorComponent, UMavlinkConnectorComponent::StaticClass, TEXT("UMavlinkConnectorComponent"), &Z_Registration_Info_UClass_UMavlinkConnectorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMavlinkConnectorComponent), 4287060678U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h__Script_DroneShowRuntime_2352496797{
	TEXT("/Script/DroneShowRuntime"),
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h__Script_DroneShowRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h__Script_DroneShowRuntime_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h__Script_DroneShowRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h__Script_DroneShowRuntime_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
