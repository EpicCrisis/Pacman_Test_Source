// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GhostCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostCharacter() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostCharacter_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_AmbushEvent();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_AvoidPlayer();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_BackToNormal();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_CanBeEatenAnimations();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_CanBeEatenEvent();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_ChaseEvent();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_CheckMovingLeft();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_CheckMovingUp();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_CheckMovingVertically();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_EatEvent();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_FindNextDestination();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_FlashingEvent();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_IsWithinAmbushDistance();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_MoveDownAnimation();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_MoveLeftAnimation();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_MoveRightAnimation();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_MoveUpAnimation();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_RandomBehavior();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_RandomMovement();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_Reset();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_ResetLocation();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_SetCyanAnimations();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_SetOrangeAnimations();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_SetPinkAnimations();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_SetRedAnimations();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_StoringTempVelocity();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostCharacter_UpdateGhostAnimations();
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostDestination_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacmanPawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystem_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void AGhostCharacter::StaticRegisterNativesAGhostCharacter()
	{
		UClass* Class = AGhostCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AmbushEvent", &AGhostCharacter::execAmbushEvent },
			{ "AvoidPlayer", &AGhostCharacter::execAvoidPlayer },
			{ "BackToNormal", &AGhostCharacter::execBackToNormal },
			{ "CanBeEatenAnimations", &AGhostCharacter::execCanBeEatenAnimations },
			{ "CanBeEatenEvent", &AGhostCharacter::execCanBeEatenEvent },
			{ "ChaseEvent", &AGhostCharacter::execChaseEvent },
			{ "CheckMovingLeft", &AGhostCharacter::execCheckMovingLeft },
			{ "CheckMovingUp", &AGhostCharacter::execCheckMovingUp },
			{ "CheckMovingVertically", &AGhostCharacter::execCheckMovingVertically },
			{ "EatEvent", &AGhostCharacter::execEatEvent },
			{ "FindNextDestination", &AGhostCharacter::execFindNextDestination },
			{ "FlashingEvent", &AGhostCharacter::execFlashingEvent },
			{ "IsWithinAmbushDistance", &AGhostCharacter::execIsWithinAmbushDistance },
			{ "MoveDownAnimation", &AGhostCharacter::execMoveDownAnimation },
			{ "MoveLeftAnimation", &AGhostCharacter::execMoveLeftAnimation },
			{ "MoveRightAnimation", &AGhostCharacter::execMoveRightAnimation },
			{ "MoveUpAnimation", &AGhostCharacter::execMoveUpAnimation },
			{ "RandomBehavior", &AGhostCharacter::execRandomBehavior },
			{ "RandomMovement", &AGhostCharacter::execRandomMovement },
			{ "Reset", &AGhostCharacter::execReset },
			{ "ResetLocation", &AGhostCharacter::execResetLocation },
			{ "SetCyanAnimations", &AGhostCharacter::execSetCyanAnimations },
			{ "SetOrangeAnimations", &AGhostCharacter::execSetOrangeAnimations },
			{ "SetPinkAnimations", &AGhostCharacter::execSetPinkAnimations },
			{ "SetRedAnimations", &AGhostCharacter::execSetRedAnimations },
			{ "StoringTempVelocity", &AGhostCharacter::execStoringTempVelocity },
			{ "UpdateGhostAnimations", &AGhostCharacter::execUpdateGhostAnimations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_AmbushEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "AmbushEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_AvoidPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "AvoidPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_BackToNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "BackToNormal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_CanBeEatenAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "CanBeEatenAnimations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_CanBeEatenEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "CanBeEatenEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_ChaseEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "ChaseEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_CheckMovingLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "CheckMovingLeft", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_CheckMovingUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "CheckMovingUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_CheckMovingVertically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "CheckMovingVertically", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_EatEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "EatEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_FindNextDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "FindNextDestination", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_FlashingEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "FlashingEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_IsWithinAmbushDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "IsWithinAmbushDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_MoveDownAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "MoveDownAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_MoveLeftAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "MoveLeftAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_MoveRightAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "MoveRightAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_MoveUpAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "MoveUpAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_RandomBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "RandomBehavior", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_RandomMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "RandomMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "Reset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_ResetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "ResetLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_SetCyanAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "SetCyanAnimations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_SetOrangeAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "SetOrangeAnimations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_SetPinkAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "SetPinkAnimations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_SetRedAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "SetRedAnimations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_StoringTempVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "StoringTempVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostCharacter_UpdateGhostAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, "UpdateGhostAnimations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGhostCharacter_NoRegister()
	{
		return AGhostCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AGhostCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGhostCharacter_AmbushEvent, "AmbushEvent" }, // 793454085
				{ &Z_Construct_UFunction_AGhostCharacter_AvoidPlayer, "AvoidPlayer" }, // 3216767718
				{ &Z_Construct_UFunction_AGhostCharacter_BackToNormal, "BackToNormal" }, // 3835882844
				{ &Z_Construct_UFunction_AGhostCharacter_CanBeEatenAnimations, "CanBeEatenAnimations" }, // 1408563443
				{ &Z_Construct_UFunction_AGhostCharacter_CanBeEatenEvent, "CanBeEatenEvent" }, // 3134944834
				{ &Z_Construct_UFunction_AGhostCharacter_ChaseEvent, "ChaseEvent" }, // 2832278537
				{ &Z_Construct_UFunction_AGhostCharacter_CheckMovingLeft, "CheckMovingLeft" }, // 490421928
				{ &Z_Construct_UFunction_AGhostCharacter_CheckMovingUp, "CheckMovingUp" }, // 3698770668
				{ &Z_Construct_UFunction_AGhostCharacter_CheckMovingVertically, "CheckMovingVertically" }, // 1381183266
				{ &Z_Construct_UFunction_AGhostCharacter_EatEvent, "EatEvent" }, // 335893009
				{ &Z_Construct_UFunction_AGhostCharacter_FindNextDestination, "FindNextDestination" }, // 326713797
				{ &Z_Construct_UFunction_AGhostCharacter_FlashingEvent, "FlashingEvent" }, // 836182105
				{ &Z_Construct_UFunction_AGhostCharacter_IsWithinAmbushDistance, "IsWithinAmbushDistance" }, // 1972419303
				{ &Z_Construct_UFunction_AGhostCharacter_MoveDownAnimation, "MoveDownAnimation" }, // 3725734177
				{ &Z_Construct_UFunction_AGhostCharacter_MoveLeftAnimation, "MoveLeftAnimation" }, // 2428386358
				{ &Z_Construct_UFunction_AGhostCharacter_MoveRightAnimation, "MoveRightAnimation" }, // 1241117579
				{ &Z_Construct_UFunction_AGhostCharacter_MoveUpAnimation, "MoveUpAnimation" }, // 1686942051
				{ &Z_Construct_UFunction_AGhostCharacter_RandomBehavior, "RandomBehavior" }, // 2778326870
				{ &Z_Construct_UFunction_AGhostCharacter_RandomMovement, "RandomMovement" }, // 2319969893
				{ &Z_Construct_UFunction_AGhostCharacter_Reset, "Reset" }, // 2545247005
				{ &Z_Construct_UFunction_AGhostCharacter_ResetLocation, "ResetLocation" }, // 2876086367
				{ &Z_Construct_UFunction_AGhostCharacter_SetCyanAnimations, "SetCyanAnimations" }, // 190026918
				{ &Z_Construct_UFunction_AGhostCharacter_SetOrangeAnimations, "SetOrangeAnimations" }, // 1622331539
				{ &Z_Construct_UFunction_AGhostCharacter_SetPinkAnimations, "SetPinkAnimations" }, // 1017753411
				{ &Z_Construct_UFunction_AGhostCharacter_SetRedAnimations, "SetRedAnimations" }, // 3429863299
				{ &Z_Construct_UFunction_AGhostCharacter_StoringTempVelocity, "StoringTempVelocity" }, // 1427136025
				{ &Z_Construct_UFunction_AGhostCharacter_UpdateGhostAnimations, "UpdateGhostAnimations" }, // 2767375587
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "GhostCharacter.h" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTriggerArray_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetTriggerArray = { UE4CodeGen_Private::EPropertyClass::Array, "TargetTriggerArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, TargetTriggerArray), METADATA_PARAMS(NewProp_TargetTriggerArray_MetaData, ARRAY_COUNT(NewProp_TargetTriggerArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTriggerArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TargetTriggerArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AGhostDestination_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetTrigger_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetTrigger = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentTargetTrigger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, CurrentTargetTrigger), Z_Construct_UClass_AGhostDestination_NoRegister, METADATA_PARAMS(NewProp_CurrentTargetTrigger_MetaData, ARRAY_COUNT(NewProp_CurrentTargetTrigger_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacmanPlayer_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacmanPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "PacmanPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, PacmanPlayer), Z_Construct_UClass_APacmanPawn_NoRegister, METADATA_PARAMS(NewProp_PacmanPlayer_MetaData, ARRAY_COUNT(NewProp_PacmanPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadLevelTimerHandle_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadLevelTimerHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "LoadLevelTimerHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, LoadLevelTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_LoadLevelTimerHandle_MetaData, ARRAY_COUNT(NewProp_LoadLevelTimerHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBackToNormalTimerHandle_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayBackToNormalTimerHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "DelayBackToNormalTimerHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, DelayBackToNormalTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_DelayBackToNormalTimerHandle_MetaData, ARRAY_COUNT(NewProp_DelayBackToNormalTimerHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackToNormalTimerHandle_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackToNormalTimerHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "BackToNormalTimerHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, BackToNormalTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_BackToNormalTimerHandle_MetaData, ARRAY_COUNT(NewProp_BackToNormalTimerHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashingEventTimerHandle_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlashingEventTimerHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "FlashingEventTimerHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, FlashingEventTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_FlashingEventTimerHandle_MetaData, ARRAY_COUNT(NewProp_FlashingEventTimerHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmbushDistance_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAmbushDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentAmbushDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, CurrentAmbushDistance), METADATA_PARAMS(NewProp_CurrentAmbushDistance_MetaData, ARRAY_COUNT(NewProp_CurrentAmbushDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashingTime_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlashingTime = { UE4CodeGen_Private::EPropertyClass::Float, "FlashingTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, FlashingTime), METADATA_PARAMS(NewProp_FlashingTime_MetaData, ARRAY_COUNT(NewProp_FlashingTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeEatenTime_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CanBeEatenTime = { UE4CodeGen_Private::EPropertyClass::Float, "CanBeEatenTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, CanBeEatenTime), METADATA_PARAMS(NewProp_CanBeEatenTime_MetaData, ARRAY_COUNT(NewProp_CanBeEatenTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceDistance_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceDistance = { UE4CodeGen_Private::EPropertyClass::Float, "AvoidanceDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, AvoidanceDistance), METADATA_PARAMS(NewProp_AvoidanceDistance_MetaData, ARRAY_COUNT(NewProp_AvoidanceDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueSpeed_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlueSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BlueSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, BlueSpeed), METADATA_PARAMS(NewProp_BlueSpeed_MetaData, ARRAY_COUNT(NewProp_BlueSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NormalSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, NormalSpeed), METADATA_PARAMS(NewProp_NormalSpeed_MetaData, ARRAY_COUNT(NewProp_NormalSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbushLocation_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbushLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "AmbushLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, AmbushLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AmbushLocation_MetaData, ARRAY_COUNT(NewProp_AmbushLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempLocation_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TempLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TempLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, TempLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TempLocation_MetaData, ARRAY_COUNT(NewProp_TempLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StartLocation_MetaData, ARRAY_COUNT(NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFlashing_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			auto NewProp_isFlashing_SetBit = [](void* Obj){ ((AGhostCharacter*)Obj)->isFlashing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFlashing = { UE4CodeGen_Private::EPropertyClass::Bool, "isFlashing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGhostCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isFlashing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isFlashing_MetaData, ARRAY_COUNT(NewProp_isFlashing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeEaten_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			auto NewProp_CanBeEaten_SetBit = [](void* Obj){ ((AGhostCharacter*)Obj)->CanBeEaten = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeEaten = { UE4CodeGen_Private::EPropertyClass::Bool, "CanBeEaten", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGhostCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanBeEaten_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CanBeEaten_MetaData, ARRAY_COUNT(NewProp_CanBeEaten_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			auto NewProp_isDead_SetBit = [](void* Obj){ ((AGhostCharacter*)Obj)->isDead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead = { UE4CodeGen_Private::EPropertyClass::Bool, "isDead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGhostCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isDead_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isDead_MetaData, ARRAY_COUNT(NewProp_isDead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanKill_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			auto NewProp_CanKill_SetBit = [](void* Obj){ ((AGhostCharacter*)Obj)->CanKill = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanKill = { UE4CodeGen_Private::EPropertyClass::Bool, "CanKill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGhostCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanKill_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CanKill_MetaData, ARRAY_COUNT(NewProp_CanKill_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Navigate_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Navigate = { UE4CodeGen_Private::EPropertyClass::Object, "Navigate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, Navigate), Z_Construct_UClass_UNavigationSystem_NoRegister, METADATA_PARAMS(NewProp_Navigate_MetaData, ARRAY_COUNT(NewProp_Navigate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteFlipBook_MetaData[] = {
				{ "Category", "GhostCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteFlipBook = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteFlipBook", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, SpriteFlipBook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteFlipBook_MetaData, ARRAY_COUNT(NewProp_SpriteFlipBook_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_Orange_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight_Orange = { UE4CodeGen_Private::EPropertyClass::Object, "MoveRight_Orange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveRight_Orange), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveRight_Orange_MetaData, ARRAY_COUNT(NewProp_MoveRight_Orange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_Orange_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft_Orange = { UE4CodeGen_Private::EPropertyClass::Object, "MoveLeft_Orange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveLeft_Orange), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveLeft_Orange_MetaData, ARRAY_COUNT(NewProp_MoveLeft_Orange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_Orange_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown_Orange = { UE4CodeGen_Private::EPropertyClass::Object, "MoveDown_Orange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveDown_Orange), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveDown_Orange_MetaData, ARRAY_COUNT(NewProp_MoveDown_Orange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_Orange_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
				{ "ToolTip", "Orange" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp_Orange = { UE4CodeGen_Private::EPropertyClass::Object, "MoveUp_Orange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveUp_Orange), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveUp_Orange_MetaData, ARRAY_COUNT(NewProp_MoveUp_Orange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_Cyan_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight_Cyan = { UE4CodeGen_Private::EPropertyClass::Object, "MoveRight_Cyan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveRight_Cyan), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveRight_Cyan_MetaData, ARRAY_COUNT(NewProp_MoveRight_Cyan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_Cyan_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft_Cyan = { UE4CodeGen_Private::EPropertyClass::Object, "MoveLeft_Cyan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveLeft_Cyan), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveLeft_Cyan_MetaData, ARRAY_COUNT(NewProp_MoveLeft_Cyan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_Cyan_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown_Cyan = { UE4CodeGen_Private::EPropertyClass::Object, "MoveDown_Cyan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveDown_Cyan), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveDown_Cyan_MetaData, ARRAY_COUNT(NewProp_MoveDown_Cyan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_Cyan_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
				{ "ToolTip", "Cyan" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp_Cyan = { UE4CodeGen_Private::EPropertyClass::Object, "MoveUp_Cyan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveUp_Cyan), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveUp_Cyan_MetaData, ARRAY_COUNT(NewProp_MoveUp_Cyan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_Pink_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight_Pink = { UE4CodeGen_Private::EPropertyClass::Object, "MoveRight_Pink", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveRight_Pink), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveRight_Pink_MetaData, ARRAY_COUNT(NewProp_MoveRight_Pink_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_Pink_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft_Pink = { UE4CodeGen_Private::EPropertyClass::Object, "MoveLeft_Pink", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveLeft_Pink), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveLeft_Pink_MetaData, ARRAY_COUNT(NewProp_MoveLeft_Pink_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_Pink_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown_Pink = { UE4CodeGen_Private::EPropertyClass::Object, "MoveDown_Pink", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveDown_Pink), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveDown_Pink_MetaData, ARRAY_COUNT(NewProp_MoveDown_Pink_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_Pink_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
				{ "ToolTip", "Pink" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp_Pink = { UE4CodeGen_Private::EPropertyClass::Object, "MoveUp_Pink", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveUp_Pink), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveUp_Pink_MetaData, ARRAY_COUNT(NewProp_MoveUp_Pink_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_Red_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight_Red = { UE4CodeGen_Private::EPropertyClass::Object, "MoveRight_Red", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveRight_Red), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveRight_Red_MetaData, ARRAY_COUNT(NewProp_MoveRight_Red_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_Red_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft_Red = { UE4CodeGen_Private::EPropertyClass::Object, "MoveLeft_Red", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveLeft_Red), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveLeft_Red_MetaData, ARRAY_COUNT(NewProp_MoveLeft_Red_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_Red_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown_Red = { UE4CodeGen_Private::EPropertyClass::Object, "MoveDown_Red", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveDown_Red), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveDown_Red_MetaData, ARRAY_COUNT(NewProp_MoveDown_Red_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_Red_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
				{ "ToolTip", "Red" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp_Red = { UE4CodeGen_Private::EPropertyClass::Object, "MoveUp_Red", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveUp_Red), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveUp_Red_MetaData, ARRAY_COUNT(NewProp_MoveUp_Red_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_Dead_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight_Dead = { UE4CodeGen_Private::EPropertyClass::Object, "MoveRight_Dead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveRight_Dead), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveRight_Dead_MetaData, ARRAY_COUNT(NewProp_MoveRight_Dead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_Dead_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft_Dead = { UE4CodeGen_Private::EPropertyClass::Object, "MoveLeft_Dead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveLeft_Dead), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveLeft_Dead_MetaData, ARRAY_COUNT(NewProp_MoveLeft_Dead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_Dead_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown_Dead = { UE4CodeGen_Private::EPropertyClass::Object, "MoveDown_Dead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveDown_Dead), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveDown_Dead_MetaData, ARRAY_COUNT(NewProp_MoveDown_Dead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_Dead_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
				{ "ToolTip", "Dead" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp_Dead = { UE4CodeGen_Private::EPropertyClass::Object, "MoveUp_Dead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, MoveUp_Dead), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveUp_Dead_MetaData, ARRAY_COUNT(NewProp_MoveUp_Dead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flashing_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Flashing = { UE4CodeGen_Private::EPropertyClass::Object, "Flashing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, Flashing), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Flashing_MetaData, ARRAY_COUNT(NewProp_Flashing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "GhostCharacter.h" },
				{ "ToolTip", "Vulnerable" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blue = { UE4CodeGen_Private::EPropertyClass::Object, "Blue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostCharacter, Blue), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Blue_MetaData, ARRAY_COUNT(NewProp_Blue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetTriggerArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetTriggerArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTargetTrigger,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PacmanPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadLevelTimerHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelayBackToNormalTimerHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackToNormalTimerHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlashingEventTimerHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentAmbushDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlashingTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanBeEatenTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvoidanceDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmbushLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TempLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isFlashing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanBeEaten,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isDead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanKill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Navigate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteFlipBook,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRight_Orange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveLeft_Orange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveDown_Orange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveUp_Orange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRight_Cyan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveLeft_Cyan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveDown_Cyan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveUp_Cyan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRight_Pink,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveLeft_Pink,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveDown_Pink,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveUp_Pink,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRight_Red,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveLeft_Red,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveDown_Red,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveUp_Red,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRight_Dead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveLeft_Dead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveDown_Dead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveUp_Dead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flashing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGhostCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGhostCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGhostCharacter, 2646302);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGhostCharacter(Z_Construct_UClass_AGhostCharacter, &AGhostCharacter::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("AGhostCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
