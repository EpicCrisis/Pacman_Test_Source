// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_TEST_GhostCharacter_generated_h
#error "GhostCharacter.generated.h already included, missing '#pragma once' in GhostCharacter.h"
#endif
#define PACMAN_TEST_GhostCharacter_generated_h

#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateOrange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateOrange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateCyan) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateCyan(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivatePink) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivatePink(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomBehavior(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAmbushEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AmbushEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChaseEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChaseEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAvoidPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AvoidPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNextDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindNextDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlashingEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlashingEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeEatenEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CanBeEatenEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEatEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EatEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBackToNormal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BackToNormal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWithinAmbushDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsWithinAmbushDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGhostAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGhostAnimations(); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateOrange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateOrange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateCyan) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateCyan(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivatePink) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivatePink(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomBehavior(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAmbushEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AmbushEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChaseEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChaseEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAvoidPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AvoidPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNextDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindNextDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlashingEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlashingEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeEatenEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CanBeEatenEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEatEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EatEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBackToNormal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BackToNormal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWithinAmbushDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsWithinAmbushDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGhostAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGhostAnimations(); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhostCharacter(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGhostCharacter(); \
public: \
	DECLARE_CLASS(AGhostCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGhostCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAGhostCharacter(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGhostCharacter(); \
public: \
	DECLARE_CLASS(AGhostCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGhostCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGhostCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGhostCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostCharacter(AGhostCharacter&&); \
	NO_API AGhostCharacter(const AGhostCharacter&); \
public:


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostCharacter(AGhostCharacter&&); \
	NO_API AGhostCharacter(const AGhostCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhostCharacter)


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_PRIVATE_PROPERTY_OFFSET
#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_20_PROLOG
#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_INCLASS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_GhostCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
