// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Struct_GhostAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruct_GhostAnimation() {}
// Cross Module References
	PACMAN_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FGhostAnimation();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
class UScriptStruct* FGhostAnimation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PACMAN_TEST_API uint32 Get_Z_Construct_UScriptStruct_FGhostAnimation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGhostAnimation, Z_Construct_UPackage__Script_Pacman_Test(), TEXT("GhostAnimation"), sizeof(FGhostAnimation), Get_Z_Construct_UScriptStruct_FGhostAnimation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGhostAnimation(FGhostAnimation::StaticStruct, TEXT("/Script/Pacman_Test"), TEXT("GhostAnimation"), false, nullptr, nullptr);
static struct FScriptStruct_Pacman_Test_StaticRegisterNativesFGhostAnimation
{
	FScriptStruct_Pacman_Test_StaticRegisterNativesFGhostAnimation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GhostAnimation")),new UScriptStruct::TCppStructOps<FGhostAnimation>);
	}
} ScriptStruct_Pacman_Test_StaticRegisterNativesFGhostAnimation;
	UScriptStruct* Z_Construct_UScriptStruct_FGhostAnimation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGhostAnimation_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Pacman_Test();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GhostAnimation"), sizeof(FGhostAnimation), Get_Z_Construct_UScriptStruct_FGhostAnimation_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGhostAnimation>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead_MoveRight_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dead_MoveRight = { UE4CodeGen_Private::EPropertyClass::Object, "Dead_MoveRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, Dead_MoveRight), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Dead_MoveRight_MetaData, ARRAY_COUNT(NewProp_Dead_MoveRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead_MoveLeft_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dead_MoveLeft = { UE4CodeGen_Private::EPropertyClass::Object, "Dead_MoveLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, Dead_MoveLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Dead_MoveLeft_MetaData, ARRAY_COUNT(NewProp_Dead_MoveLeft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead_MoveDown_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dead_MoveDown = { UE4CodeGen_Private::EPropertyClass::Object, "Dead_MoveDown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, Dead_MoveDown), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Dead_MoveDown_MetaData, ARRAY_COUNT(NewProp_Dead_MoveDown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead_MoveUp_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dead_MoveUp = { UE4CodeGen_Private::EPropertyClass::Object, "Dead_MoveUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, Dead_MoveUp), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Dead_MoveUp_MetaData, ARRAY_COUNT(NewProp_Dead_MoveUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRight_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveRight = { UE4CodeGen_Private::EPropertyClass::Object, "MoveRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, MoveRight), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveRight_MetaData, ARRAY_COUNT(NewProp_MoveRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLeft_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLeft = { UE4CodeGen_Private::EPropertyClass::Object, "MoveLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, MoveLeft), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveLeft_MetaData, ARRAY_COUNT(NewProp_MoveLeft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDown_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveDown = { UE4CodeGen_Private::EPropertyClass::Object, "MoveDown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, MoveDown), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveDown_MetaData, ARRAY_COUNT(NewProp_MoveDown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveUp_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveUp = { UE4CodeGen_Private::EPropertyClass::Object, "MoveUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, MoveUp), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_MoveUp_MetaData, ARRAY_COUNT(NewProp_MoveUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flashing_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Flashing = { UE4CodeGen_Private::EPropertyClass::Object, "Flashing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, Flashing), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Flashing_MetaData, ARRAY_COUNT(NewProp_Flashing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[] = {
				{ "Category", "GhostAnimation" },
				{ "ModuleRelativePath", "Struct_GhostAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blue = { UE4CodeGen_Private::EPropertyClass::Object, "Blue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGhostAnimation, Blue), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Blue_MetaData, ARRAY_COUNT(NewProp_Blue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dead_MoveRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dead_MoveLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dead_MoveDown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dead_MoveUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveDown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flashing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blue,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GhostAnimation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGhostAnimation),
				alignof(FGhostAnimation),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGhostAnimation_CRC() { return 718634311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
