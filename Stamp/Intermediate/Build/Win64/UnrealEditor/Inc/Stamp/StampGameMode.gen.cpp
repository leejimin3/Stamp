// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stamp/StampGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStampGameMode() {}
// Cross Module References
	STAMP_API UClass* Z_Construct_UClass_AStampGameMode_NoRegister();
	STAMP_API UClass* Z_Construct_UClass_AStampGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Stamp();
// End Cross Module References
	void AStampGameMode::StaticRegisterNativesAStampGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStampGameMode);
	UClass* Z_Construct_UClass_AStampGameMode_NoRegister()
	{
		return AStampGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStampGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStampGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStampGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StampGameMode.h" },
		{ "ModuleRelativePath", "StampGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStampGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStampGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStampGameMode_Statics::ClassParams = {
		&AStampGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStampGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStampGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStampGameMode()
	{
		if (!Z_Registration_Info_UClass_AStampGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStampGameMode.OuterSingleton, Z_Construct_UClass_AStampGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStampGameMode.OuterSingleton;
	}
	template<> STAMP_API UClass* StaticClass<AStampGameMode>()
	{
		return AStampGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStampGameMode);
	struct Z_CompiledInDeferFile_FID_Stamp_Source_Stamp_StampGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Stamp_Source_Stamp_StampGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStampGameMode, AStampGameMode::StaticClass, TEXT("AStampGameMode"), &Z_Registration_Info_UClass_AStampGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStampGameMode), 2230176605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Stamp_Source_Stamp_StampGameMode_h_3677632554(TEXT("/Script/Stamp"),
		Z_CompiledInDeferFile_FID_Stamp_Source_Stamp_StampGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Stamp_Source_Stamp_StampGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
