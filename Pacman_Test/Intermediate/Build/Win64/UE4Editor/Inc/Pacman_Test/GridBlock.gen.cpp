// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GridBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridBlock() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGridBlock_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGridBlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_AGridBlock_ActorOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AGridBlock::StaticRegisterNativesAGridBlock()
	{
		UClass* Class = AGridBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorOverlap", &AGridBlock::execActorOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGridBlock_ActorOverlap()
	{
		struct GridBlock_eventActorOverlap_Parms
		{
			AActor* ThisActor;
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridBlock_eventActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisActor = { UE4CodeGen_Private::EPropertyClass::Object, "ThisActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GridBlock_eventActorOverlap_Parms, ThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThisActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GridBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridBlock, "ActorOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GridBlock_eventActorOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGridBlock_NoRegister()
	{
		return AGridBlock::StaticClass();
	}
	UClass* Z_Construct_UClass_AGridBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGridBlock_ActorOverlap, "ActorOverlap" }, // 488146556
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GridBlock.h" },
				{ "ModuleRelativePath", "GridBlock.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
				{ "Category", "GridBlock" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GridBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box = { UE4CodeGen_Private::EPropertyClass::Object, "Box", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AGridBlock, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_Box_MetaData, ARRAY_COUNT(NewProp_Box_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Checked_MetaData[] = {
				{ "Category", "GridBlock" },
				{ "ModuleRelativePath", "GridBlock.h" },
			};
#endif
			auto NewProp_Checked_SetBit = [](void* Obj){ ((AGridBlock*)Obj)->Checked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Checked = { UE4CodeGen_Private::EPropertyClass::Bool, "Checked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGridBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Checked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Checked_MetaData, ARRAY_COUNT(NewProp_Checked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isWalkable_MetaData[] = {
				{ "Category", "GridBlock" },
				{ "ModuleRelativePath", "GridBlock.h" },
			};
#endif
			auto NewProp_isWalkable_SetBit = [](void* Obj){ ((AGridBlock*)Obj)->isWalkable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWalkable = { UE4CodeGen_Private::EPropertyClass::Bool, "isWalkable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGridBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isWalkable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isWalkable_MetaData, ARRAY_COUNT(NewProp_isWalkable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Box,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Checked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isWalkable,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGridBlock>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGridBlock::StaticClass,
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
	IMPLEMENT_CLASS(AGridBlock, 261055241);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridBlock(Z_Construct_UClass_AGridBlock, &AGridBlock::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("AGridBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
