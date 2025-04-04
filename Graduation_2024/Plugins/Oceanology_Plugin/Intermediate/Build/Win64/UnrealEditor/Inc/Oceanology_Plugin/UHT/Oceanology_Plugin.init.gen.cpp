// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanology_Plugin_init() {}
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature();
	OCEANOLOGY_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Oceanology_Plugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin()
	{
		if (!Z_Registration_Info_UPackage__Script_Oceanology_Plugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanInfiniteLocationChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrownDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnDrowningTask__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnEnteredWater__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnExitedWater__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartDrowning__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStartSwimming__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopDrowning__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnStopSwimming__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterEnter__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterExit__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Oceanology_Plugin_OceanOnUnderwaterTask__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Oceanology_Plugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x980FD809,
				0xDAB6DA63,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Oceanology_Plugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Oceanology_Plugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Oceanology_Plugin(Z_Construct_UPackage__Script_Oceanology_Plugin, TEXT("/Script/Oceanology_Plugin"), Z_Registration_Info_UPackage__Script_Oceanology_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x980FD809, 0xDAB6DA63));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
