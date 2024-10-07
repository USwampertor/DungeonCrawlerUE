// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DCController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef DUNGEONCRAWLERUE_DCController_generated_h
#error "DCController.generated.h already included, missing '#pragma once' in DCController.h"
#endif
#define DUNGEONCRAWLERUE_DCController_generated_h

#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_SPARSE_DATA
#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_ACCESSORS
#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADCController(); \
	friend struct Z_Construct_UClass_ADCController_Statics; \
public: \
	DECLARE_CLASS(ADCController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonCrawlerUE"), NO_API) \
	DECLARE_SERIALIZER(ADCController)


#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADCController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADCController(ADCController&&); \
	NO_API ADCController(const ADCController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADCController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADCController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADCController) \
	NO_API virtual ~ADCController();


#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_14_PROLOG
#define FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_SPARSE_DATA \
	FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_ACCESSORS \
	FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONCRAWLERUE_API UClass* StaticClass<class ADCController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_DungeonCrawlerUE_Source_DungeonCrawlerUE_Public_DCController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
