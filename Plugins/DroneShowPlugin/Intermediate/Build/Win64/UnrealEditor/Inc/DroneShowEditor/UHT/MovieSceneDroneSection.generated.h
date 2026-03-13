// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneDroneSection.h"

#ifdef DRONESHOWEDITOR_MovieSceneDroneSection_generated_h
#error "MovieSceneDroneSection.generated.h already included, missing '#pragma once' in MovieSceneDroneSection.h"
#endif
#define DRONESHOWEDITOR_MovieSceneDroneSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDroneCue *********************************************************
struct Z_Construct_UScriptStruct_FDroneCue_Statics;
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h_9_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDroneCue_Statics; \
	DRONESHOWEDITOR_API static class UScriptStruct* StaticStruct();


struct FDroneCue;
// ********** End ScriptStruct FDroneCue ***********************************************************

// ********** Begin Class UMovieSceneDroneSection **************************************************
struct Z_Construct_UClass_UMovieSceneDroneSection_Statics;
DRONESHOWEDITOR_API UClass* Z_Construct_UClass_UMovieSceneDroneSection_NoRegister();

#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDroneSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDroneSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRONESHOWEDITOR_API UClass* ::Z_Construct_UClass_UMovieSceneDroneSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDroneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DroneShowEditor"), Z_Construct_UClass_UMovieSceneDroneSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDroneSection)


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneDroneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDroneSection(UMovieSceneDroneSection&&) = delete; \
	UMovieSceneDroneSection(const UMovieSceneDroneSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneDroneSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDroneSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDroneSection) \
	NO_API virtual ~UMovieSceneDroneSection();


#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h_17_PROLOG
#define FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h_20_INCLASS_NO_PURE_DECLS \
	FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDroneSection;

// ********** End Class UMovieSceneDroneSection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Plugins_DroneShowPlugin_Source_DroneShowEditor_Public_MovieSceneDroneSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
