// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyIvy/Public/SMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMeshData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CRAZYIVY_API UScriptStruct* Z_Construct_UScriptStruct_FTriangle();
UPackage* Z_Construct_UPackage__Script_CrazyIvy();
// End Cross Module References

// Begin ScriptStruct FTriangle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Triangle;
class UScriptStruct* FTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Triangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Triangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriangle, (UObject*)Z_Construct_UPackage__Script_CrazyIvy(), TEXT("Triangle"));
	}
	return Z_Registration_Info_UScriptStruct_Triangle.OuterSingleton;
}
template<> CRAZYIVY_API UScriptStruct* StaticStruct<FTriangle>()
{
	return FTriangle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTriangle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/SMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Norm_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SMeshData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Norm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriangle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangle, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangle, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangle, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_Norm = { "Norm", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTriangle, Norm), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Norm_MetaData), NewProp_Norm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangle_Statics::NewProp_Norm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriangle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CrazyIvy,
	nullptr,
	&NewStructOps,
	"Triangle",
	Z_Construct_UScriptStruct_FTriangle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangle_Statics::PropPointers),
	sizeof(FTriangle),
	alignof(FTriangle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTriangle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTriangle()
{
	if (!Z_Registration_Info_UScriptStruct_Triangle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Triangle.InnerSingleton, Z_Construct_UScriptStruct_FTriangle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Triangle.InnerSingleton;
}
// End ScriptStruct FTriangle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_SMeshData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTriangle::StaticStruct, Z_Construct_UScriptStruct_FTriangle_Statics::NewStructOps, TEXT("Triangle"), &Z_Registration_Info_UScriptStruct_Triangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriangle), 1362996862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_SMeshData_h_3317654410(TEXT("/Script/CrazyIvy"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_SMeshData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_SMeshData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
