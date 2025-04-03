// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/Components/SH_WaterfallSFXComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_WaterfallSFXComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallFxComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallSFXComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallSFXComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin Class USH_WaterfallSFXComponent Function GetPathIndex
struct Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics
{
	struct SH_WaterfallSFXComponent_eventGetPathIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallSFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSFXComponent_eventGetPathIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSFXComponent, nullptr, "GetPathIndex", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::SH_WaterfallSFXComponent_eventGetPathIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::SH_WaterfallSFXComponent_eventGetPathIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSFXComponent::execGetPathIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPathIndex();
	P_NATIVE_END;
}
// End Class USH_WaterfallSFXComponent Function GetPathIndex

// Begin Class USH_WaterfallSFXComponent Function GetPointIndex
struct Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics
{
	struct SH_WaterfallSFXComponent_eventGetPointIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallSFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSFXComponent_eventGetPointIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSFXComponent, nullptr, "GetPointIndex", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::SH_WaterfallSFXComponent_eventGetPointIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::SH_WaterfallSFXComponent_eventGetPointIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSFXComponent::execGetPointIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPointIndex();
	P_NATIVE_END;
}
// End Class USH_WaterfallSFXComponent Function GetPointIndex

// Begin Class USH_WaterfallSFXComponent
void USH_WaterfallSFXComponent::StaticRegisterNativesUSH_WaterfallSFXComponent()
{
	UClass* Class = USH_WaterfallSFXComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPathIndex", &USH_WaterfallSFXComponent::execGetPathIndex },
		{ "GetPointIndex", &USH_WaterfallSFXComponent::execGetPointIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_WaterfallSFXComponent);
UClass* Z_Construct_UClass_USH_WaterfallSFXComponent_NoRegister()
{
	return USH_WaterfallSFXComponent::StaticClass();
}
struct Z_Construct_UClass_USH_WaterfallSFXComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "SHADERSOURCE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "SH Waterfall SFX Component" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/SH_WaterfallSFXComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallSFXComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPathIndex, "GetPathIndex" }, // 3030814226
		{ &Z_Construct_UFunction_USH_WaterfallSFXComponent_GetPointIndex, "GetPointIndex" }, // 3065316554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_WaterfallSFXComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USH_WaterfallSFXComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallSFXComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USH_WaterfallSFXComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USH_WaterfallFxComponent_NoRegister, (int32)VTABLE_OFFSET(USH_WaterfallSFXComponent, ISH_WaterfallFxComponent), false },  // 1337201197
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_WaterfallSFXComponent_Statics::ClassParams = {
	&USH_WaterfallSFXComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallSFXComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_WaterfallSFXComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_WaterfallSFXComponent()
{
	if (!Z_Registration_Info_UClass_USH_WaterfallSFXComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_WaterfallSFXComponent.OuterSingleton, Z_Construct_UClass_USH_WaterfallSFXComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_WaterfallSFXComponent.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<USH_WaterfallSFXComponent>()
{
	return USH_WaterfallSFXComponent::StaticClass();
}
USH_WaterfallSFXComponent::USH_WaterfallSFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_WaterfallSFXComponent);
USH_WaterfallSFXComponent::~USH_WaterfallSFXComponent() {}
// End Class USH_WaterfallSFXComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallSFXComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_WaterfallSFXComponent, USH_WaterfallSFXComponent::StaticClass, TEXT("USH_WaterfallSFXComponent"), &Z_Registration_Info_UClass_USH_WaterfallSFXComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_WaterfallSFXComponent), 3874744870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallSFXComponent_h_1718273367(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallSFXComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallSFXComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
