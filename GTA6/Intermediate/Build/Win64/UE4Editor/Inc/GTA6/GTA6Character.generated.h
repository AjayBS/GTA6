// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GTA6_GTA6Character_generated_h
#error "GTA6Character.generated.h already included, missing '#pragma once' in GTA6Character.h"
#endif
#define GTA6_GTA6Character_generated_h

#define GTA6_Source_GTA6_GTA6Character_h_12_SPARSE_DATA
#define GTA6_Source_GTA6_GTA6Character_h_12_RPC_WRAPPERS
#define GTA6_Source_GTA6_GTA6Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GTA6_Source_GTA6_GTA6Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGTA6Character(); \
	friend struct Z_Construct_UClass_AGTA6Character_Statics; \
public: \
	DECLARE_CLASS(AGTA6Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GTA6"), NO_API) \
	DECLARE_SERIALIZER(AGTA6Character)


#define GTA6_Source_GTA6_GTA6Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGTA6Character(); \
	friend struct Z_Construct_UClass_AGTA6Character_Statics; \
public: \
	DECLARE_CLASS(AGTA6Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GTA6"), NO_API) \
	DECLARE_SERIALIZER(AGTA6Character)


#define GTA6_Source_GTA6_GTA6Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGTA6Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGTA6Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGTA6Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGTA6Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGTA6Character(AGTA6Character&&); \
	NO_API AGTA6Character(const AGTA6Character&); \
public:


#define GTA6_Source_GTA6_GTA6Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGTA6Character(AGTA6Character&&); \
	NO_API AGTA6Character(const AGTA6Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGTA6Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGTA6Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGTA6Character)


#define GTA6_Source_GTA6_GTA6Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGTA6Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGTA6Character, FollowCamera); }


#define GTA6_Source_GTA6_GTA6Character_h_9_PROLOG
#define GTA6_Source_GTA6_GTA6Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GTA6_Source_GTA6_GTA6Character_h_12_PRIVATE_PROPERTY_OFFSET \
	GTA6_Source_GTA6_GTA6Character_h_12_SPARSE_DATA \
	GTA6_Source_GTA6_GTA6Character_h_12_RPC_WRAPPERS \
	GTA6_Source_GTA6_GTA6Character_h_12_INCLASS \
	GTA6_Source_GTA6_GTA6Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GTA6_Source_GTA6_GTA6Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GTA6_Source_GTA6_GTA6Character_h_12_PRIVATE_PROPERTY_OFFSET \
	GTA6_Source_GTA6_GTA6Character_h_12_SPARSE_DATA \
	GTA6_Source_GTA6_GTA6Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GTA6_Source_GTA6_GTA6Character_h_12_INCLASS_NO_PURE_DECLS \
	GTA6_Source_GTA6_GTA6Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GTA6_API UClass* StaticClass<class AGTA6Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GTA6_Source_GTA6_GTA6Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
