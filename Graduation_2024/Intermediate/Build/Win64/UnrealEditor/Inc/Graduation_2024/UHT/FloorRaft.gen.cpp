// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Pawn/FloorRaft.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorRaft() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_AFloorRaft();
GRADUATION_2024_API UClass* Z_Construct_UClass_AFloorRaft_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UCustomFloatingPawnMovement_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class AFloorRaft
void AFloorRaft::StaticRegisterNativesAFloorRaft()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorRaft);
UClass* Z_Construct_UClass_AFloorRaft_NoRegister()
{
	return AFloorRaft::StaticClass();
}
struct Z_Construct_UClass_AFloorRaft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawn/FloorRaft.h" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floorRafteMesh_MetaData[] = {
		{ "Category", "FloorRaft Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floorRaftCollision_MetaData[] = {
		{ "Category", "FloorRaft Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_floorRafteMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_floorRaftCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorRaft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_PawnMovementComponent = { "PawnMovementComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, PawnMovementComponent), Z_Construct_UClass_UCustomFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnMovementComponent_MetaData), NewProp_PawnMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_cameraBoom = { "cameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cameraBoom_MetaData), NewProp_cameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_MetaData), NewProp_camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_floorRafteMesh = { "floorRafteMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, floorRafteMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floorRafteMesh_MetaData), NewProp_floorRafteMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_floorRaftCollision = { "floorRaftCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, floorRaftCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floorRaftCollision_MetaData), NewProp_floorRaftCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorRaft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_PawnMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_cameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_floorRafteMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_floorRaftCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorRaft_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloorRaft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorRaft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorRaft_Statics::ClassParams = {
	&AFloorRaft::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFloorRaft_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloorRaft_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorRaft_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorRaft_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloorRaft()
{
	if (!Z_Registration_Info_UClass_AFloorRaft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorRaft.OuterSingleton, Z_Construct_UClass_AFloorRaft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloorRaft.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<AFloorRaft>()
{
	return AFloorRaft::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorRaft);
AFloorRaft::~AFloorRaft() {}
// End Class AFloorRaft

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloorRaft, AFloorRaft::StaticClass, TEXT("AFloorRaft"), &Z_Registration_Info_UClass_AFloorRaft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorRaft), 3960330969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_1243457979(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
