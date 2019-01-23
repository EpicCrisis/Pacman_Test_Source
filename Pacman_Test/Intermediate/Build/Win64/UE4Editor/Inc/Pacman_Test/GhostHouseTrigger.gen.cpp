// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GhostHouseTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostHouseTrigger() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostHouseTrigger_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostHouseTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostHouseTrigger_OnOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AGhostHouseTrigger::StaticRegisterNativesAGhostHouseTrigger()
	{
		UClass* Class = AGhostHouseTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &AGhostHouseTrigger::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGhostHouseTrigger_OnOverlap()
	{
		struct GhostHouseTrigger_eventOnOverlap_Parms
		{
			AActor* ThisActor;
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GhostHouseTrigger_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisActor = { UE4CodeGen_Private::EPropertyClass::Object, "ThisActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GhostHouseTrigger_eventOnOverlap_Parms, ThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThisActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostHouseTrigger.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostHouseTrigger, "OnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GhostHouseTrigger_eventOnOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGhostHouseTrigger_NoRegister()
	{
		return AGhostHouseTrigger::StaticClass();
	}
	UClass* Z_Construct_UClass_AGhostHouseTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGhostHouseTrigger_OnOverlap, "OnOverlap" }, // 284118492
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GhostHouseTrigger.h" },
				{ "ModuleRelativePath", "GhostHouseTrigger.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
				{ "Category", "GhostHouseTrigger" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GhostHouseTrigger.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box = { UE4CodeGen_Private::EPropertyClass::Object, "Box", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AGhostHouseTrigger, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_Box_MetaData, ARRAY_COUNT(NewProp_Box_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Box,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGhostHouseTrigger>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGhostHouseTrigger::StaticClass,
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
	IMPLEMENT_CLASS(AGhostHouseTrigger, 4122592214);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGhostHouseTrigger(Z_Construct_UClass_AGhostHouseTrigger, &AGhostHouseTrigger::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("AGhostHouseTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostHouseTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
