// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Controller() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_AAI_Controller_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_AAI_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
// End Cross Module References
	void AAI_Controller::StaticRegisterNativesAAI_Controller()
	{
	}
	UClass* Z_Construct_UClass_AAI_Controller_NoRegister()
	{
		return AAI_Controller::StaticClass();
	}
	UClass* Z_Construct_UClass_AAI_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AI_Controller.h" },
				{ "ModuleRelativePath", "AI_Controller.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAI_Controller>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAI_Controller::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Controller, 2340172604);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Controller(Z_Construct_UClass_AAI_Controller, &AAI_Controller::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("AAI_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
