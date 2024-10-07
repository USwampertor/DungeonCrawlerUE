// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawlerUE/Public/DCCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDCCamera() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCEntity_NoRegister();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_UDCCamera();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_UDCCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawlerUE();
// End Cross Module References
	void UDCCamera::StaticRegisterNativesUDCCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDCCamera);
	UClass* Z_Construct_UClass_UDCCamera_NoRegister()
	{
		return UDCCamera::StaticClass();
	}
	struct Z_Construct_UClass_UDCCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_toFollow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_toFollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_cameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_cameraSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDCCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawlerUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDCCamera_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDCCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DCCamera.h" },
		{ "ModuleRelativePath", "Public/DCCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDCCamera_Statics::NewProp_m_toFollow_MetaData[] = {
		{ "Category", "DCCamera" },
		{ "ModuleRelativePath", "Public/DCCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDCCamera_Statics::NewProp_m_toFollow = { "m_toFollow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDCCamera, m_toFollow), Z_Construct_UClass_ADCEntity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDCCamera_Statics::NewProp_m_toFollow_MetaData), Z_Construct_UClass_UDCCamera_Statics::NewProp_m_toFollow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDCCamera_Statics::NewProp_m_offset_MetaData[] = {
		{ "Category", "DCCamera" },
		{ "ModuleRelativePath", "Public/DCCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDCCamera_Statics::NewProp_m_offset = { "m_offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDCCamera, m_offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDCCamera_Statics::NewProp_m_offset_MetaData), Z_Construct_UClass_UDCCamera_Statics::NewProp_m_offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDCCamera_Statics::NewProp_m_cameraSpeed_MetaData[] = {
		{ "Category", "DCCamera" },
		{ "ModuleRelativePath", "Public/DCCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDCCamera_Statics::NewProp_m_cameraSpeed = { "m_cameraSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDCCamera, m_cameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDCCamera_Statics::NewProp_m_cameraSpeed_MetaData), Z_Construct_UClass_UDCCamera_Statics::NewProp_m_cameraSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDCCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDCCamera_Statics::NewProp_m_toFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDCCamera_Statics::NewProp_m_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDCCamera_Statics::NewProp_m_cameraSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDCCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDCCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDCCamera_Statics::ClassParams = {
		&UDCCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDCCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDCCamera_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDCCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_UDCCamera_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDCCamera_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDCCamera()
	{
		if (!Z_Registration_Info_UClass_UDCCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDCCamera.OuterSingleton, Z_Construct_UClass_UDCCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDCCamera.OuterSingleton;
	}
	template<> DUNGEONCRAWLERUE_API UClass* StaticClass<UDCCamera>()
	{
		return UDCCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDCCamera);
	UDCCamera::~UDCCamera() {}
	struct Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDCCamera, UDCCamera::StaticClass, TEXT("UDCCamera"), &Z_Registration_Info_UClass_UDCCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDCCamera), 288949342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCamera_h_410285950(TEXT("/Script/DungeonCrawlerUE"),
		Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
