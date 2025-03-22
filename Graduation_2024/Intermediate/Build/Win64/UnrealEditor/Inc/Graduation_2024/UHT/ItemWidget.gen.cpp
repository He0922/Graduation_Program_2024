// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Inventory/Widget/ItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemWidget() {}

// Begin Cross Module References
GRADUATION_2024_API UClass* Z_Construct_UClass_UItemWidget();
GRADUATION_2024_API UClass* Z_Construct_UClass_UItemWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UItemWidget
void UItemWidget::StaticRegisterNativesUItemWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemWidget);
UClass* Z_Construct_UClass_UItemWidget_NoRegister()
{
	return UItemWidget::StaticClass();
}
struct Z_Construct_UClass_UItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/Widget/ItemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/Widget/ItemWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemWidget_Statics::ClassParams = {
	&UItemWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemWidget()
{
	if (!Z_Registration_Info_UClass_UItemWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemWidget.OuterSingleton, Z_Construct_UClass_UItemWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemWidget.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UItemWidget>()
{
	return UItemWidget::StaticClass();
}
UItemWidget::UItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemWidget);
UItemWidget::~UItemWidget() {}
// End Class UItemWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Inventory_Widget_ItemWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemWidget, UItemWidget::StaticClass, TEXT("UItemWidget"), &Z_Registration_Info_UClass_UItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemWidget), 4059633139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Inventory_Widget_ItemWidget_h_388084455(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Inventory_Widget_ItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_Inventory_Widget_ItemWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
