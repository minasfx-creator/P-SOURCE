// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DroneMovementProcessor.h"

#ifdef DRONESHOWRUNTIME_DroneMovementProcessor_generated_h
#error "DroneMovementProcessor.generated.h already included, missing '#pragma once' in DroneMovementProcessor.h"
#endif
#define DRONESHOWRUNTIME_DroneMovementProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDroneMovementProcessor **************************************************
struct Z_Construct_UClass_UDroneMovementProcessor_Statics;
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UDroneMovementProcessor_NoRegister();

#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDroneMovementProcessor(); \
	friend struct ::Z_Construct_UClass_UDroneMovementProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRONESHOWRUNTIME_API UClass* ::Z_Construct_UClass_UDroneMovementProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UDroneMovementProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneShowRuntime"), Z_Construct_UClass_UDroneMovementProcessor_NoRegister) \
	DECLARE_SERIALIZER(UDroneMovementProcessor)


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h_9_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDroneMovementProcessor(UDroneMovementProcessor&&) = delete; \
	UDroneMovementProcessor(const UDroneMovementProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneMovementProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneMovementProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDroneMovementProcessor) \
	NO_API virtual ~UDroneMovementProcessor();


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h_6_PROLOG
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h_9_INCLASS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDroneMovementProcessor;

// ********** End Class UDroneMovementProcessor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_DroneMovementProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
