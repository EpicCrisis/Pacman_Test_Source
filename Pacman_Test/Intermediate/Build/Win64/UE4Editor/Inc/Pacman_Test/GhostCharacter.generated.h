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

#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_RPC_WRAPPERS \
	virtual void RandomBehavior_Implementation(); \
	virtual void AmbushEvent_Implementation(); \
	virtual void ChaseEvent_Implementation(); \
	virtual void RandomMovement_Implementation(); \
	virtual void AvoidPlayer_Implementation(); \
	virtual void ResetLocation_Implementation(); \
	virtual void FindNextDestination_Implementation(); \
	virtual void FlashingEvent_Implementation(); \
	virtual void Reset_Implementation(); \
	virtual void EatEvent_Implementation(); \
	virtual void BackToNormal_Implementation(); \
 \
	DECLARE_FUNCTION(execRandomBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAmbushEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AmbushEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChaseEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChaseEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomMovement_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAvoidPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AvoidPlayer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLocation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNextDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindNextDestination_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlashingEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlashingEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEatEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EatEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBackToNormal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BackToNormal_Implementation(); \
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
	DECLARE_FUNCTION(execMoveRightAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRightAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLeftAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveLeftAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveDownAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveDownAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveUpAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveUpAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckMovingLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckMovingLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckMovingUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckMovingUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckMovingVertically) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckMovingVertically(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeEatenAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CanBeEatenAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStoringTempVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StoringTempVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfCanBeEaten) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckIfCanBeEaten(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGhostAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGhostAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrangeAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrangeAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCyanAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCyanAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPinkAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPinkAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRedAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRedAnimations(); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RandomBehavior_Implementation(); \
	virtual void AmbushEvent_Implementation(); \
	virtual void ChaseEvent_Implementation(); \
	virtual void RandomMovement_Implementation(); \
	virtual void AvoidPlayer_Implementation(); \
	virtual void ResetLocation_Implementation(); \
	virtual void FindNextDestination_Implementation(); \
	virtual void FlashingEvent_Implementation(); \
	virtual void Reset_Implementation(); \
	virtual void EatEvent_Implementation(); \
	virtual void BackToNormal_Implementation(); \
 \
	DECLARE_FUNCTION(execRandomBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAmbushEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AmbushEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChaseEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChaseEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomMovement_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAvoidPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AvoidPlayer_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLocation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindNextDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindNextDestination_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlashingEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlashingEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEatEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EatEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBackToNormal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BackToNormal_Implementation(); \
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
	DECLARE_FUNCTION(execMoveRightAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRightAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLeftAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveLeftAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveDownAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveDownAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveUpAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveUpAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckMovingLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckMovingLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckMovingUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckMovingUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckMovingVertically) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckMovingVertically(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeEatenAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CanBeEatenAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStoringTempVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StoringTempVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfCanBeEaten) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckIfCanBeEaten(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGhostAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGhostAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrangeAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrangeAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCyanAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCyanAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPinkAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPinkAnimations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRedAnimations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRedAnimations(); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_EVENT_PARMS
#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_CALLBACK_WRAPPERS
#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhostCharacter(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGhostCharacter(); \
public: \
	DECLARE_CLASS(AGhostCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGhostCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGhostCharacter(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGhostCharacter(); \
public: \
	DECLARE_CLASS(AGhostCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGhostCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_STANDARD_CONSTRUCTORS \
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


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostCharacter(AGhostCharacter&&); \
	NO_API AGhostCharacter(const AGhostCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhostCharacter)


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_PRIVATE_PROPERTY_OFFSET
#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_13_PROLOG \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_EVENT_PARMS


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_CALLBACK_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_INCLASS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_CALLBACK_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GhostCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_GhostCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
