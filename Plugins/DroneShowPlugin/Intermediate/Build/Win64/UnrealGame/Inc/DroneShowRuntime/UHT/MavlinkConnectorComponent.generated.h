// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MavlinkConnectorComponent.h"

#ifdef DRONESHOWRUNTIME_MavlinkConnectorComponent_generated_h
#error "MavlinkConnectorComponent.generated.h already included, missing '#pragma once' in MavlinkConnectorComponent.h"
#endif
#define DRONESHOWRUNTIME_MavlinkConnectorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMavlinkConnectorComponent ***********************************************
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendPositionSetpoint); \
	DECLARE_FUNCTION(execSendHeartbeat); \
	DECLARE_FUNCTION(execInitUDP);


struct Z_Construct_UClass_UMavlinkConnectorComponent_Statics;
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UMavlinkConnectorComponent_NoRegister();

#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMavlinkConnectorComponent(); \
	friend struct ::Z_Construct_UClass_UMavlinkConnectorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRONESHOWRUNTIME_API UClass* ::Z_Construct_UClass_UMavlinkConnectorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMavlinkConnectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneShowRuntime"), Z_Construct_UClass_UMavlinkConnectorComponent_NoRegister) \
	DECLARE_SERIALIZER(UMavlinkConnectorComponent)


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMavlinkConnectorComponent(UMavlinkConnectorComponent&&) = delete; \
	UMavlinkConnectorComponent(const UMavlinkConnectorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMavlinkConnectorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMavlinkConnectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMavlinkConnectorComponent) \
	NO_API virtual ~UMavlinkConnectorComponent();


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h_15_PROLOG
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMavlinkConnectorComponent;

// ********** End Class UMavlinkConnectorComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_MavlinkConnectorComponent_h

// ********** Begin Enum EMavlinkMode **************************************************************
#define FOREACH_ENUM_EMAVLINKMODE(op) \
	op(EMavlinkMode::FallbackUDP) \
	op(EMavlinkMode::MAVSDK) 

enum class EMavlinkMode : uint8;
template<> struct TIsUEnumClass<EMavlinkMode> { enum { Value = true }; };
template<> DRONESHOWRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMavlinkMode>();
// ********** End Enum EMavlinkMode ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
