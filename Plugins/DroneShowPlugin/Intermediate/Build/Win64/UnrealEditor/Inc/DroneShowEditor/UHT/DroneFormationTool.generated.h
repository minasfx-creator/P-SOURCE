// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DroneFormationTool.h"

#ifdef DRONESHOWEDITOR_DroneFormationTool_generated_h
#error "DroneFormationTool.generated.h already included, missing '#pragma once' in DroneFormationTool.h"
#endif
#define DRONESHOWEDITOR_DroneFormationTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDroneFormationTool ******************************************************
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportSplineToMAVLinkMission); \
	DECLARE_FUNCTION(execExportSplineToVVIZ); \
	DECLARE_FUNCTION(execGetSplineWaypoints);


struct Z_Construct_UClass_UDroneFormationTool_Statics;
DRONESHOWEDITOR_API UClass* Z_Construct_UClass_UDroneFormationTool_NoRegister();

#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDroneFormationTool(); \
	friend struct ::Z_Construct_UClass_UDroneFormationTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRONESHOWEDITOR_API UClass* ::Z_Construct_UClass_UDroneFormationTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UDroneFormationTool, UScriptableClickDragTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DroneShowEditor"), Z_Construct_UClass_UDroneFormationTool_NoRegister) \
	DECLARE_SERIALIZER(UDroneFormationTool)


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDroneFormationTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDroneFormationTool(UDroneFormationTool&&) = delete; \
	UDroneFormationTool(const UDroneFormationTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDroneFormationTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDroneFormationTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDroneFormationTool) \
	NO_API virtual ~UDroneFormationTool();


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h_7_PROLOG
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h_10_INCLASS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDroneFormationTool;

// ********** End Class UDroneFormationTool ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_DroneFormationTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
