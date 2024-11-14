// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Components/QuadTree/OceanologyWaterMeshComponent.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyWaterQuadTreeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyWaterMeshComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterMeshComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaterMeshComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyWaterMeshComponent Function IsEnabled
struct Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics
{
	struct OceanologyWaterMeshComponent_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QuadTree" },
		{ "ModuleRelativePath", "Public/Components/QuadTree/OceanologyWaterMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OceanologyWaterMeshComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OceanologyWaterMeshComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyWaterMeshComponent, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::OceanologyWaterMeshComponent_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::OceanologyWaterMeshComponent_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyWaterMeshComponent::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled();
	P_NATIVE_END;
}
// End Class UOceanologyWaterMeshComponent Function IsEnabled

// Begin Class UOceanologyWaterMeshComponent
void UOceanologyWaterMeshComponent::StaticRegisterNativesUOceanologyWaterMeshComponent()
{
	UClass* Class = UOceanologyWaterMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsEnabled", &UOceanologyWaterMeshComponent::execIsEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyWaterMeshComponent);
UClass* Z_Construct_UClass_UOceanologyWaterMeshComponent_NoRegister()
{
	return UOceanologyWaterMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering Water" },
		{ "Comment", "/**\n * Water Mesh Component responsible for generating and rendering a continuous water mesh on top of all the existing water body actors in the world\n * The component contains a quadtree which defines where there are water tiles. A function for traversing the quadtree and outputing a list of instance data for each tile to be rendered from a point of view is included\n */" },
		{ "HideCategories", "Object Activation Components|Activation Collision Lighting HLOD Navigation Replication Input MaterialParameters TextureStreaming Tags AssetUserData Cooking Mobility Trigger" },
		{ "IncludePath", "Components/QuadTree/OceanologyWaterMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Components/QuadTree/OceanologyWaterMeshComponent.h" },
		{ "ToolTip", "Water Mesh Component responsible for generating and rendering a continuous water mesh on top of all the existing water body actors in the world\nThe component contains a quadtree which defines where there are water tiles. A function for traversing the quadtree and outputing a list of instance data for each tile to be rendered from a point of view is included" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuadTreeSettings_MetaData[] = {
		{ "Category", "QuadTree" },
		{ "ModuleRelativePath", "Public/Components/QuadTree/OceanologyWaterMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/QuadTree/OceanologyWaterMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterFarDistanceMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/QuadTree/OceanologyWaterMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsedMaterials_MetaData[] = {
		{ "Comment", "/** Unique list of materials used by this component */" },
		{ "ModuleRelativePath", "Public/Components/QuadTree/OceanologyWaterMeshComponent.h" },
		{ "ToolTip", "Unique list of materials used by this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuadTreeSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterFarDistanceMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UsedMaterials_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_UsedMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyWaterMeshComponent_IsEnabled, "IsEnabled" }, // 1234003997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyWaterMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_QuadTreeSettings = { "QuadTreeSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterMeshComponent, QuadTreeSettings), Z_Construct_UScriptStruct_FOceanologyWaterQuadTreeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuadTreeSettings_MetaData), NewProp_QuadTreeSettings_MetaData) }; // 3621248554
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_WaterMaterialInstance = { "WaterMaterialInstance", nullptr, (EPropertyFlags)0x0114c00000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterMeshComponent, WaterMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterMaterialInstance_MetaData), NewProp_WaterMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_WaterFarDistanceMaterialInstance = { "WaterFarDistanceMaterialInstance", nullptr, (EPropertyFlags)0x0114c00000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterMeshComponent, WaterFarDistanceMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterFarDistanceMaterialInstance_MetaData), NewProp_WaterFarDistanceMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_UsedMaterials_ElementProp = { "UsedMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_UsedMaterials = { "UsedMaterials", nullptr, (EPropertyFlags)0x0144c00000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyWaterMeshComponent, UsedMaterials), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsedMaterials_MetaData), NewProp_UsedMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_QuadTreeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_WaterMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_WaterFarDistanceMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_UsedMaterials_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::NewProp_UsedMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::ClassParams = {
	&UOceanologyWaterMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyWaterMeshComponent()
{
	if (!Z_Registration_Info_UClass_UOceanologyWaterMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyWaterMeshComponent.OuterSingleton, Z_Construct_UClass_UOceanologyWaterMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyWaterMeshComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyWaterMeshComponent>()
{
	return UOceanologyWaterMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyWaterMeshComponent);
UOceanologyWaterMeshComponent::~UOceanologyWaterMeshComponent() {}
// End Class UOceanologyWaterMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_QuadTree_OceanologyWaterMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyWaterMeshComponent, UOceanologyWaterMeshComponent::StaticClass, TEXT("UOceanologyWaterMeshComponent"), &Z_Registration_Info_UClass_UOceanologyWaterMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyWaterMeshComponent), 2288061848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_QuadTree_OceanologyWaterMeshComponent_h_247595612(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_QuadTree_OceanologyWaterMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_QuadTree_OceanologyWaterMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
