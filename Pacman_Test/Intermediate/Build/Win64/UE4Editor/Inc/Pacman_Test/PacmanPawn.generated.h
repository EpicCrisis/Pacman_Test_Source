// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PACMAN_TEST_PacmanPawn_generated_h
#error "PacmanPawn.generated.h already included, missing '#pragma once' in PacmanPawn.h"
#endif
#define PACMAN_TEST_PacmanPawn_generated_h

#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestartMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallGameOver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallGameOver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetBonusPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetBonusPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEatGhostEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EatGhostEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGhostPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGhostPoints(); \
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
	} \
 \
	DECLARE_FUNCTION(execActorDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorDestroyed(Z_Param_DestroyedActor); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestartMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallGameOver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallGameOver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetBonusPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetBonusPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEatGhostEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EatGhostEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGhostPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGhostPoints(); \
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
	} \
 \
	DECLARE_FUNCTION(execActorDestroyed) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorDestroyed(Z_Param_DestroyedActor); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacmanPawn(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_APacmanPawn(); \
public: \
	DECLARE_CLASS(APacmanPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(APacmanPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPacmanPawn(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_APacmanPawn(); \
public: \
	DECLARE_CLASS(APacmanPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(APacmanPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacmanPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacmanPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanPawn(APacmanPawn&&); \
	NO_API APacmanPawn(const APacmanPawn&); \
public:


#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanPawn(APacmanPawn&&); \
	NO_API APacmanPawn(const APacmanPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacmanPawn)


#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoOnceDead() { return STRUCT_OFFSET(APacmanPawn, DoOnceDead); } \
	FORCEINLINE static uint32 __PPO__DoOnceMove() { return STRUCT_OFFSET(APacmanPawn, DoOnceMove); } \
	FORCEINLINE static uint32 __PPO__DelayDeathTimerHandle() { return STRUCT_OFFSET(APacmanPawn, DelayDeathTimerHandle); } \
	FORCEINLINE static uint32 __PPO__LoadLevelTimerHandle() { return STRUCT_OFFSET(APacmanPawn, LoadLevelTimerHandle); }


#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_15_PROLOG
#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_INCLASS \
	Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_PacmanPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_PacmanPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
