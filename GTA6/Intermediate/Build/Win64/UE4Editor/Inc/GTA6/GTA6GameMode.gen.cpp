// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GTA6/GTA6GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTA6GameMode() {}
// Cross Module References
	GTA6_API UClass* Z_Construct_UClass_AGTA6GameMode_NoRegister();
	GTA6_API UClass* Z_Construct_UClass_AGTA6GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GTA6();
// End Cross Module References
	void AGTA6GameMode::StaticRegisterNativesAGTA6GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGTA6GameMode_NoRegister()
	{
		return AGTA6GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGTA6GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTA6GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GTA6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTA6GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GTA6GameMode.h" },
		{ "ModuleRelativePath", "GTA6GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTA6GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTA6GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGTA6GameMode_Statics::ClassParams = {
		&AGTA6GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGTA6GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTA6GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTA6GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGTA6GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGTA6GameMode, 3855013698);
	template<> GTA6_API UClass* StaticClass<AGTA6GameMode>()
	{
		return AGTA6GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGTA6GameMode(Z_Construct_UClass_AGTA6GameMode, &AGTA6GameMode::StaticClass, TEXT("/Script/GTA6"), TEXT("AGTA6GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTA6GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
