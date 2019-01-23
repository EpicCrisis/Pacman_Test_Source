// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PACMAN_TEST_GhostDestination_generated_h
#error "GhostDestination.generated.h already included, missing '#pragma once' in GhostDestination.h"
#endif
#define PACMAN_TEST_GhostDestination_generated_h

#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_RPC_WRAPPERS \
	virtual void Randomize_Implementation(); \
 \
	DECLARE_FUNCTION(execRandomize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Randomize_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Randomize_Implementation(); \
 \
	DECLARE_FUNCTION(execRandomize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Randomize_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_EVENT_PARMS
#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_CALLBACK_WRAPPERS
#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhostDestination(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGhostDestination(); \
public: \
	DECLARE_CLASS(AGhostDestination, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGhostDestination) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGhostDestination(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGhostDestination(); \
public: \
	DECLARE_CLASS(AGhostDestination, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGhostDestination) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGhostDestination(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGhostDestination) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostDestination); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostDestination); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostDestination(AGhostDestination&&); \
	NO_API AGhostDestination(const AGhostDestination&); \
public:


#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostDestination(AGhostDestination&&); \
	NO_API AGhostDestination(const AGhostDestination&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostDestination); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostDestination); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhostDestination)


#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_PRIVATE_PROPERTY_OFFSET
#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_14_PROLOG \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_EVENT_PARMS


#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_CALLBACK_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_INCLASS \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_CALLBACK_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GhostDestination_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_GhostDestination_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
