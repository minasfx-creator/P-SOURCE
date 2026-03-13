// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DroneShowDataBridge.h"

#ifdef DRONESHOWRUNTIME_DroneShowDataBridge_generated_h
#error "DroneShowDataBridge.generated.h already included, missing '#pragma once' in DroneShowDataBridge.h"
#endif
#define DRONESHOWRUNTIME_DroneShowDataBridge_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDroneShowDataBridge *****************************************************
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execSetTransforms);


struct Z_Construct_UClass_UDroneShowDataBridge_Statics;
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UDroneShowDataBridge_NoRegister();

#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDroneShowDataBridge(); \
	friend struct ::Z_Construct_UClass_UDroneShowDataBridge_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRONESHOWRUNTIME_API UClass* ::Z_Construct_UClass_UDroneShowDataBridge_NoRegister(); \
public: \
	DECLARE_CLASS2(UDroneShowDataBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DroneShowRuntime"), Z_Construct_UClass_UDroneShowDataBridge_NoRegister) \
	DECLARE_SERIALIZER(UDroneShowDataBridge)


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDroneShowDataBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDroneShowDataBridge(UDroneShowDataBridge&&) = delete; \
	UDroneShowDataBridge(const UDroneShowDataBridge&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneShowDataBridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneShowDataBridge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDroneShowDataBridge) \
	NO_API virtual ~UDroneShowDataBridge();


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h_6_PROLOG
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h_9_INCLASS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDroneShowDataBridge;

// ********** End Class UDroneShowDataBridge *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneShowDataBridge_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
