// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/UI/Conversation/ConversationUW.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationUW() {}

// Begin Cross Module References
GRADUATION_2024_API UClass* Z_Construct_UClass_UConversationUW();
GRADUATION_2024_API UClass* Z_Construct_UClass_UConversationUW_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UConversationUW
void UConversationUW::StaticRegisterNativesUConversationUW()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationUW);
UClass* Z_Construct_UClass_UConversationUW_NoRegister()
{
	return UConversationUW::StaticClass();
}
struct Z_Construct_UClass_UConversationUW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Conversation/ConversationUW.h" },
		{ "ModuleRelativePath", "Public/UI/Conversation/ConversationUW.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationUW>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UConversationUW_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConversationUW_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationUW_Statics::ClassParams = {
	&UConversationUW::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConversationUW_Statics::Class_MetaDataParams), Z_Construct_UClass_UConversationUW_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConversationUW()
{
	if (!Z_Registration_Info_UClass_UConversationUW.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationUW.OuterSingleton, Z_Construct_UClass_UConversationUW_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConversationUW.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UConversationUW>()
{
	return UConversationUW::StaticClass();
}
UConversationUW::UConversationUW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationUW);
UConversationUW::~UConversationUW() {}
// End Class UConversationUW

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Conversation_ConversationUW_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConversationUW, UConversationUW::StaticClass, TEXT("UConversationUW"), &Z_Registration_Info_UClass_UConversationUW, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationUW), 1521122605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Conversation_ConversationUW_h_793192598(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Conversation_ConversationUW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_UI_Conversation_ConversationUW_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
