// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ENUM_GhostType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENUM_GhostType() {}
// Cross Module References
	PACMAN_TEST_API UEnum* Z_Construct_UEnum_Pacman_Test_GhostType();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
// End Cross Module References
	static UEnum* GhostType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Pacman_Test_GhostType, Z_Construct_UPackage__Script_Pacman_Test(), TEXT("GhostType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GhostType(GhostType_StaticEnum, TEXT("/Script/Pacman_Test"), TEXT("GhostType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Pacman_Test_GhostType_CRC() { return 129014557U; }
	UEnum* Z_Construct_UEnum_Pacman_Test_GhostType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Pacman_Test();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GhostType"), 0, Get_Z_Construct_UEnum_Pacman_Test_GhostType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Red", (int64)Red },
				{ "Pink", (int64)Pink },
				{ "Cyan", (int64)Cyan },
				{ "Orange", (int64)Orange },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cyan.DisplayName", "Cyan" },
				{ "ModuleRelativePath", "ENUM_GhostType.h" },
				{ "Orange.DisplayName", "Orange" },
				{ "Pink.DisplayName", "Pink" },
				{ "Red.DisplayName", "Red" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Pacman_Test,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"GhostType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"GhostType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
