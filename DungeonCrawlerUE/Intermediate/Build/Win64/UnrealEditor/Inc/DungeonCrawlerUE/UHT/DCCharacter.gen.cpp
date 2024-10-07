// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawlerUE/Public/DCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDCCharacter() {}
// Cross Module References
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCCharacter();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCCharacter_NoRegister();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCEntity();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawlerUE();
// End Cross Module References
	void ADCCharacter::StaticRegisterNativesADCCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADCCharacter);
	UClass* Z_Construct_UClass_ADCCharacter_NoRegister()
	{
		return ADCCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADCCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADCCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADCEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawlerUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADCCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DCCharacter.h" },
		{ "ModuleRelativePath", "Public/DCCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADCCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADCCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADCCharacter_Statics::ClassParams = {
		&ADCCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADCCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADCCharacter()
	{
		if (!Z_Registration_Info_UClass_ADCCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADCCharacter.OuterSingleton, Z_Construct_UClass_ADCCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADCCharacter.OuterSingleton;
	}
	template<> DUNGEONCRAWLERUE_API UClass* StaticClass<ADCCharacter>()
	{
		return ADCCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADCCharacter);
	ADCCharacter::~ADCCharacter() {}
	struct Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADCCharacter, ADCCharacter::StaticClass, TEXT("ADCCharacter"), &Z_Registration_Info_UClass_ADCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADCCharacter), 1175182610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCharacter_h_535629457(TEXT("/Script/DungeonCrawlerUE"),
		Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
