// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/EditorComponents/SH_WaterfallMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_WaterfallMeshComponent() {}

// Begin Cross Module References
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallMeshComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallMeshComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin Class USH_WaterfallMeshComponent
void USH_WaterfallMeshComponent::StaticRegisterNativesUSH_WaterfallMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_WaterfallMeshComponent);
UClass* Z_Construct_UClass_USH_WaterfallMeshComponent_NoRegister()
{
	return USH_WaterfallMeshComponent::StaticClass();
}
struct Z_Construct_UClass_USH_WaterfallMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* A Dynamic Mesh Component used for generating the meshes in the Editor Mode.\n* Currently this is not avaialble at runtime. */" },
#endif
		{ "HideCategories", "LOD LOD Mobility Trigger" },
		{ "IncludePath", "EditorComponents/SH_WaterfallMeshComponent.h" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Dynamic Mesh Component used for generating the meshes in the Editor Mode.\n* Currently this is not avaialble at runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_WaterfallMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallMeshComponent, MeshType), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // 406542764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::NewProp_MeshType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::ClassParams = {
	&USH_WaterfallMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_WaterfallMeshComponent()
{
	if (!Z_Registration_Info_UClass_USH_WaterfallMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_WaterfallMeshComponent.OuterSingleton, Z_Construct_UClass_USH_WaterfallMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_WaterfallMeshComponent.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<USH_WaterfallMeshComponent>()
{
	return USH_WaterfallMeshComponent::StaticClass();
}
USH_WaterfallMeshComponent::USH_WaterfallMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_WaterfallMeshComponent);
USH_WaterfallMeshComponent::~USH_WaterfallMeshComponent() {}
// End Class USH_WaterfallMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_WaterfallMeshComponent, USH_WaterfallMeshComponent::StaticClass, TEXT("USH_WaterfallMeshComponent"), &Z_Registration_Info_UClass_USH_WaterfallMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_WaterfallMeshComponent), 3638985394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallMeshComponent_h_502326138(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
