// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LevelVisual.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVisual() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_ALevelVisual_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_ALevelVisual();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALevelVisual::StaticRegisterNativesALevelVisual()
	{
	}
	UClass* Z_Construct_UClass_ALevelVisual_NoRegister()
	{
		return ALevelVisual::StaticClass();
	}
	UClass* Z_Construct_UClass_ALevelVisual()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LevelVisual.h" },
				{ "ModuleRelativePath", "LevelVisual.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "Category", "LevelVisual" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "LevelVisual.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Object, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ALevelVisual, Level), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALevelVisual>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALevelVisual::StaticClass,
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
	IMPLEMENT_CLASS(ALevelVisual, 4144868628);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelVisual(Z_Construct_UClass_ALevelVisual, &ALevelVisual::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("ALevelVisual"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelVisual);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
