// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Processors/PyroDroneProcessor.h"

#ifdef PYRODRONECORE_PyroDroneProcessor_generated_h
#error "PyroDroneProcessor.generated.h already included, missing '#pragma once' in PyroDroneProcessor.h"
#endif
#define PYRODRONECORE_PyroDroneProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPyroDroneProcessor ******************************************************
struct Z_Construct_UClass_UPyroDroneProcessor_Statics;
PYRODRONECORE_API UClass* Z_Construct_UClass_UPyroDroneProcessor_NoRegister();

#define FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyroDroneProcessor(); \
	friend struct ::Z_Construct_UClass_UPyroDroneProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYRODRONECORE_API UClass* ::Z_Construct_UClass_UPyroDroneProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyroDroneProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PyroDroneCore"), Z_Construct_UClass_UPyroDroneProcessor_NoRegister) \
	DECLARE_SERIALIZER(UPyroDroneProcessor)


#define FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h_9_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyroDroneProcessor(UPyroDroneProcessor&&) = delete; \
	UPyroDroneProcessor(const UPyroDroneProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyroDroneProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyroDroneProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPyroDroneProcessor) \
	NO_API virtual ~UPyroDroneProcessor();


#define FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h_8_PROLOG
#define FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h_9_INCLASS_NO_PURE_DECLS \
	FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyroDroneProcessor;

// ********** End Class UPyroDroneProcessor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_u_p_Source_PyroDroneCore_Public_Processors_PyroDroneProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
