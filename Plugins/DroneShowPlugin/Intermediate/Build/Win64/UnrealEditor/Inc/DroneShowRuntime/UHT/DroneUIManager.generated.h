// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DroneUIManager.h"

#ifdef DRONESHOWRUNTIME_DroneUIManager_generated_h
#error "DroneUIManager.generated.h already included, missing '#pragma once' in DroneUIManager.h"
#endif
#define DRONESHOWRUNTIME_DroneUIManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDroneUIManager **********************************************************
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEmergencyLandAll); \
	DECLARE_FUNCTION(execPlayIntroSequence); \
	DECLARE_FUNCTION(execShowMainDashboard);


struct Z_Construct_UClass_UDroneUIManager_Statics;
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UDroneUIManager_NoRegister();

#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDroneUIManager(); \
	friend struct ::Z_Construct_UClass_UDroneUIManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRONESHOWRUNTIME_API UClass* ::Z_Construct_UClass_UDroneUIManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UDroneUIManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DroneShowRuntime"), Z_Construct_UClass_UDroneUIManager_NoRegister) \
	DECLARE_SERIALIZER(UDroneUIManager)


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDroneUIManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDroneUIManager(UDroneUIManager&&) = delete; \
	UDroneUIManager(const UDroneUIManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneUIManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDroneUIManager) \
	NO_API virtual ~UDroneUIManager();


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h_7_PROLOG
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h_10_INCLASS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDroneUIManager;

// ********** End Class UDroneUIManager ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneUIManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
