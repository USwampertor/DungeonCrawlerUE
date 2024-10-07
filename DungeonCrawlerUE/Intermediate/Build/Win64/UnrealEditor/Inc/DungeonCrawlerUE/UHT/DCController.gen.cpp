// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawlerUE/Public/DCController.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDCController() {}
// Cross Module References
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCController();
	DUNGEONCRAWLERUE_API UClass* Z_Construct_UClass_ADCController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawlerUE();
// End Cross Module References
	DEFINE_FUNCTION(ADCController::execLook)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Look(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADCController::execMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_value);
		P_NATIVE_END;
	}
	void ADCController::StaticRegisterNativesADCController()
	{
		UClass* Class = ADCController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Look", &ADCController::execLook },
			{ "Move", &ADCController::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADCController_Look_Statics
	{
		struct DCController_eventLook_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADCController_Look_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADCController_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DCController_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADCController_Look_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ADCController_Look_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADCController_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADCController_Look_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADCController_Look_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DCController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADCController_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADCController, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ADCController_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADCController_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADCController_Look_Statics::DCController_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADCController_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADCController_Look_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADCController_Look_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADCController_Look_Statics::DCController_eventLook_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADCController_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADCController_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADCController_Move_Statics
	{
		struct DCController_eventMove_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADCController_Move_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADCController_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DCController_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADCController_Move_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ADCController_Move_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADCController_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADCController_Move_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADCController_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DCController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADCController_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADCController, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ADCController_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADCController_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADCController_Move_Statics::DCController_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADCController_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADCController_Move_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADCController_Move_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADCController_Move_Statics::DCController_eventMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADCController_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADCController_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADCController);
	UClass* Z_Construct_UClass_ADCController_NoRegister()
	{
		return ADCController::StaticClass();
	}
	struct Z_Construct_UClass_ADCController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_mappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_mappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_moveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_moveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_lookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_lookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADCController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawlerUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADCController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADCController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADCController_Look, "Look" }, // 2117698217
		{ &Z_Construct_UFunction_ADCController_Move, "Move" }, // 1078950116
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADCController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DCController.h" },
		{ "ModuleRelativePath", "Public/DCController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCController_Statics::NewProp_m_mappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/DCController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADCController_Statics::NewProp_m_mappingContext = { "m_mappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADCController, m_mappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCController_Statics::NewProp_m_mappingContext_MetaData), Z_Construct_UClass_ADCController_Statics::NewProp_m_mappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCController_Statics::NewProp_m_moveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/DCController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADCController_Statics::NewProp_m_moveAction = { "m_moveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADCController, m_moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCController_Statics::NewProp_m_moveAction_MetaData), Z_Construct_UClass_ADCController_Statics::NewProp_m_moveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCController_Statics::NewProp_m_lookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/DCController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADCController_Statics::NewProp_m_lookAction = { "m_lookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADCController, m_lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCController_Statics::NewProp_m_lookAction_MetaData), Z_Construct_UClass_ADCController_Statics::NewProp_m_lookAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADCController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADCController_Statics::NewProp_m_mappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADCController_Statics::NewProp_m_moveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADCController_Statics::NewProp_m_lookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADCController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADCController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADCController_Statics::ClassParams = {
		&ADCController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADCController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADCController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADCController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADCController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADCController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADCController()
	{
		if (!Z_Registration_Info_UClass_ADCController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADCController.OuterSingleton, Z_Construct_UClass_ADCController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADCController.OuterSingleton;
	}
	template<> DUNGEONCRAWLERUE_API UClass* StaticClass<ADCController>()
	{
		return ADCController::StaticClass();
	}
	ADCController::ADCController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADCController);
	ADCController::~ADCController() {}
	struct Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADCController, ADCController::StaticClass, TEXT("ADCController"), &Z_Registration_Info_UClass_ADCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADCController), 2369154103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_3955669181(TEXT("/Script/DungeonCrawlerUE"),
		Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
