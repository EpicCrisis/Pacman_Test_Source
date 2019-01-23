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
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacman_TestGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APacmanPawn::StaticRegisterNativesAPacmanPawn()
	{
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "PacmanPawn.h" },
				{ "ModuleRelativePath", "PacmanPawn.h" },
			};
#endif
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
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
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
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APacmanPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APacmanPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(APacmanPawn, 3596565351);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacmanPawn(Z_Construct_UClass_APacmanPawn, &APacmanPawn::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("APacmanPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
