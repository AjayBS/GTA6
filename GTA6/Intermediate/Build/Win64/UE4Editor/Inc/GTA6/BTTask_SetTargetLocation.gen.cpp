// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GTA6/DailyLifeCharacter/AI/Tasks/BTTask_SetTargetLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetTargetLocation() {}
// Cross Module References
	GTA6_API UClass* Z_Construct_UClass_UBTTask_SetTargetLocation_NoRegister();
	GTA6_API UClass* Z_Construct_UClass_UBTTask_SetTargetLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_GTA6();
// End Cross Module References
	void UBTTask_SetTargetLocation::StaticRegisterNativesUBTTask_SetTargetLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SetTargetLocation_NoRegister()
	{
		return UBTTask_SetTargetLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetTargetLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetTargetLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GTA6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetTargetLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DailyLifeCharacter/AI/Tasks/BTTask_SetTargetLocation.h" },
		{ "ModuleRelativePath", "DailyLifeCharacter/AI/Tasks/BTTask_SetTargetLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetTargetLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetTargetLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetTargetLocation_Statics::ClassParams = {
		&UBTTask_SetTargetLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetTargetLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetTargetLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetTargetLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_SetTargetLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_SetTargetLocation, 1424644633);
	template<> GTA6_API UClass* StaticClass<UBTTask_SetTargetLocation>()
	{
		return UBTTask_SetTargetLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SetTargetLocation(Z_Construct_UClass_UBTTask_SetTargetLocation, &UBTTask_SetTargetLocation::StaticClass, TEXT("/Script/GTA6"), TEXT("UBTTask_SetTargetLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetTargetLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
