// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFragments() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDroneMassForceFragment();
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDroneMassMovementParameters();
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDroneMassVelocityFragment();
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMassAgentRadiusFragment();
DRONESHOWRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMassTransformFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
UPackage* Z_Construct_UPackage__Script_DroneShowRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTransformFragment ********************************************
struct Z_Construct_UScriptStruct_FMassTransformFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTransformFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTransformFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTransformFragment constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTransformFragment constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTransformFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTransformFragment_Statics
static_assert(std::is_polymorphic<FMassTransformFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTransformFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTransformFragment;
class UScriptStruct* FMassTransformFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTransformFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTransformFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTransformFragment, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("MassTransformFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTransformFragment.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTransformFragment Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTransformFragment_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTransformFragment, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTransformFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTransformFragment_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTransformFragment_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTransformFragment Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTransformFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTransformFragment",
	Z_Construct_UScriptStruct_FMassTransformFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTransformFragment_Statics::PropPointers),
	sizeof(FMassTransformFragment),
	alignof(FMassTransformFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTransformFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTransformFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTransformFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTransformFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTransformFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTransformFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTransformFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTransformFragment **********************************************

// ********** Begin ScriptStruct FDroneMassVelocityFragment ****************************************
struct Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDroneMassVelocityFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDroneMassVelocityFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDroneMassVelocityFragment constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDroneMassVelocityFragment constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDroneMassVelocityFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics
static_assert(std::is_polymorphic<FDroneMassVelocityFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FDroneMassVelocityFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDroneMassVelocityFragment;
class UScriptStruct* FDroneMassVelocityFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDroneMassVelocityFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDroneMassVelocityFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDroneMassVelocityFragment, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("DroneMassVelocityFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FDroneMassVelocityFragment.OuterSingleton;
	}

// ********** Begin ScriptStruct FDroneMassVelocityFragment Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneMassVelocityFragment, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::NewProp_Velocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDroneMassVelocityFragment Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"DroneMassVelocityFragment",
	Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::PropPointers),
	sizeof(FDroneMassVelocityFragment),
	alignof(FDroneMassVelocityFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDroneMassVelocityFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FDroneMassVelocityFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDroneMassVelocityFragment.InnerSingleton, Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDroneMassVelocityFragment.InnerSingleton);
}
// ********** End ScriptStruct FDroneMassVelocityFragment ******************************************

// ********** Begin ScriptStruct FDroneMassForceFragment *******************************************
struct Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDroneMassForceFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDroneMassForceFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDroneMassForceFragment constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDroneMassForceFragment constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDroneMassForceFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics
static_assert(std::is_polymorphic<FDroneMassForceFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FDroneMassForceFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDroneMassForceFragment;
class UScriptStruct* FDroneMassForceFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDroneMassForceFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDroneMassForceFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDroneMassForceFragment, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("DroneMassForceFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FDroneMassForceFragment.OuterSingleton;
	}

// ********** Begin ScriptStruct FDroneMassForceFragment Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneMassForceFragment, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDroneMassForceFragment Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"DroneMassForceFragment",
	Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::PropPointers),
	sizeof(FDroneMassForceFragment),
	alignof(FDroneMassForceFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDroneMassForceFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FDroneMassForceFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDroneMassForceFragment.InnerSingleton, Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDroneMassForceFragment.InnerSingleton);
}
// ********** End ScriptStruct FDroneMassForceFragment *********************************************

// ********** Begin ScriptStruct FMassAgentRadiusFragment ******************************************
struct Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassAgentRadiusFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassAgentRadiusFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassAgentRadiusFragment constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassAgentRadiusFragment constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassAgentRadiusFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics
static_assert(std::is_polymorphic<FMassAgentRadiusFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassAgentRadiusFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassAgentRadiusFragment;
class UScriptStruct* FMassAgentRadiusFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassAgentRadiusFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassAgentRadiusFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassAgentRadiusFragment, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("MassAgentRadiusFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassAgentRadiusFragment.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassAgentRadiusFragment Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassAgentRadiusFragment, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassAgentRadiusFragment Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassAgentRadiusFragment",
	Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::PropPointers),
	sizeof(FMassAgentRadiusFragment),
	alignof(FMassAgentRadiusFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassAgentRadiusFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassAgentRadiusFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassAgentRadiusFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassAgentRadiusFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassAgentRadiusFragment ********************************************

// ********** Begin ScriptStruct FDroneMassMovementParameters **************************************
struct Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDroneMassMovementParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDroneMassMovementParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Fragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDroneMassMovementParameters constinit property declarations ******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAccel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDroneMassMovementParameters constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDroneMassMovementParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics
static_assert(std::is_polymorphic<FDroneMassMovementParameters>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FDroneMassMovementParameters cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDroneMassMovementParameters;
class UScriptStruct* FDroneMassMovementParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDroneMassMovementParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDroneMassMovementParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDroneMassMovementParameters, (UObject*)Z_Construct_UPackage__Script_DroneShowRuntime(), TEXT("DroneMassMovementParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FDroneMassMovementParameters.OuterSingleton;
	}

// ********** Begin ScriptStruct FDroneMassMovementParameters Property Definitions *****************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneMassMovementParameters, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::NewProp_MaxAccel = { "MaxAccel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneMassMovementParameters, MaxAccel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAccel_MetaData), NewProp_MaxAccel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::NewProp_MaxAccel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDroneMassMovementParameters Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DroneShowRuntime,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"DroneMassMovementParameters",
	Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::PropPointers),
	sizeof(FDroneMassMovementParameters),
	alignof(FDroneMassMovementParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDroneMassMovementParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FDroneMassMovementParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDroneMassMovementParameters.InnerSingleton, Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDroneMassMovementParameters.InnerSingleton);
}
// ********** End ScriptStruct FDroneMassMovementParameters ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_Fragments_h__Script_DroneShowRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTransformFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTransformFragment_Statics::NewStructOps, TEXT("MassTransformFragment"),&Z_Registration_Info_UScriptStruct_FMassTransformFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTransformFragment), 2254415597U) },
		{ FDroneMassVelocityFragment::StaticStruct, Z_Construct_UScriptStruct_FDroneMassVelocityFragment_Statics::NewStructOps, TEXT("DroneMassVelocityFragment"),&Z_Registration_Info_UScriptStruct_FDroneMassVelocityFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDroneMassVelocityFragment), 3560249525U) },
		{ FDroneMassForceFragment::StaticStruct, Z_Construct_UScriptStruct_FDroneMassForceFragment_Statics::NewStructOps, TEXT("DroneMassForceFragment"),&Z_Registration_Info_UScriptStruct_FDroneMassForceFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDroneMassForceFragment), 1549427247U) },
		{ FMassAgentRadiusFragment::StaticStruct, Z_Construct_UScriptStruct_FMassAgentRadiusFragment_Statics::NewStructOps, TEXT("MassAgentRadiusFragment"),&Z_Registration_Info_UScriptStruct_FMassAgentRadiusFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassAgentRadiusFragment), 1177760854U) },
		{ FDroneMassMovementParameters::StaticStruct, Z_Construct_UScriptStruct_FDroneMassMovementParameters_Statics::NewStructOps, TEXT("DroneMassMovementParameters"),&Z_Registration_Info_UScriptStruct_FDroneMassMovementParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDroneMassMovementParameters), 2307761455U) },
	};
}; // Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_Fragments_h__Script_DroneShowRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_Fragments_h__Script_DroneShowRuntime_375101075{
	TEXT("/Script/DroneShowRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_Fragments_h__Script_DroneShowRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_Fragments_h__Script_DroneShowRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
