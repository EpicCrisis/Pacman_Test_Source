// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PACMAN_TEST_GhostHouseTrigger_generated_h
#error "GhostHouseTrigger.generated.h already included, missing '#pragma once' in GhostHouseTrigger.h"
#endif
#define PACMAN_TEST_GhostHouseTrigger_generated_h

#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ThisActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_ThisActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ThisActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_ThisActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhostHouseTrigger(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGhostHouseTrigger(); \
public: \
	DECLARE_CLASS(AGhostHouseTrigger, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGhostHouseTrigger) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGhostHouseTrigger(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGhostHouseTrigger(); \
public: \
	DECLARE_CLASS(AGhostHouseTrigger, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGhostHouseTrigger) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGhostHouseTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGhostHouseTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostHouseTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostHouseTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostHouseTrigger(AGhostHouseTrigger&&); \
	NO_API AGhostHouseTrigger(const AGhostHouseTrigger&); \
public:


#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostHouseTrigger(AGhostHouseTrigger&&); \
	NO_API AGhostHouseTrigger(const AGhostHouseTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostHouseTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostHouseTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhostHouseTrigger)


#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_PRIVATE_PROPERTY_OFFSET
#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_13_PROLOG
#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_INCLASS \
	Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_GhostHouseTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
