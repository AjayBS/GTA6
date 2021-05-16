// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GTA6/DailyLifeCharacter/Misc/BotTargetPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotTargetPoint() {}
// Cross Module References
	GTA6_API UClass* Z_Construct_UClass_ABotTargetPoint_NoRegister();
	GTA6_API UClass* Z_Construct_UClass_ABotTargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_GTA6();
// End Cross Module References
	void ABotTargetPoint::StaticRegisterNativesABotTargetPoint()
	{
	}
	UClass* Z_Construct_UClass_ABotTargetPoint_NoRegister()
	{
		return ABotTargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_ABotTargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotTargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_GTA6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotTargetPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DailyLifeCharacter/Misc/BotTargetPoint.h" },
		{ "ModuleRelativePath", "DailyLifeCharacter/Misc/BotTargetPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotTargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotTargetPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABotTargetPoint_Statics::ClassParams = {
		&ABotTargetPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABotTargetPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotTargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotTargetPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABotTargetPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABotTargetPoint, 2586408257);
	template<> GTA6_API UClass* StaticClass<ABotTargetPoint>()
	{
		return ABotTargetPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABotTargetPoint(Z_Construct_UClass_ABotTargetPoint, &ABotTargetPoint::StaticClass, TEXT("/Script/GTA6"), TEXT("ABotTargetPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotTargetPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
