// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SH_WaterfallVFXComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHADERSOURCE_WATERFALL2RUNTIME_SH_WaterfallVFXComponent_generated_h
#error "SH_WaterfallVFXComponent.generated.h already included, missing '#pragma once' in SH_WaterfallVFXComponent.h"
#endif
#define SHADERSOURCE_WATERFALL2RUNTIME_SH_WaterfallVFXComponent_generated_h

#define FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSH_VfxPointData_Statics; \
	SHADERSOURCE_WATERFALL2RUNTIME_API static class UScriptStruct* StaticStruct();


template<> SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* StaticStruct<struct FSH_VfxPointData>();

#define FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateComponentParams); \
	DECLARE_FUNCTION(execSetVFXBounds); \
	DECLARE_FUNCTION(execGetPointIndex); \
	DECLARE_FUNCTION(execGetPathIndex);


#if WITH_EDITOR
#define FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execDrawPoints);
#else // WITH_EDITOR
#define FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSH_WaterfallVFXComponent(); \
	friend struct Z_Construct_UClass_USH_WaterfallVFXComponent_Statics; \
public: \
	DECLARE_CLASS(USH_WaterfallVFXComponent, UNiagaraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shadersource_Waterfall2Runtime"), NO_API) \
	DECLARE_SERIALIZER(USH_WaterfallVFXComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USH_WaterfallVFXComponent*>(this); }


#define FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USH_WaterfallVFXComponent(USH_WaterfallVFXComponent&&); \
	USH_WaterfallVFXComponent(const USH_WaterfallVFXComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USH_WaterfallVFXComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USH_WaterfallVFXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USH_WaterfallVFXComponent) \
	NO_API virtual ~USH_WaterfallVFXComponent();


#define FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_36_PROLOG
#define FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<class USH_WaterfallVFXComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
