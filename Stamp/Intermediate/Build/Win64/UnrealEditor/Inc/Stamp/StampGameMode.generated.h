// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STAMP_StampGameMode_generated_h
#error "StampGameMode.generated.h already included, missing '#pragma once' in StampGameMode.h"
#endif
#define STAMP_StampGameMode_generated_h

#define FID_Stamp_Source_Stamp_StampGameMode_h_12_SPARSE_DATA
#define FID_Stamp_Source_Stamp_StampGameMode_h_12_RPC_WRAPPERS
#define FID_Stamp_Source_Stamp_StampGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Stamp_Source_Stamp_StampGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStampGameMode(); \
	friend struct Z_Construct_UClass_AStampGameMode_Statics; \
public: \
	DECLARE_CLASS(AStampGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stamp"), STAMP_API) \
	DECLARE_SERIALIZER(AStampGameMode)


#define FID_Stamp_Source_Stamp_StampGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStampGameMode(); \
	friend struct Z_Construct_UClass_AStampGameMode_Statics; \
public: \
	DECLARE_CLASS(AStampGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stamp"), STAMP_API) \
	DECLARE_SERIALIZER(AStampGameMode)


#define FID_Stamp_Source_Stamp_StampGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STAMP_API AStampGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStampGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STAMP_API, AStampGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStampGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STAMP_API AStampGameMode(AStampGameMode&&); \
	STAMP_API AStampGameMode(const AStampGameMode&); \
public:


#define FID_Stamp_Source_Stamp_StampGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STAMP_API AStampGameMode(AStampGameMode&&); \
	STAMP_API AStampGameMode(const AStampGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STAMP_API, AStampGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStampGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStampGameMode)


#define FID_Stamp_Source_Stamp_StampGameMode_h_9_PROLOG
#define FID_Stamp_Source_Stamp_StampGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Stamp_Source_Stamp_StampGameMode_h_12_SPARSE_DATA \
	FID_Stamp_Source_Stamp_StampGameMode_h_12_RPC_WRAPPERS \
	FID_Stamp_Source_Stamp_StampGameMode_h_12_INCLASS \
	FID_Stamp_Source_Stamp_StampGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Stamp_Source_Stamp_StampGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Stamp_Source_Stamp_StampGameMode_h_12_SPARSE_DATA \
	FID_Stamp_Source_Stamp_StampGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Stamp_Source_Stamp_StampGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Stamp_Source_Stamp_StampGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STAMP_API UClass* StaticClass<class AStampGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Stamp_Source_Stamp_StampGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS