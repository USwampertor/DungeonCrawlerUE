// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawlerUE/Public/DCEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDCEnemy() {}
// Cross Module References
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCEnemy();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCEnemy_NoRegister();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCEntity();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawlerUE();
// End Cross Module References
	void ADCEnemy::StaticRegisterNativesADCEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADCEnemy);
	UClass* Z_Construct_UClass_ADCEnemy_NoRegister()
	{
		return ADCEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ADCEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADCEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADCEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawlerUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCEnemy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DCEnemy.h" },
		{ "ModuleRelativePath", "Public/DCEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADCEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADCEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADCEnemy_Statics::ClassParams = {
		&ADCEnemy::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ADCEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADCEnemy()
	{
		if (!Z_Registration_Info_UClass_ADCEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADCEnemy.OuterSingleton, Z_Construct_UClass_ADCEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADCEnemy.OuterSingleton;
	}
	template<> DUNGEONCRAWLERUE_API UClass* StaticClass<ADCEnemy>()
	{
		return ADCEnemy::StaticClass();
	}
	ADCEnemy::ADCEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADCEnemy);
	ADCEnemy::~ADCEnemy() {}
	struct Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADCEnemy, ADCEnemy::StaticClass, TEXT("ADCEnemy"), &Z_Registration_Info_UClass_ADCEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADCEnemy), 2761005293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEnemy_h_2021940720(TEXT("/Script/DungeonCrawlerUE"),
		Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
