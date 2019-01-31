// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AGridBlock;
#ifdef PACMAN_TEST_Pacman_TestGameModeBase_generated_h
#error "Pacman_TestGameModeBase.generated.h already included, missing '#pragma once' in Pacman_TestGameModeBase.h"
#endif
#define PACMAN_TEST_Pacman_TestGameModeBase_generated_h

#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestartLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnPacman) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnPacman(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWinEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WinEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlockFromWorldLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGridBlock**)Z_Param__Result=P_THIS->GetBlockFromWorldLocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlockFromGridLocation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGridBlock**)Z_Param__Result=P_THIS->GetBlockFromGridLocation(Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldToGridLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->WorldToGridLocation(Z_Param_Location); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestartLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnPacman) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnPacman(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGrid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateGrid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWinEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WinEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlockFromWorldLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGridBlock**)Z_Param__Result=P_THIS->GetBlockFromWorldLocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlockFromGridLocation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AGridBlock**)Z_Param__Result=P_THIS->GetBlockFromGridLocation(Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWorldToGridLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->WorldToGridLocation(Z_Param_Location); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacman_TestGameModeBase(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_APacman_TestGameModeBase(); \
public: \
	DECLARE_CLASS(APacman_TestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(APacman_TestGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPacman_TestGameModeBase(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_APacman_TestGameModeBase(); \
public: \
	DECLARE_CLASS(APacman_TestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(APacman_TestGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacman_TestGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacman_TestGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacman_TestGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacman_TestGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacman_TestGameModeBase(APacman_TestGameModeBase&&); \
	NO_API APacman_TestGameModeBase(const APacman_TestGameModeBase&); \
public:


#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacman_TestGameModeBase(APacman_TestGameModeBase&&); \
	NO_API APacman_TestGameModeBase(const APacman_TestGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacman_TestGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacman_TestGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacman_TestGameModeBase)


#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_PRIVATE_PROPERTY_OFFSET
#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_17_PROLOG
#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_INCLASS \
	Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_Pacman_TestGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
