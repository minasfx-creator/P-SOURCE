// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SVGParser.h"

#ifdef DRONESHOWRUNTIME_SVGParser_generated_h
#error "SVGParser.generated.h already included, missing '#pragma once' in SVGParser.h"
#endif
#define DRONESHOWRUNTIME_SVGParser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USVGParser ***************************************************************
struct Z_Construct_UClass_USVGParser_Statics;
DRONESHOWRUNTIME_API UClass* Z_Construct_UClass_USVGParser_NoRegister();

#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h_7_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSVGParser(); \
	friend struct ::Z_Construct_UClass_USVGParser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRONESHOWRUNTIME_API UClass* ::Z_Construct_UClass_USVGParser_NoRegister(); \
public: \
	DECLARE_CLASS2(USVGParser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DroneShowRuntime"), Z_Construct_UClass_USVGParser_NoRegister) \
	DECLARE_SERIALIZER(USVGParser)


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h_7_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USVGParser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USVGParser(USVGParser&&) = delete; \
	USVGParser(const USVGParser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USVGParser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USVGParser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USVGParser) \
	NO_API virtual ~USVGParser();


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h_4_PROLOG
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h_7_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h_7_INCLASS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h_7_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USVGParser;

// ********** End Class USVGParser *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowRuntime_Public_SVGParser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
