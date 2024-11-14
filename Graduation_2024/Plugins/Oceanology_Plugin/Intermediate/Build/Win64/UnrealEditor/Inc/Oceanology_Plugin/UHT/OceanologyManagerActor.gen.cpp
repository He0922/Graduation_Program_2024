// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Actors/OceanologyManagerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyManagerActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyManager();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_AOceanologyManager_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyHeightmapComponent_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyVirtualTextureComponent();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyVirtualTextureComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyVirtualTextureComponent
void UOceanologyVirtualTextureComponent::StaticRegisterNativesUOceanologyVirtualTextureComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyVirtualTextureComponent);
UClass* Z_Construct_UClass_UOceanologyVirtualTextureComponent_NoRegister()
{
	return UOceanologyVirtualTextureComponent::StaticClass();
}
struct Z_Construct_UClass_UOceanologyVirtualTextureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AssetUserData Activation Tags Cooking Navigation Activation Collision Cooking HLOD Mobility LOD Navigation Object Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Actors/OceanologyManagerActor.h" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyManagerActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyVirtualTextureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyVirtualTextureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeVirtualTextureComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyVirtualTextureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyVirtualTextureComponent_Statics::ClassParams = {
	&UOceanologyVirtualTextureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyVirtualTextureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyVirtualTextureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyVirtualTextureComponent()
{
	if (!Z_Registration_Info_UClass_UOceanologyVirtualTextureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyVirtualTextureComponent.OuterSingleton, Z_Construct_UClass_UOceanologyVirtualTextureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyVirtualTextureComponent.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyVirtualTextureComponent>()
{
	return UOceanologyVirtualTextureComponent::StaticClass();
}
UOceanologyVirtualTextureComponent::UOceanologyVirtualTextureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyVirtualTextureComponent);
UOceanologyVirtualTextureComponent::~UOceanologyVirtualTextureComponent() {}
// End Class UOceanologyVirtualTextureComponent

// Begin Class AOceanologyManager
void AOceanologyManager::StaticRegisterNativesAOceanologyManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOceanologyManager);
UClass* Z_Construct_UClass_AOceanologyManager_NoRegister()
{
	return AOceanologyManager::StaticClass();
}
struct Z_Construct_UClass_AOceanologyManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Collision Cooking Input LOD Physics Replication Rendering Tags Activation" },
		{ "IncludePath", "Actors/OceanologyManagerActor.h" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyManagerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyManagerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapVirtualTextureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Heightmap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyManagerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Heightmap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyManagerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsAlignActor_MetaData[] = {
		{ "Category", "Bounds" },
		{ "Comment", "/** Actor to align rotation to. If set this actor is always included in the bounds calculation. */" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyManagerActor.h" },
		{ "ToolTip", "Actor to align rotation to. If set this actor is always included in the bounds calculation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetAllBoundsButton_MetaData[] = {
		{ "Category", "Bounds" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyManagerActor.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/OceanologyManagerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapVirtualTextureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapComponent;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsAlignActor;
	static void NewProp_bSetAllBoundsButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetAllBoundsButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanologyManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyManager_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x011400040008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyManager, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRoot_MetaData), NewProp_DefaultSceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyManager_Statics::NewProp_HeightmapVirtualTextureComponent = { "HeightmapVirtualTextureComponent", nullptr, (EPropertyFlags)0x01140000000a081d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyManager, HeightmapVirtualTextureComponent), Z_Construct_UClass_UOceanologyVirtualTextureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapVirtualTextureComponent_MetaData), NewProp_HeightmapVirtualTextureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyManager_Statics::NewProp_HeightmapComponent = { "HeightmapComponent", nullptr, (EPropertyFlags)0x01140000000a081d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyManager, HeightmapComponent), Z_Construct_UClass_UOceanologyHeightmapComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapComponent_MetaData), NewProp_HeightmapComponent_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AOceanologyManager_Statics::NewProp_BoundsAlignActor = { "BoundsAlignActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyManager, BoundsAlignActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsAlignActor_MetaData), NewProp_BoundsAlignActor_MetaData) };
void Z_Construct_UClass_AOceanologyManager_Statics::NewProp_bSetAllBoundsButton_SetBit(void* Obj)
{
	((AOceanologyManager*)Obj)->bSetAllBoundsButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanologyManager_Statics::NewProp_bSetAllBoundsButton = { "bSetAllBoundsButton", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOceanologyManager), &Z_Construct_UClass_AOceanologyManager_Statics::NewProp_bSetAllBoundsButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetAllBoundsButton_MetaData), NewProp_bSetAllBoundsButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanologyManager_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOceanologyManager, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanologyManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyManager_Statics::NewProp_DefaultSceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyManager_Statics::NewProp_HeightmapVirtualTextureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyManager_Statics::NewProp_HeightmapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyManager_Statics::NewProp_BoundsAlignActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyManager_Statics::NewProp_bSetAllBoundsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanologyManager_Statics::NewProp_Box,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOceanologyManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOceanologyManager_Statics::ClassParams = {
	&AOceanologyManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOceanologyManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOceanologyManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOceanologyManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOceanologyManager()
{
	if (!Z_Registration_Info_UClass_AOceanologyManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOceanologyManager.OuterSingleton, Z_Construct_UClass_AOceanologyManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOceanologyManager.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<AOceanologyManager>()
{
	return AOceanologyManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanologyManager);
AOceanologyManager::~AOceanologyManager() {}
// End Class AOceanologyManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyManagerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyVirtualTextureComponent, UOceanologyVirtualTextureComponent::StaticClass, TEXT("UOceanologyVirtualTextureComponent"), &Z_Registration_Info_UClass_UOceanologyVirtualTextureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyVirtualTextureComponent), 1803629866U) },
		{ Z_Construct_UClass_AOceanologyManager, AOceanologyManager::StaticClass, TEXT("AOceanologyManager"), &Z_Registration_Info_UClass_AOceanologyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOceanologyManager), 3705195854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyManagerActor_h_808770293(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyManagerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyManagerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
