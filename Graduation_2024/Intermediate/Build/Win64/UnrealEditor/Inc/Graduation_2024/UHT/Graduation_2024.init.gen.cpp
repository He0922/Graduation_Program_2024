// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraduation_2024_init() {}
	GRADUATION_2024_API UFunction* Z_Construct_UDelegateFunction_Graduation_2024_EndScan__DelegateSignature();
	GRADUATION_2024_API UFunction* Z_Construct_UDelegateFunction_Graduation_2024_PickUp__DelegateSignature();
	GRADUATION_2024_API UFunction* Z_Construct_UDelegateFunction_Graduation_2024_StartScan__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Graduation_2024;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Graduation_2024()
	{
		if (!Z_Registration_Info_UPackage__Script_Graduation_2024.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Graduation_2024_EndScan__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Graduation_2024_PickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Graduation_2024_StartScan__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Graduation_2024",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEFA4ADB1,
				0x70449A71,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Graduation_2024.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Graduation_2024.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Graduation_2024(Z_Construct_UPackage__Script_Graduation_2024, TEXT("/Script/Graduation_2024"), Z_Registration_Info_UPackage__Script_Graduation_2024, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEFA4ADB1, 0x70449A71));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
