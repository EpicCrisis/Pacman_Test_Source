// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PacmanPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanPawn() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacmanPawn_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacmanPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_ActorDestroyed();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_ActorOverlap();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_CallGameOver();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_CheckDownCollision();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_CheckLeftCollision();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_CheckRightCollision();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_CheckUpCollision();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_DownKeyAction();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_DownKeyPressed();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_DownKeyReleased();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_EatGhostEvent();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_GetGhostPoints();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_LeftKeyAction();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_LeftKeyPressed();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_LeftKeyReleased();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_OnTimelineFinished();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_ResetBonusPoints();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_ResetDoOnce();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_RestartMap();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_RightKeyAction();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_RightKeyPressed();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_RightKeyReleased();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_TimelineFloatReturn();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_UpdateAnimation();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_UpKeyAction();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_UpKeyPressed();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacmanPawn_UpKeyReleased();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacman_TestGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void APacmanPawn::StaticRegisterNativesAPacmanPawn()
	{
		UClass* Class = APacmanPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorDestroyed", &APacmanPawn::execActorDestroyed },
			{ "ActorOverlap", &APacmanPawn::execActorOverlap },
			{ "CallGameOver", &APacmanPawn::execCallGameOver },
			{ "CheckDownCollision", &APacmanPawn::execCheckDownCollision },
			{ "CheckLeftCollision", &APacmanPawn::execCheckLeftCollision },
			{ "CheckRightCollision", &APacmanPawn::execCheckRightCollision },
			{ "CheckUpCollision", &APacmanPawn::execCheckUpCollision },
			{ "DownKeyAction", &APacmanPawn::execDownKeyAction },
			{ "DownKeyPressed", &APacmanPawn::execDownKeyPressed },
			{ "DownKeyReleased", &APacmanPawn::execDownKeyReleased },
			{ "EatGhostEvent", &APacmanPawn::execEatGhostEvent },
			{ "GetGhostPoints", &APacmanPawn::execGetGhostPoints },
			{ "LeftKeyAction", &APacmanPawn::execLeftKeyAction },
			{ "LeftKeyPressed", &APacmanPawn::execLeftKeyPressed },
			{ "LeftKeyReleased", &APacmanPawn::execLeftKeyReleased },
			{ "OnTimelineFinished", &APacmanPawn::execOnTimelineFinished },
			{ "ResetBonusPoints", &APacmanPawn::execResetBonusPoints },
			{ "ResetDoOnce", &APacmanPawn::execResetDoOnce },
			{ "RestartMap", &APacmanPawn::execRestartMap },
			{ "RightKeyAction", &APacmanPawn::execRightKeyAction },
			{ "RightKeyPressed", &APacmanPawn::execRightKeyPressed },
			{ "RightKeyReleased", &APacmanPawn::execRightKeyReleased },
			{ "TimelineFloatReturn", &APacmanPawn::execTimelineFloatReturn },
			{ "UpdateAnimation", &APacmanPawn::execUpdateAnimation },
			{ "UpKeyAction", &APacmanPawn::execUpKeyAction },
			{ "UpKeyPressed", &APacmanPawn::execUpKeyPressed },
			{ "UpKeyReleased", &APacmanPawn::execUpKeyReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_ActorDestroyed()
	{
		struct PacmanPawn_eventActorDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor = { UE4CodeGen_Private::EPropertyClass::Object, "DestroyedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PacmanPawn_eventActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestroyedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "ActorDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(PacmanPawn_eventActorDestroyed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_ActorOverlap()
	{
		struct PacmanPawn_eventActorOverlap_Parms
		{
			AActor* ThisActor;
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PacmanPawn_eventActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisActor = { UE4CodeGen_Private::EPropertyClass::Object, "ThisActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PacmanPawn_eventActorOverlap_Parms, ThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThisActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "ActorOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(PacmanPawn_eventActorOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_CallGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "CallGameOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_CheckDownCollision()
	{
		struct PacmanPawn_eventCheckDownCollision_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PacmanPawn_eventCheckDownCollision_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PacmanPawn_eventCheckDownCollision_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "CheckDownCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(PacmanPawn_eventCheckDownCollision_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_CheckLeftCollision()
	{
		struct PacmanPawn_eventCheckLeftCollision_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PacmanPawn_eventCheckLeftCollision_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PacmanPawn_eventCheckLeftCollision_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "CheckLeftCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(PacmanPawn_eventCheckLeftCollision_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_CheckRightCollision()
	{
		struct PacmanPawn_eventCheckRightCollision_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PacmanPawn_eventCheckRightCollision_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PacmanPawn_eventCheckRightCollision_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
				{ "ToolTip", "Collision check" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "CheckRightCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(PacmanPawn_eventCheckRightCollision_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_CheckUpCollision()
	{
		struct PacmanPawn_eventCheckUpCollision_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PacmanPawn_eventCheckUpCollision_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PacmanPawn_eventCheckUpCollision_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "CheckUpCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(PacmanPawn_eventCheckUpCollision_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_DownKeyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "DownKeyAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_DownKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "DownKeyPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_DownKeyReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "DownKeyReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_EatGhostEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "EatGhostEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_GetGhostPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "GetGhostPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_LeftKeyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "LeftKeyAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_LeftKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "LeftKeyPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_LeftKeyReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "LeftKeyReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_OnTimelineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Timeline" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "OnTimelineFinished", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_ResetBonusPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "ResetBonusPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_ResetDoOnce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "ResetDoOnce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_RestartMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "RestartMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_RightKeyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
				{ "ToolTip", "Key press action" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "RightKeyAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_RightKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
				{ "ToolTip", "Key press check" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "RightKeyPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_RightKeyReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "RightKeyReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_TimelineFloatReturn()
	{
		struct PacmanPawn_eventTimelineFloatReturn_Parms
		{
			float value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PacmanPawn_eventTimelineFloatReturn_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Timeline" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "TimelineFloatReturn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(PacmanPawn_eventTimelineFloatReturn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_UpdateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "UpdateAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_UpKeyAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "UpKeyAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_UpKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "UpKeyPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacmanPawn_UpKeyReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, "UpKeyReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APacmanPawn_NoRegister()
	{
		return APacmanPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_APacmanPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APacmanPawn_ActorDestroyed, "ActorDestroyed" }, // 3212003517
				{ &Z_Construct_UFunction_APacmanPawn_ActorOverlap, "ActorOverlap" }, // 145565326
				{ &Z_Construct_UFunction_APacmanPawn_CallGameOver, "CallGameOver" }, // 153585919
				{ &Z_Construct_UFunction_APacmanPawn_CheckDownCollision, "CheckDownCollision" }, // 4172527076
				{ &Z_Construct_UFunction_APacmanPawn_CheckLeftCollision, "CheckLeftCollision" }, // 4188498884
				{ &Z_Construct_UFunction_APacmanPawn_CheckRightCollision, "CheckRightCollision" }, // 2104566041
				{ &Z_Construct_UFunction_APacmanPawn_CheckUpCollision, "CheckUpCollision" }, // 1172636277
				{ &Z_Construct_UFunction_APacmanPawn_DownKeyAction, "DownKeyAction" }, // 2883530329
				{ &Z_Construct_UFunction_APacmanPawn_DownKeyPressed, "DownKeyPressed" }, // 772876857
				{ &Z_Construct_UFunction_APacmanPawn_DownKeyReleased, "DownKeyReleased" }, // 3292826684
				{ &Z_Construct_UFunction_APacmanPawn_EatGhostEvent, "EatGhostEvent" }, // 2360396844
				{ &Z_Construct_UFunction_APacmanPawn_GetGhostPoints, "GetGhostPoints" }, // 2538090431
				{ &Z_Construct_UFunction_APacmanPawn_LeftKeyAction, "LeftKeyAction" }, // 1205961374
				{ &Z_Construct_UFunction_APacmanPawn_LeftKeyPressed, "LeftKeyPressed" }, // 1002337367
				{ &Z_Construct_UFunction_APacmanPawn_LeftKeyReleased, "LeftKeyReleased" }, // 2092911249
				{ &Z_Construct_UFunction_APacmanPawn_OnTimelineFinished, "OnTimelineFinished" }, // 2663931376
				{ &Z_Construct_UFunction_APacmanPawn_ResetBonusPoints, "ResetBonusPoints" }, // 1396200844
				{ &Z_Construct_UFunction_APacmanPawn_ResetDoOnce, "ResetDoOnce" }, // 3068817946
				{ &Z_Construct_UFunction_APacmanPawn_RestartMap, "RestartMap" }, // 2213395223
				{ &Z_Construct_UFunction_APacmanPawn_RightKeyAction, "RightKeyAction" }, // 979818593
				{ &Z_Construct_UFunction_APacmanPawn_RightKeyPressed, "RightKeyPressed" }, // 2937585915
				{ &Z_Construct_UFunction_APacmanPawn_RightKeyReleased, "RightKeyReleased" }, // 2422317533
				{ &Z_Construct_UFunction_APacmanPawn_TimelineFloatReturn, "TimelineFloatReturn" }, // 243947304
				{ &Z_Construct_UFunction_APacmanPawn_UpdateAnimation, "UpdateAnimation" }, // 964100422
				{ &Z_Construct_UFunction_APacmanPawn_UpKeyAction, "UpKeyAction" }, // 258934723
				{ &Z_Construct_UFunction_APacmanPawn_UpKeyPressed, "UpKeyPressed" }, // 2467419961
				{ &Z_Construct_UFunction_APacmanPawn_UpKeyReleased, "UpKeyReleased" }, // 2244736639
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "PacmanPawn.h" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[] = {
				{ "Category", "Timeline" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MoveDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, MoveDistance), METADATA_PARAMS(NewProp_MoveDistance_MetaData, ARRAY_COUNT(NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
				{ "Category", "Timeline" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "EndLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EndLocation_MetaData, ARRAY_COUNT(NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveCurve_MetaData[] = {
				{ "Category", "Timeline" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveCurve = { UE4CodeGen_Private::EPropertyClass::Object, "MoveCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, MoveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_MoveCurve_MetaData, ARRAY_COUNT(NewProp_MoveCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTimeline_MetaData[] = {
				{ "Category", "Timeline" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveTimeline = { UE4CodeGen_Private::EPropertyClass::Object, "MoveTimeline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APacmanPawn, MoveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(NewProp_MoveTimeline_MetaData, ARRAY_COUNT(NewProp_MoveTimeline_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempYaw_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TempYaw = { UE4CodeGen_Private::EPropertyClass::Float, "TempYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, TempYaw), METADATA_PARAMS(NewProp_TempYaw_MetaData, ARRAY_COUNT(NewProp_TempYaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusPointsTime_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusPointsTime = { UE4CodeGen_Private::EPropertyClass::Float, "BonusPointsTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, BonusPointsTime), METADATA_PARAMS(NewProp_BonusPointsTime_MetaData, ARRAY_COUNT(NewProp_BonusPointsTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EatBonusTimerHandle_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EatBonusTimerHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "EatBonusTimerHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, EatBonusTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_EatBonusTimerHandle_MetaData, ARRAY_COUNT(NewProp_EatBonusTimerHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostPoints_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GhostPoints = { UE4CodeGen_Private::EPropertyClass::Int, "GhostPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, GhostPoints), METADATA_PARAMS(NewProp_GhostPoints_MetaData, ARRAY_COUNT(NewProp_GhostPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionY_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DirectionY = { UE4CodeGen_Private::EPropertyClass::Int, "DirectionY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, DirectionY), METADATA_PARAMS(NewProp_DirectionY_MetaData, ARRAY_COUNT(NewProp_DirectionY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionX_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DirectionX = { UE4CodeGen_Private::EPropertyClass::Int, "DirectionX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, DirectionX), METADATA_PARAMS(NewProp_DirectionX_MetaData, ARRAY_COUNT(NewProp_DirectionX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanChangeDirection_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			auto NewProp_CanChangeDirection_SetBit = [](void* Obj){ ((APacmanPawn*)Obj)->CanChangeDirection = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanChangeDirection = { UE4CodeGen_Private::EPropertyClass::Bool, "CanChangeDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacmanPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanChangeDirection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CanChangeDirection_MetaData, ARRAY_COUNT(NewProp_CanChangeDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			auto NewProp_isDead_SetBit = [](void* Obj){ ((APacmanPawn*)Obj)->isDead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead = { UE4CodeGen_Private::EPropertyClass::Bool, "isDead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacmanPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isDead_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isDead_MetaData, ARRAY_COUNT(NewProp_isDead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempLocation_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TempLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TempLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, TempLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TempLocation_MetaData, ARRAY_COUNT(NewProp_TempLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef = { UE4CodeGen_Private::EPropertyClass::Object, "GameModeRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, GameModeRef), Z_Construct_UClass_APacman_TestGameModeBase_NoRegister, METADATA_PARAMS(NewProp_GameModeRef_MetaData, ARRAY_COUNT(NewProp_GameModeRef_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APacmanPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box = { UE4CodeGen_Private::EPropertyClass::Object, "Box", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APacmanPawn, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_Box_MetaData, ARRAY_COUNT(NewProp_Box_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere = { UE4CodeGen_Private::EPropertyClass::Object, "Sphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APacmanPawn, Sphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Sphere_MetaData, ARRAY_COUNT(NewProp_Sphere_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot = { UE4CodeGen_Private::EPropertyClass::Object, "SceneRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APacmanPawn, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SceneRoot_MetaData, ARRAY_COUNT(NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteFlipBook_MetaData[] = {
				{ "Category", "PacmanPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteFlipBook = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteFlipBook", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APacmanPawn, SpriteFlipBook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteFlipBook_MetaData, ARRAY_COUNT(NewProp_SpriteFlipBook_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacmanBlock_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacmanBlock = { UE4CodeGen_Private::EPropertyClass::Object, "PacmanBlock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, PacmanBlock), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_PacmanBlock_MetaData, ARRAY_COUNT(NewProp_PacmanBlock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacmanMoving_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacmanMoving = { UE4CodeGen_Private::EPropertyClass::Object, "PacmanMoving", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, PacmanMoving), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_PacmanMoving_MetaData, ARRAY_COUNT(NewProp_PacmanMoving_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacmanDeath_MetaData[] = {
				{ "Category", "Flipbook" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
				{ "ToolTip", "Animation Flipbook" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacmanDeath = { UE4CodeGen_Private::EPropertyClass::Object, "PacmanDeath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacmanPawn, PacmanDeath), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_PacmanDeath_MetaData, ARRAY_COUNT(NewProp_PacmanDeath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadLevelTimerHandle_MetaData[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadLevelTimerHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "LoadLevelTimerHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(APacmanPawn, LoadLevelTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_LoadLevelTimerHandle_MetaData, ARRAY_COUNT(NewProp_LoadLevelTimerHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayDeathTimerHandle_MetaData[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayDeathTimerHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "DelayDeathTimerHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(APacmanPawn, DelayDeathTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(NewProp_DelayDeathTimerHandle_MetaData, ARRAY_COUNT(NewProp_DelayDeathTimerHandle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightPressed_MetaData[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			auto NewProp_RightPressed_SetBit = [](void* Obj){ ((APacmanPawn*)Obj)->RightPressed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RightPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "RightPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacmanPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RightPressed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RightPressed_MetaData, ARRAY_COUNT(NewProp_RightPressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftPressed_MetaData[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			auto NewProp_LeftPressed_SetBit = [](void* Obj){ ((APacmanPawn*)Obj)->LeftPressed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeftPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "LeftPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacmanPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LeftPressed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_LeftPressed_MetaData, ARRAY_COUNT(NewProp_LeftPressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownPressed_MetaData[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			auto NewProp_DownPressed_SetBit = [](void* Obj){ ((APacmanPawn*)Obj)->DownPressed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DownPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "DownPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacmanPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DownPressed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DownPressed_MetaData, ARRAY_COUNT(NewProp_DownPressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpPressed_MetaData[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			auto NewProp_UpPressed_SetBit = [](void* Obj){ ((APacmanPawn*)Obj)->UpPressed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "UpPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacmanPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UpPressed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UpPressed_MetaData, ARRAY_COUNT(NewProp_UpPressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoOnceMove_MetaData[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			auto NewProp_DoOnceMove_SetBit = [](void* Obj){ ((APacmanPawn*)Obj)->DoOnceMove = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoOnceMove = { UE4CodeGen_Private::EPropertyClass::Bool, "DoOnceMove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacmanPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DoOnceMove_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DoOnceMove_MetaData, ARRAY_COUNT(NewProp_DoOnceMove_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoOnceDead_MetaData[] = {
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
			auto NewProp_DoOnceDead_SetBit = [](void* Obj){ ((APacmanPawn*)Obj)->DoOnceDead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoOnceDead = { UE4CodeGen_Private::EPropertyClass::Bool, "DoOnceDead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacmanPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DoOnceDead_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DoOnceDead_MetaData, ARRAY_COUNT(NewProp_DoOnceDead_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveTimeline,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TempYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonusPointsTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EatBonusTimerHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GhostPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanChangeDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isDead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TempLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameModeRef,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Box,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sphere,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SceneRoot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteFlipBook,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PacmanBlock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PacmanMoving,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PacmanDeath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadLevelTimerHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelayDeathTimerHandle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DownPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoOnceMove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoOnceDead,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APacmanPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APacmanPawn::StaticClass,
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
	IMPLEMENT_CLASS(APacmanPawn, 3042472036);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacmanPawn(Z_Construct_UClass_APacmanPawn, &APacmanPawn::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("APacmanPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
