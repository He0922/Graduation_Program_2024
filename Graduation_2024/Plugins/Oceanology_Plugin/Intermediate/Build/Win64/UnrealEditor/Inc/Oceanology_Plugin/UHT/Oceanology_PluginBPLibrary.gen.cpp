// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Oceanology_PluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanology_PluginBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanology_PluginBPLibrary();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanology_PluginBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanology_PluginBPLibrary Function Oceanology_PluginSampleFunction
struct Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics
{
	struct Oceanology_PluginBPLibrary_eventOceanology_PluginSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Oceanology_PluginTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "Oceanology_Plugin sample test testing" },
		{ "ModuleRelativePath", "Public/Oceanology_PluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Oceanology_PluginBPLibrary_eventOceanology_PluginSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Oceanology_PluginBPLibrary_eventOceanology_PluginSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanology_PluginBPLibrary, nullptr, "Oceanology_PluginSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::Oceanology_PluginBPLibrary_eventOceanology_PluginSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::Oceanology_PluginBPLibrary_eventOceanology_PluginSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanology_PluginBPLibrary::execOceanology_PluginSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOceanology_PluginBPLibrary::Oceanology_PluginSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class UOceanology_PluginBPLibrary Function Oceanology_PluginSampleFunction

// Begin Class UOceanology_PluginBPLibrary
void UOceanology_PluginBPLibrary::StaticRegisterNativesUOceanology_PluginBPLibrary()
{
	UClass* Class = UOceanology_PluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Oceanology_PluginSampleFunction", &UOceanology_PluginBPLibrary::execOceanology_PluginSampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanology_PluginBPLibrary);
UClass* Z_Construct_UClass_UOceanology_PluginBPLibrary_NoRegister()
{
	return UOceanology_PluginBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UOceanology_PluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "Oceanology_PluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Oceanology_PluginBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanology_PluginBPLibrary_Oceanology_PluginSampleFunction, "Oceanology_PluginSampleFunction" }, // 9596389
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanology_PluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanology_PluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanology_PluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanology_PluginBPLibrary_Statics::ClassParams = {
	&UOceanology_PluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanology_PluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanology_PluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanology_PluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UOceanology_PluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanology_PluginBPLibrary.OuterSingleton, Z_Construct_UClass_UOceanology_PluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanology_PluginBPLibrary.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanology_PluginBPLibrary>()
{
	return UOceanology_PluginBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanology_PluginBPLibrary);
UOceanology_PluginBPLibrary::~UOceanology_PluginBPLibrary() {}
// End Class UOceanology_PluginBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Oceanology_PluginBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanology_PluginBPLibrary, UOceanology_PluginBPLibrary::StaticClass, TEXT("UOceanology_PluginBPLibrary"), &Z_Registration_Info_UClass_UOceanology_PluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanology_PluginBPLibrary), 1693215788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Oceanology_PluginBPLibrary_h_2742568637(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Oceanology_PluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Oceanology_PluginBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
