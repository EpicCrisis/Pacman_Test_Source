// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GhostDestination.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostDestination() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostDestination_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostDestination();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostDestination_Randomize();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGhostDestination_TriggerOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacman_TestGameModeBase_NoRegister();
// End Cross Module References
	static FName NAME_AGhostDestination_Randomize = FName(TEXT("Randomize"));
	void AGhostDestination::Randomize()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGhostDestination_Randomize),NULL);
	}
	void AGhostDestination::StaticRegisterNativesAGhostDestination()
	{
		UClass* Class = AGhostDestination::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Randomize", &AGhostDestination::execRandomize },
			{ "TriggerOverlap", &AGhostDestination::execTriggerOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGhostDestination_Randomize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostDestination.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostDestination, "Randomize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGhostDestination_TriggerOverlap()
	{
		struct GhostDestination_eventTriggerOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(GhostDestination_eventTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((GhostDestination_eventTriggerOverlap_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GhostDestination_eventTriggerOverlap_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GhostDestination_eventTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GhostDestination_eventTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GhostDestination_eventTriggerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GhostDestination_eventTriggerOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(NewProp_OverlappedComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GhostDestination.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostDestination, "TriggerOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(GhostDestination_eventTriggerOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGhostDestination_NoRegister()
	{
		return AGhostDestination::StaticClass();
	}
	UClass* Z_Construct_UClass_AGhostDestination()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGhostDestination_Randomize, "Randomize" }, // 949944256
				{ &Z_Construct_UFunction_AGhostDestination_TriggerOverlap, "TriggerOverlap" }, // 3478808297
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GhostDestination.h" },
				{ "ModuleRelativePath", "GhostDestination.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTrigger_MetaData[] = {
				{ "Category", "GhostDestination" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GhostDestination.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxTrigger = { UE4CodeGen_Private::EPropertyClass::Object, "BoxTrigger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AGhostDestination, BoxTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_BoxTrigger_MetaData, ARRAY_COUNT(NewProp_BoxTrigger_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardRoot_MetaData[] = {
				{ "Category", "GhostDestination" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GhostDestination.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardRoot = { UE4CodeGen_Private::EPropertyClass::Object, "BillboardRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AGhostDestination, BillboardRoot), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_BillboardRoot_MetaData, ARRAY_COUNT(NewProp_BillboardRoot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[] = {
				{ "Category", "GhostDestination" },
				{ "ModuleRelativePath", "GhostDestination.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef = { UE4CodeGen_Private::EPropertyClass::Object, "GameModeRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGhostDestination, GameModeRef), Z_Construct_UClass_APacman_TestGameModeBase_NoRegister, METADATA_PARAMS(NewProp_GameModeRef_MetaData, ARRAY_COUNT(NewProp_GameModeRef_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTaken_MetaData[] = {
				{ "Category", "GhostDestination" },
				{ "ModuleRelativePath", "GhostDestination.h" },
			};
#endif
			auto NewProp_isTaken_SetBit = [](void* Obj){ ((AGhostDestination*)Obj)->isTaken = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTaken = { UE4CodeGen_Private::EPropertyClass::Bool, "isTaken", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGhostDestination), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isTaken_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isTaken_MetaData, ARRAY_COUNT(NewProp_isTaken_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxTrigger,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BillboardRoot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameModeRef,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isTaken,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGhostDestination>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGhostDestination::StaticClass,
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
	IMPLEMENT_CLASS(AGhostDestination, 1833665176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGhostDestination(Z_Construct_UClass_AGhostDestination, &AGhostDestination::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("AGhostDestination"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostDestination);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
