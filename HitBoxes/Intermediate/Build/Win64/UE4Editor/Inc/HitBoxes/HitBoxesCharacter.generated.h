// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HITBOXES_HitBoxesCharacter_generated_h
#error "HitBoxesCharacter.generated.h already included, missing '#pragma once' in HitBoxesCharacter.h"
#endif
#define HITBOXES_HitBoxesCharacter_generated_h

#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_SPARSE_DATA
#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_RPC_WRAPPERS
#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitBoxesCharacter(); \
	friend struct Z_Construct_UClass_AHitBoxesCharacter_Statics; \
public: \
	DECLARE_CLASS(AHitBoxesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitBoxes"), NO_API) \
	DECLARE_SERIALIZER(AHitBoxesCharacter)


#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHitBoxesCharacter(); \
	friend struct Z_Construct_UClass_AHitBoxesCharacter_Statics; \
public: \
	DECLARE_CLASS(AHitBoxesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitBoxes"), NO_API) \
	DECLARE_SERIALIZER(AHitBoxesCharacter)


#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitBoxesCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitBoxesCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitBoxesCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitBoxesCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitBoxesCharacter(AHitBoxesCharacter&&); \
	NO_API AHitBoxesCharacter(const AHitBoxesCharacter&); \
public:


#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitBoxesCharacter(AHitBoxesCharacter&&); \
	NO_API AHitBoxesCharacter(const AHitBoxesCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitBoxesCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitBoxesCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitBoxesCharacter)


#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AHitBoxesCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHitBoxesCharacter, CameraBoom); }


#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_9_PROLOG
#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_SPARSE_DATA \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_RPC_WRAPPERS \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_INCLASS \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_SPARSE_DATA \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_INCLASS_NO_PURE_DECLS \
	HitBoxes_Source_HitBoxes_HitBoxesCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HITBOXES_API UClass* StaticClass<class AHitBoxesCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HitBoxes_Source_HitBoxes_HitBoxesCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
