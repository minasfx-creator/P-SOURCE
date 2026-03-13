// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/PyroDroneGameMode.h"

#ifdef PYRODRONECORE_PyroDroneGameMode_generated_h
#error "PyroDroneGameMode.generated.h already included, missing '#pragma once' in PyroDroneGameMode.h"
#endif
#define PYRODRONECORE_PyroDroneGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APyroDroneGameMode *******************************************************
#define FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateDroneShow);


struct Z_Construct_UClass_APyroDroneGameMode_Statics;
PYRODRONECORE_API UClass* Z_Construct_UClass_APyroDroneGameMode_NoRegister();

#define FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPyroDroneGameMode(); \
	friend struct ::Z_Construct_UClass_APyroDroneGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYRODRONECORE_API UClass* ::Z_Construct_UClass_APyroDroneGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(APyroDroneGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PyroDroneCore"), Z_Construct_UClass_APyroDroneGameMode_NoRegister) \
	DECLARE_SERIALIZER(APyroDroneGameMode)


#define FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APyroDroneGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APyroDroneGameMode(APyroDroneGameMode&&) = delete; \
	APyroDroneGameMode(const APyroDroneGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyroDroneGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyroDroneGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APyroDroneGameMode) \
	NO_API virtual ~APyroDroneGameMode();


#define FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h_10_PROLOG
#define FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APyroDroneGameMode;

// ********** End Class APyroDroneGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Source_PyroDroneCore_Public_Core_PyroDroneGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
