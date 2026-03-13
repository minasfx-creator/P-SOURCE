// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyroPhysics.h"

#ifdef DRONESHOWRUNTIME_PyroPhysics_generated_h
#error "PyroPhysics.generated.h already included, missing '#pragma once' in PyroPhysics.h"
#endif
#define DRONESHOWRUNTIME_PyroPhysics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPyroPhysics *************************************************************
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComputePyroAccel);


struct Z_Construct_UClass_UPyroPhysics_Statics;
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_UPyroPhysics_NoRegister();

#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyroPhysics(); \
	friend struct ::Z_Construct_UClass_UPyroPhysics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRONESHOWRUNTIME_API UClass* ::Z_Construct_UClass_UPyroPhysics_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyroPhysics, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DroneShowRuntime"), Z_Construct_UClass_UPyroPhysics_NoRegister) \
	DECLARE_SERIALIZER(UPyroPhysics)


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyroPhysics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyroPhysics(UPyroPhysics&&) = delete; \
	UPyroPhysics(const UPyroPhysics&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyroPhysics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyroPhysics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyroPhysics) \
	NO_API virtual ~UPyroPhysics();


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h_5_PROLOG
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h_8_INCLASS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyroPhysics;

// ********** End Class UPyroPhysics ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_PyroPhysics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
