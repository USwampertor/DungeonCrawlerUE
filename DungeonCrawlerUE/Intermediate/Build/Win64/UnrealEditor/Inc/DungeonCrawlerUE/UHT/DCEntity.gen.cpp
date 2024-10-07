// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawlerUE/Public/DCEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDCEntity() {}
// Cross Module References
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCEntity();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCEntity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawlerUE();
// End Cross Module References
	void ADCEntity::StaticRegisterNativesADCEntity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADCEntity);
	UClass* Z_Construct_UClass_ADCEntity_NoRegister()
	{
		return ADCEntity::StaticClass();
	}
	struct Z_Construct_UClass_ADCEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_entityID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_entityID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_entitylevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_entitylevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_maxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADCEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawlerUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEntity_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCEntity_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DCEntity.h" },
		{ "ModuleRelativePath", "Public/DCEntity.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entityID_MetaData[] = {
		{ "Category", "DCEntity" },
		{ "ModuleRelativePath", "Public/DCEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entityID = { "m_entityID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADCEntity, m_entityID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entityID_MetaData), Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entityID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entitylevel_MetaData[] = {
		{ "Category", "DCEntity" },
		{ "ModuleRelativePath", "Public/DCEntity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entitylevel = { "m_entitylevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADCEntity, m_entitylevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entitylevel_MetaData), Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entitylevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCEntity_Statics::NewProp_m_health_MetaData[] = {
		{ "Category", "DCEntity" },
		{ "ModuleRelativePath", "Public/DCEntity.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADCEntity_Statics::NewProp_m_health = { "m_health", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADCEntity, m_health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEntity_Statics::NewProp_m_health_MetaData), Z_Construct_UClass_ADCEntity_Statics::NewProp_m_health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCEntity_Statics::NewProp_m_maxHealth_MetaData[] = {
		{ "Category", "DCEntity" },
		{ "ModuleRelativePath", "Public/DCEntity.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADCEntity_Statics::NewProp_m_maxHealth = { "m_maxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADCEntity, m_maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEntity_Statics::NewProp_m_maxHealth_MetaData), Z_Construct_UClass_ADCEntity_Statics::NewProp_m_maxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADCEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entityID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADCEntity_Statics::NewProp_m_entitylevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADCEntity_Statics::NewProp_m_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADCEntity_Statics::NewProp_m_maxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADCEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADCEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADCEntity_Statics::ClassParams = {
		&ADCEntity::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADCEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADCEntity_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_ADCEntity_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADCEntity_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADCEntity()
	{
		if (!Z_Registration_Info_UClass_ADCEntity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADCEntity.OuterSingleton, Z_Construct_UClass_ADCEntity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADCEntity.OuterSingleton;
	}
	template<> DUNGEONCRAWLERUE_API UClass* StaticClass<ADCEntity>()
	{
		return ADCEntity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADCEntity);
	ADCEntity::~ADCEntity() {}
	struct Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEntity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADCEntity, ADCEntity::StaticClass, TEXT("ADCEntity"), &Z_Registration_Info_UClass_ADCEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADCEntity), 2061982484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEntity_h_3446504234(TEXT("/Script/DungeonCrawlerUE"),
		Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCEntity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
