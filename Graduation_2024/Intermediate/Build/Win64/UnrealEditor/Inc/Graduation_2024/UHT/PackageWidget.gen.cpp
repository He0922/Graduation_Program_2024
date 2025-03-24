// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Inventory/Widget/PackageWidget.h"
#include "Graduation_2024/Public/Inventory/Item/ItemActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageWidget() {}

// Begin Cross Module References
GRADUATION_2024_API UClass* Z_Construct_UClass_UPackageWidget();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPackageWidget_NoRegister();
GRADUATION_2024_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UPackageWidget Function OnClosePackage
static FName NAME_UPackageWidget_OnClosePackage = FName(TEXT("OnClosePackage"));
void UPackageWidget::OnClosePackage()
{
	ProcessEvent(FindFunctionChecked(NAME_UPackageWidget_OnClosePackage),NULL);
}
struct Z_Construct_UFunction_UPackageWidget_OnClosePackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Inventory/Widget/PackageWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageWidget_OnClosePackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageWidget, nullptr, "OnClosePackage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageWidget_OnClosePackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPackageWidget_OnClosePackage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPackageWidget_OnClosePackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPackageWidget_OnClosePackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPackageWidget Function OnClosePackage

// Begin Class UPackageWidget Function OnOpenPackage
static FName NAME_UPackageWidget_OnOpenPackage = FName(TEXT("OnOpenPackage"));
void UPackageWidget::OnOpenPackage()
{
	ProcessEvent(FindFunctionChecked(NAME_UPackageWidget_OnOpenPackage),NULL);
}
struct Z_Construct_UFunction_UPackageWidget_OnOpenPackage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//// \xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/Widget/PackageWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ \xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageWidget_OnOpenPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageWidget, nullptr, "OnOpenPackage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageWidget_OnOpenPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPackageWidget_OnOpenPackage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPackageWidget_OnOpenPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPackageWidget_OnOpenPackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPackageWidget Function OnOpenPackage

// Begin Class UPackageWidget
void UPackageWidget::StaticRegisterNativesUPackageWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPackageWidget);
UClass* Z_Construct_UClass_UPackageWidget_NoRegister()
{
	return UPackageWidget::StaticClass();
}
struct Z_Construct_UClass_UPackageWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOpenPackage);\n" },
#endif
		{ "IncludePath", "Inventory/Widget/PackageWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/Widget/PackageWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOpenPackage);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDatas_MetaData[] = {
		{ "Category", "PackageWidget" },
		{ "ModuleRelativePath", "Public/Inventory/Widget/PackageWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDatas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDatas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPackageWidget_OnClosePackage, "OnClosePackage" }, // 1739662781
		{ &Z_Construct_UFunction_UPackageWidget_OnOpenPackage, "OnOpenPackage" }, // 1010021413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackageWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPackageWidget_Statics::NewProp_ItemDatas_Inner = { "ItemDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 653370232
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPackageWidget_Statics::NewProp_ItemDatas = { "ItemDatas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPackageWidget, ItemDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDatas_MetaData), NewProp_ItemDatas_MetaData) }; // 653370232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPackageWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPackageWidget_Statics::NewProp_ItemDatas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPackageWidget_Statics::NewProp_ItemDatas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPackageWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPackageWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPackageWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPackageWidget_Statics::ClassParams = {
	&UPackageWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPackageWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPackageWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPackageWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPackageWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPackageWidget()
{
	if (!Z_Registration_Info_UClass_UPackageWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPackageWidget.OuterSingleton, Z_Construct_UClass_UPackageWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPackageWidget.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPackageWidget>()
{
	return UPackageWidget::StaticClass();
}
UPackageWidget::UPackageWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageWidget);
UPackageWidget::~UPackageWidget() {}
// End Class UPackageWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Inventory_Widget_PackageWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPackageWidget, UPackageWidget::StaticClass, TEXT("UPackageWidget"), &Z_Registration_Info_UClass_UPackageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPackageWidget), 2795967542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Inventory_Widget_PackageWidget_h_729326320(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Inventory_Widget_PackageWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Inventory_Widget_PackageWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
