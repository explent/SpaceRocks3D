// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceRocks3D_EE_init() {}
	SPACEROCKS3D_EE_API UFunction* Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature();
	SPACEROCKS3D_EE_API UFunction* Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SpaceRocks3D_EE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SpaceRocks3D_EE()
	{
		if (!Z_Registration_Info_UPackage__Script_SpaceRocks3D_EE.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpaceRocks3D_EE",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xECECA440,
				0xB0B9BC76,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SpaceRocks3D_EE.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SpaceRocks3D_EE.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SpaceRocks3D_EE(Z_Construct_UPackage__Script_SpaceRocks3D_EE, TEXT("/Script/SpaceRocks3D_EE"), Z_Registration_Info_UPackage__Script_SpaceRocks3D_EE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xECECA440, 0xB0B9BC76));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
