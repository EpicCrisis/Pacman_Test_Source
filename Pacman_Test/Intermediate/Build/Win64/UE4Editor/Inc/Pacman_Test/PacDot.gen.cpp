// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PacDot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacDot() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacDot_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacDot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacDot_ActorOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacDot_CheckPowerUp();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacman_TestGameModeBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APacDot::StaticRegisterNativesAPacDot()
	{
		UClass* Class = APacDot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorOverlap", &APacDot::execActorOverlap },
			{ "CheckPowerUp", &APacDot::execCheckPowerUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APacDot_ActorOverlap()
	{
		struct PacDot_eventActorOverlap_Parms
		{
			AActor* ThisActor;
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PacDot_eventActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisActor = { UE4CodeGen_Private::EPropertyClass::Object, "ThisActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PacDot_eventActorOverlap_Parms, ThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThisActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacDot, "ActorOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(PacDot_eventActorOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacDot_CheckPowerUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacDot, "CheckPowerUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APacDot_NoRegister()
	{
		return APacDot::StaticClass();
	}
	UClass* Z_Construct_UClass_APacDot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APacDot_ActorOverlap, "ActorOverlap" }, // 2126837981
				{ &Z_Construct_UFunction_APacDot_CheckPowerUp, "CheckPowerUp" }, // 3075810914
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PacDot.h" },
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
				{ "Category", "PacDot" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere = { UE4CodeGen_Private::EPropertyClass::Object, "Sphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APacDot, Sphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Sphere_MetaData, ARRAY_COUNT(NewProp_Sphere_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
				{ "Category", "PacDot" },
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Points = { UE4CodeGen_Private::EPropertyClass::Int, "Points", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacDot, Points), METADATA_PARAMS(NewProp_Points_MetaData, ARRAY_COUNT(NewProp_Points_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[] = {
				{ "Category", "PacDot" },
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef = { UE4CodeGen_Private::EPropertyClass::Object, "GameModeRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacDot, GameModeRef), Z_Construct_UClass_APacman_TestGameModeBase_NoRegister, METADATA_PARAMS(NewProp_GameModeRef_MetaData, ARRAY_COUNT(NewProp_GameModeRef_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalScale_MetaData[] = {
				{ "Category", "PacDot" },
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalScale = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacDot, NormalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NormalScale_MetaData, ARRAY_COUNT(NewProp_NormalScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpScale_MetaData[] = {
				{ "Category", "PacDot" },
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PowerUpScale = { UE4CodeGen_Private::EPropertyClass::Struct, "PowerUpScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacDot, PowerUpScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PowerUpScale_MetaData, ARRAY_COUNT(NewProp_PowerUpScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPowerUp_MetaData[] = {
				{ "Category", "PacDot" },
				{ "ModuleRelativePath", "PacDot.h" },
			};
#endif
			auto NewProp_isPowerUp_SetBit = [](void* Obj){ ((APacDot*)Obj)->isPowerUp = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPowerUp = { UE4CodeGen_Private::EPropertyClass::Bool, "isPowerUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APacDot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isPowerUp_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isPowerUp_MetaData, ARRAY_COUNT(NewProp_isPowerUp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sphere,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Points,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameModeRef,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerUpScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isPowerUp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APacDot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APacDot::StaticClass,
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
	IMPLEMENT_CLASS(APacDot, 1455036575);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacDot(Z_Construct_UClass_APacDot, &APacDot::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("APacDot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacDot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
