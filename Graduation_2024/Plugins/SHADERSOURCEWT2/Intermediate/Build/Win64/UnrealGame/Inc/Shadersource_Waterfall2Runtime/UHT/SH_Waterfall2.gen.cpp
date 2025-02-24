// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/Actors/SH_Waterfall2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_Waterfall2() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_ASH_Waterfall2();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_ASH_Waterfall2_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallMeshComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallSettingsComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallSFXComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallVFXComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin Class ASH_Waterfall2
void ASH_Waterfall2::StaticRegisterNativesASH_Waterfall2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASH_Waterfall2);
UClass* Z_Construct_UClass_ASH_Waterfall2_NoRegister()
{
	return ASH_Waterfall2::StaticClass();
}
struct Z_Construct_UClass_ASH_Waterfall2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* The main Waterfall actor for SHADERSOURCE Waterfall Tool 2. */" },
		{ "DisplayName", "SHADERSOURCE Waterfall 2" },
		{ "IncludePath", "Actors/SH_Waterfall2.h" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
		{ "ToolTip", "The main Waterfall actor for SHADERSOURCE Waterfall Tool 2." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FxAttachPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFX_Top_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFX_Middle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFX_Bottom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFX_Top_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFX_Middle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFX_Bottom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedMeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_Singular_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_PerPath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_Cross_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_Splash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopSpline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillPlaneVisualiser_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterfallSettingsComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDynamicMeshesInGame_MetaData[] = {
		{ "Category", "WaterfallSettings" },
		{ "Comment", "//If this is true, the dynamic meshes will be visible in game, if false the static mesh will be visible in game\n" },
		{ "ModuleRelativePath", "Public/Actors/SH_Waterfall2.h" },
		{ "ToolTip", "If this is true, the dynamic meshes will be visible in game, if false the static mesh will be visible in game" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FxAttachPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VFX_Top;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VFX_Middle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VFX_Bottom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SFX_Top;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SFX_Middle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SFX_Bottom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakedMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp_Singular;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp_PerPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp_Cross;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp_Splash;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KillPlaneVisualiser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterfallSettingsComp;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bShowDynamicMeshesInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDynamicMeshesInGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASH_Waterfall2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_FxAttachPoint = { "FxAttachPoint", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, FxAttachPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FxAttachPoint_MetaData), NewProp_FxAttachPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_VFX_Top = { "VFX_Top", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, VFX_Top), Z_Construct_UClass_USH_WaterfallVFXComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFX_Top_MetaData), NewProp_VFX_Top_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_VFX_Middle = { "VFX_Middle", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, VFX_Middle), Z_Construct_UClass_USH_WaterfallVFXComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFX_Middle_MetaData), NewProp_VFX_Middle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_VFX_Bottom = { "VFX_Bottom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, VFX_Bottom), Z_Construct_UClass_USH_WaterfallVFXComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFX_Bottom_MetaData), NewProp_VFX_Bottom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_SFX_Top = { "SFX_Top", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, SFX_Top), Z_Construct_UClass_USH_WaterfallSFXComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFX_Top_MetaData), NewProp_SFX_Top_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_SFX_Middle = { "SFX_Middle", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, SFX_Middle), Z_Construct_UClass_USH_WaterfallSFXComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFX_Middle_MetaData), NewProp_SFX_Middle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_SFX_Bottom = { "SFX_Bottom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, SFX_Bottom), Z_Construct_UClass_USH_WaterfallSFXComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFX_Bottom_MetaData), NewProp_SFX_Bottom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_BakedMeshComp = { "BakedMeshComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, BakedMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedMeshComp_MetaData), NewProp_BakedMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_MeshComp_Singular = { "MeshComp_Singular", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, MeshComp_Singular), Z_Construct_UClass_USH_WaterfallMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_Singular_MetaData), NewProp_MeshComp_Singular_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_MeshComp_PerPath = { "MeshComp_PerPath", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, MeshComp_PerPath), Z_Construct_UClass_USH_WaterfallMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_PerPath_MetaData), NewProp_MeshComp_PerPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_MeshComp_Cross = { "MeshComp_Cross", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, MeshComp_Cross), Z_Construct_UClass_USH_WaterfallMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_Cross_MetaData), NewProp_MeshComp_Cross_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_MeshComp_Splash = { "MeshComp_Splash", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, MeshComp_Splash), Z_Construct_UClass_USH_WaterfallMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_Splash_MetaData), NewProp_MeshComp_Splash_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_TopSpline = { "TopSpline", nullptr, (EPropertyFlags)0x00400008000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, TopSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopSpline_MetaData), NewProp_TopSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_KillPlaneVisualiser = { "KillPlaneVisualiser", nullptr, (EPropertyFlags)0x00400008000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, KillPlaneVisualiser), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillPlaneVisualiser_MetaData), NewProp_KillPlaneVisualiser_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_WaterfallSettingsComp = { "WaterfallSettingsComp", nullptr, (EPropertyFlags)0x00400008000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASH_Waterfall2, WaterfallSettingsComp), Z_Construct_UClass_USH_WaterfallSettingsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterfallSettingsComp_MetaData), NewProp_WaterfallSettingsComp_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_bShowDynamicMeshesInGame_SetBit(void* Obj)
{
	((ASH_Waterfall2*)Obj)->bShowDynamicMeshesInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_bShowDynamicMeshesInGame = { "bShowDynamicMeshesInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASH_Waterfall2), &Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_bShowDynamicMeshesInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDynamicMeshesInGame_MetaData), NewProp_bShowDynamicMeshesInGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASH_Waterfall2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_FxAttachPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_VFX_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_VFX_Middle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_VFX_Bottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_SFX_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_SFX_Middle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_SFX_Bottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_BakedMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_MeshComp_Singular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_MeshComp_PerPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_MeshComp_Cross,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_MeshComp_Splash,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_TopSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_KillPlaneVisualiser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_WaterfallSettingsComp,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_Waterfall2_Statics::NewProp_bShowDynamicMeshesInGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASH_Waterfall2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASH_Waterfall2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASH_Waterfall2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASH_Waterfall2_Statics::ClassParams = {
	&ASH_Waterfall2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASH_Waterfall2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASH_Waterfall2_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASH_Waterfall2_Statics::Class_MetaDataParams), Z_Construct_UClass_ASH_Waterfall2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASH_Waterfall2()
{
	if (!Z_Registration_Info_UClass_ASH_Waterfall2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASH_Waterfall2.OuterSingleton, Z_Construct_UClass_ASH_Waterfall2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASH_Waterfall2.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<ASH_Waterfall2>()
{
	return ASH_Waterfall2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASH_Waterfall2);
ASH_Waterfall2::~ASH_Waterfall2() {}
// End Class ASH_Waterfall2

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_Actors_SH_Waterfall2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASH_Waterfall2, ASH_Waterfall2::StaticClass, TEXT("ASH_Waterfall2"), &Z_Registration_Info_UClass_ASH_Waterfall2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASH_Waterfall2), 1979911765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_Actors_SH_Waterfall2_h_1115142560(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_Actors_SH_Waterfall2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Shadersource_WaterfallTool2_Source_Shadersource_Waterfall2Runtime_Public_Actors_SH_Waterfall2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
