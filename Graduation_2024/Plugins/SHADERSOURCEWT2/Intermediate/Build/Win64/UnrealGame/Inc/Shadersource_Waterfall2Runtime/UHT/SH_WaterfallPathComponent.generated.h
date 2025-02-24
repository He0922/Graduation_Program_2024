// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorComponents/SH_WaterfallPathComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHADERSOURCE_WATERFALL2RUNTIME_SH_WaterfallPathComponent_generated_h
#error "SH_WaterfallPathComponent.generated.h already included, missing '#pragma once' in SH_WaterfallPathComponent.h"
#endif
#define SHADERSOURCE_WATERFALL2RUNTIME_SH_WaterfallPathComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics; \
	SHADERSOURCE_WATERFALL2RUNTIME_API static class UScriptStruct* StaticStruct();


template<> SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* StaticStruct<struct FSH_SimulatedPoint>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSH_WaterfallSample_Statics; \
	SHADERSOURCE_WATERFALL2RUNTIME_API static class UScriptStruct* StaticStruct();


template<> SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* StaticStruct<struct FSH_WaterfallSample>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSH_WaterfallPathComponent(); \
	friend struct Z_Construct_UClass_USH_WaterfallPathComponent_Statics; \
public: \
	DECLARE_CLASS(USH_WaterfallPathComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shadersource_Waterfall2Runtime"), NO_API) \
	DECLARE_SERIALIZER(USH_WaterfallPathComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_149_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USH_WaterfallPathComponent(USH_WaterfallPathComponent&&); \
	USH_WaterfallPathComponent(const USH_WaterfallPathComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USH_WaterfallPathComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USH_WaterfallPathComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USH_WaterfallPathComponent) \
	NO_API virtual ~USH_WaterfallPathComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_146_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_149_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<class USH_WaterfallPathComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h


#define FOREACH_ENUM_ESH_SIMULATEDPOINTSTATE(op) \
	op(ESH_SimulatedPointState::Start) \
	op(ESH_SimulatedPointState::Airborn) \
	op(ESH_SimulatedPointState::Hit) \
	op(ESH_SimulatedPointState::Slide) \
	op(ESH_SimulatedPointState::Stalled) \
	op(ESH_SimulatedPointState::Killed) \
	op(ESH_SimulatedPointState::Blocked) \
	op(ESH_SimulatedPointState::Died) 

enum class ESH_SimulatedPointState : uint8;
template<> struct TIsUEnumClass<ESH_SimulatedPointState> { enum { Value = true }; };
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* StaticEnum<ESH_SimulatedPointState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
