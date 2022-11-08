// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RADIOPROJECT_RadioProjectCharacter_generated_h
#error "RadioProjectCharacter.generated.h already included, missing '#pragma once' in RadioProjectCharacter.h"
#endif
#define RADIOPROJECT_RadioProjectCharacter_generated_h

#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_SPARSE_DATA
#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_RPC_WRAPPERS
#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARadioProjectCharacter(); \
	friend struct Z_Construct_UClass_ARadioProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ARadioProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RadioProject"), NO_API) \
	DECLARE_SERIALIZER(ARadioProjectCharacter)


#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARadioProjectCharacter(); \
	friend struct Z_Construct_UClass_ARadioProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ARadioProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RadioProject"), NO_API) \
	DECLARE_SERIALIZER(ARadioProjectCharacter)


#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARadioProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadioProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARadioProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadioProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARadioProjectCharacter(ARadioProjectCharacter&&); \
	NO_API ARadioProjectCharacter(const ARadioProjectCharacter&); \
public:


#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARadioProjectCharacter(ARadioProjectCharacter&&); \
	NO_API ARadioProjectCharacter(const ARadioProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARadioProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadioProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARadioProjectCharacter)


#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ARadioProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ARadioProjectCharacter, FollowCamera); }


#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_9_PROLOG
#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_SPARSE_DATA \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_RPC_WRAPPERS \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_INCLASS \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_SPARSE_DATA \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	RadioProject_Source_RadioProject_RadioProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RADIOPROJECT_API UClass* StaticClass<class ARadioProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RadioProject_Source_RadioProject_RadioProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
