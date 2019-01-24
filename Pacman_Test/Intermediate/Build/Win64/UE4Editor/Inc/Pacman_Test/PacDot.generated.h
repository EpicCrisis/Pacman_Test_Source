// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PACMAN_TEST_PacDot_generated_h
#error "PacDot.generated.h already included, missing '#pragma once' in PacDot.h"
#endif
#define PACMAN_TEST_PacDot_generated_h

#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckPowerUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckPowerUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ThisActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorOverlap(Z_Param_ThisActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckPowerUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckPowerUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ThisActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorOverlap(Z_Param_ThisActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacDot(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_APacDot(); \
public: \
	DECLARE_CLASS(APacDot, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(APacDot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPacDot(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_APacDot(); \
public: \
	DECLARE_CLASS(APacDot, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(APacDot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacDot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacDot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacDot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacDot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacDot(APacDot&&); \
	NO_API APacDot(const APacDot&); \
public:


#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacDot(APacDot&&); \
	NO_API APacDot(const APacDot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacDot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacDot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacDot)


#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_PRIVATE_PROPERTY_OFFSET
#define Pacman_Test_Source_Pacman_Test_PacDot_h_14_PROLOG
#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_PacDot_h_17_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_PacDot_h_17_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_PacDot_h_17_INCLASS \
	Pacman_Test_Source_Pacman_Test_PacDot_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_PacDot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_PacDot_h_17_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_PacDot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_PacDot_h_17_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_PacDot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_PacDot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
