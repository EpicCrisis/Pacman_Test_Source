// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PACMAN_TEST_GridBlock_generated_h
#error "GridBlock.generated.h already included, missing '#pragma once' in GridBlock.h"
#endif
#define PACMAN_TEST_GridBlock_generated_h

#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_RPC_WRAPPERS \
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


#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridBlock(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGridBlock(); \
public: \
	DECLARE_CLASS(AGridBlock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGridBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGridBlock(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_AGridBlock(); \
public: \
	DECLARE_CLASS(AGridBlock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(AGridBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridBlock(AGridBlock&&); \
	NO_API AGridBlock(const AGridBlock&); \
public:


#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridBlock(AGridBlock&&); \
	NO_API AGridBlock(const AGridBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridBlock)


#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_PRIVATE_PROPERTY_OFFSET
#define Pacman_Test_Source_Pacman_Test_GridBlock_h_11_PROLOG
#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GridBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GridBlock_h_14_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_GridBlock_h_14_INCLASS \
	Pacman_Test_Source_Pacman_Test_GridBlock_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_GridBlock_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_GridBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_GridBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GridBlock_h_14_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_GridBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_GridBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
