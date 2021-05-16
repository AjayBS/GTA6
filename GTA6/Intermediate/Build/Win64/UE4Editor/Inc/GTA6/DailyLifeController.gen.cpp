// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GTA6/DailyLifeCharacter/Controller/DailyLifeController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDailyLifeController() {}
// Cross Module References
	GTA6_API UClass* Z_Construct_UClass_ADailyLifeController_NoRegister();
	GTA6_API UClass* Z_Construct_UClass_ADailyLifeController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GTA6();
// End Cross Module References
	void ADailyLifeController::StaticRegisterNativesADailyLifeController()
	{
	}
	UClass* Z_Construct_UClass_ADailyLifeController_NoRegister()
	{
		return ADailyLifeController::StaticClass();
	}
	struct Z_Construct_UClass_ADailyLifeController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationToGoKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationToGoKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADailyLifeController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GTA6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADailyLifeController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DailyLifeCharacter/Controller/DailyLifeController.h" },
		{ "ModuleRelativePath", "DailyLifeCharacter/Controller/DailyLifeController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADailyLifeController_Statics::NewProp_LocationToGoKey_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/*Blackboard keys*/" },
		{ "ModuleRelativePath", "DailyLifeCharacter/Controller/DailyLifeController.h" },
		{ "ToolTip", "Blackboard keys" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADailyLifeController_Statics::NewProp_LocationToGoKey = { "LocationToGoKey", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADailyLifeController, LocationToGoKey), METADATA_PARAMS(Z_Construct_UClass_ADailyLifeController_Statics::NewProp_LocationToGoKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADailyLifeController_Statics::NewProp_LocationToGoKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADailyLifeController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADailyLifeController_Statics::NewProp_LocationToGoKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADailyLifeController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADailyLifeController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADailyLifeController_Statics::ClassParams = {
		&ADailyLifeController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADailyLifeController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADailyLifeController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADailyLifeController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADailyLifeController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADailyLifeController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADailyLifeController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADailyLifeController, 204399619);
	template<> GTA6_API UClass* StaticClass<ADailyLifeController>()
	{
		return ADailyLifeController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADailyLifeController(Z_Construct_UClass_ADailyLifeController, &ADailyLifeController::StaticClass, TEXT("/Script/GTA6"), TEXT("ADailyLifeController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADailyLifeController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
