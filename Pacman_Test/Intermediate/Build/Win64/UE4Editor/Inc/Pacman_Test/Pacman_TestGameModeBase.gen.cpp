// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pacman_TestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacman_TestGameModeBase() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacman_TestGameModeBase_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_APacman_TestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_CreateGrid();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_GetBlockFromGridLocation();
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGridBlock_NoRegister();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_GetBlockFromWorldLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_SpawnPacman();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_WinEvent();
	PACMAN_TEST_API UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_WorldToGridLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_APacman_TestGameModeBase_CreateGrid = FName(TEXT("CreateGrid"));
	void APacman_TestGameModeBase::CreateGrid()
	{
		ProcessEvent(FindFunctionChecked(NAME_APacman_TestGameModeBase_CreateGrid),NULL);
	}
	static FName NAME_APacman_TestGameModeBase_SpawnPacman = FName(TEXT("SpawnPacman"));
	void APacman_TestGameModeBase::SpawnPacman()
	{
		ProcessEvent(FindFunctionChecked(NAME_APacman_TestGameModeBase_SpawnPacman),NULL);
	}
	void APacman_TestGameModeBase::StaticRegisterNativesAPacman_TestGameModeBase()
	{
		UClass* Class = APacman_TestGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGrid", &APacman_TestGameModeBase::execCreateGrid },
			{ "GetBlockFromGridLocation", &APacman_TestGameModeBase::execGetBlockFromGridLocation },
			{ "GetBlockFromWorldLocation", &APacman_TestGameModeBase::execGetBlockFromWorldLocation },
			{ "SpawnPacman", &APacman_TestGameModeBase::execSpawnPacman },
			{ "WinEvent", &APacman_TestGameModeBase::execWinEvent },
			{ "WorldToGridLocation", &APacman_TestGameModeBase::execWorldToGridLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_CreateGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacman_TestGameModeBase, "CreateGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_GetBlockFromGridLocation()
	{
		struct Pacman_TestGameModeBase_eventGetBlockFromGridLocation_Parms
		{
			int32 X;
			int32 Y;
			AGridBlock* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pacman_TestGameModeBase_eventGetBlockFromGridLocation_Parms, ReturnValue), Z_Construct_UClass_AGridBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pacman_TestGameModeBase_eventGetBlockFromGridLocation_Parms, Y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pacman_TestGameModeBase_eventGetBlockFromGridLocation_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacman_TestGameModeBase, "GetBlockFromGridLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Pacman_TestGameModeBase_eventGetBlockFromGridLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_GetBlockFromWorldLocation()
	{
		struct Pacman_TestGameModeBase_eventGetBlockFromWorldLocation_Parms
		{
			FVector Location;
			AGridBlock* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pacman_TestGameModeBase_eventGetBlockFromWorldLocation_Parms, ReturnValue), Z_Construct_UClass_AGridBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pacman_TestGameModeBase_eventGetBlockFromWorldLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacman_TestGameModeBase, "GetBlockFromWorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(Pacman_TestGameModeBase_eventGetBlockFromWorldLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_SpawnPacman()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacman_TestGameModeBase, "SpawnPacman", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_WinEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacman_TestGameModeBase, "WinEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APacman_TestGameModeBase_WorldToGridLocation()
	{
		struct Pacman_TestGameModeBase_eventWorldToGridLocation_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pacman_TestGameModeBase_eventWorldToGridLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pacman_TestGameModeBase_eventWorldToGridLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APacman_TestGameModeBase, "WorldToGridLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(Pacman_TestGameModeBase_eventWorldToGridLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APacman_TestGameModeBase_NoRegister()
	{
		return APacman_TestGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_APacman_TestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APacman_TestGameModeBase_CreateGrid, "CreateGrid" }, // 2544835552
				{ &Z_Construct_UFunction_APacman_TestGameModeBase_GetBlockFromGridLocation, "GetBlockFromGridLocation" }, // 4157491540
				{ &Z_Construct_UFunction_APacman_TestGameModeBase_GetBlockFromWorldLocation, "GetBlockFromWorldLocation" }, // 14291376
				{ &Z_Construct_UFunction_APacman_TestGameModeBase_SpawnPacman, "SpawnPacman" }, // 2480732313
				{ &Z_Construct_UFunction_APacman_TestGameModeBase_WinEvent, "WinEvent" }, // 3347672099
				{ &Z_Construct_UFunction_APacman_TestGameModeBase_WorldToGridLocation, "WorldToGridLocation" }, // 525633219
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Pacman_TestGameModeBase.h" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacPlayer_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PacPlayer = { UE4CodeGen_Private::EPropertyClass::Class, "PacPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, PacPlayer), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PacPlayer_MetaData, ARRAY_COUNT(NewProp_PacPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EatenDots_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EatenDots = { UE4CodeGen_Private::EPropertyClass::Int, "EatenDots", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, EatenDots), METADATA_PARAMS(NewProp_EatenDots_MetaData, ARRAY_COUNT(NewProp_EatenDots_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDots_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalDots = { UE4CodeGen_Private::EPropertyClass::Int, "TotalDots", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, TotalDots), METADATA_PARAMS(NewProp_TotalDots_MetaData, ARRAY_COUNT(NewProp_TotalDots_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusGhostPoints_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BonusGhostPoints = { UE4CodeGen_Private::EPropertyClass::Int, "BonusGhostPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, BonusGhostPoints), METADATA_PARAMS(NewProp_BonusGhostPoints_MetaData, ARRAY_COUNT(NewProp_BonusGhostPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Lives = { UE4CodeGen_Private::EPropertyClass::Int, "Lives", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, Lives), METADATA_PARAMS(NewProp_Lives_MetaData, ARRAY_COUNT(NewProp_Lives_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score = { UE4CodeGen_Private::EPropertyClass::Int, "Score", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, Score), METADATA_PARAMS(NewProp_Score_MetaData, ARRAY_COUNT(NewProp_Score_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spacing = { UE4CodeGen_Private::EPropertyClass::Float, "Spacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, Spacing), METADATA_PARAMS(NewProp_Spacing_MetaData, ARRAY_COUNT(NewProp_Spacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxY = { UE4CodeGen_Private::EPropertyClass::Int, "MaxY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, MaxY), METADATA_PARAMS(NewProp_MaxY_MetaData, ARRAY_COUNT(NewProp_MaxY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxX = { UE4CodeGen_Private::EPropertyClass::Int, "MaxX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, MaxX), METADATA_PARAMS(NewProp_MaxX_MetaData, ARRAY_COUNT(NewProp_MaxX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlocksArray_MetaData[] = {
				{ "Category", "Pacman_TestGameModeBase" },
				{ "ModuleRelativePath", "Pacman_TestGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlocksArray = { UE4CodeGen_Private::EPropertyClass::Array, "BlocksArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APacman_TestGameModeBase, BlocksArray), METADATA_PARAMS(NewProp_BlocksArray_MetaData, ARRAY_COUNT(NewProp_BlocksArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlocksArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "BlocksArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AGridBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PacPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EatenDots,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalDots,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonusGhostPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lives,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Score,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Spacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlocksArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlocksArray_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APacman_TestGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APacman_TestGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(APacman_TestGameModeBase, 990846231);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacman_TestGameModeBase(Z_Construct_UClass_APacman_TestGameModeBase, &APacman_TestGameModeBase::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("APacman_TestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacman_TestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
