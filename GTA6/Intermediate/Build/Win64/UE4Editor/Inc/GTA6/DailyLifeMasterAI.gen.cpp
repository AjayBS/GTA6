// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GTA6/DailyLifeCharacter/Character/DailyLifeMasterAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyLifeMasterAI() {}
// Cross Module References
	GTA6_API UClass* Z_Construct_UClass_ADailyLifeMasterAI_NoRegister();
	GTA6_API UClass* Z_Construct_UClass_ADailyLifeMasterAI();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GTA6();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void ADailyLifeMasterAI::StaticRegisterNativesADailyLifeMasterAI()
	{
	}
	UClass* Z_Construct_UClass_ADailyLifeMasterAI_NoRegister()
	{
		return ADailyLifeMasterAI::StaticClass();
	}
	struct Z_Construct_UClass_ADailyLifeMasterAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADailyLifeMasterAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GTA6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADailyLifeMasterAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DailyLifeCharacter/Character/DailyLifeMasterAI.h" },
		{ "ModuleRelativePath", "DailyLifeCharacter/Character/DailyLifeMasterAI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_TargetPoints_MetaData[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "DailyLifeCharacter/Character/DailyLifeMasterAI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADailyLifeMasterAI, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_TargetPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_TargetPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "DailyLifeCharacter/Character/DailyLifeMasterAI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADailyLifeMasterAI, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_BehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADailyLifeMasterAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_TargetPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_TargetPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADailyLifeMasterAI_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADailyLifeMasterAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADailyLifeMasterAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADailyLifeMasterAI_Statics::ClassParams = {
		&ADailyLifeMasterAI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADailyLifeMasterAI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADailyLifeMasterAI_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADailyLifeMasterAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADailyLifeMasterAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADailyLifeMasterAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADailyLifeMasterAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADailyLifeMasterAI, 1592847776);
	template<> GTA6_API UClass* StaticClass<ADailyLifeMasterAI>()
	{
		return ADailyLifeMasterAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADailyLifeMasterAI(Z_Construct_UClass_ADailyLifeMasterAI, &ADailyLifeMasterAI::StaticClass, TEXT("/Script/GTA6"), TEXT("ADailyLifeMasterAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADailyLifeMasterAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
