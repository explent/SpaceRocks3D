// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUD/EEPlayerOverlay.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEEPlayerOverlay() {}

// ********** Begin Cross Module References ********************************************************
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_UEEPlayerOverlay();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_UEEPlayerOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SpaceRocks3D_EE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEEPlayerOverlay *********************************************************
void UEEPlayerOverlay::StaticRegisterNativesUEEPlayerOverlay()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEEPlayerOverlay;
UClass* UEEPlayerOverlay::GetPrivateStaticClass()
{
	using TClass = UEEPlayerOverlay;
	if (!Z_Registration_Info_UClass_UEEPlayerOverlay.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EEPlayerOverlay"),
			Z_Registration_Info_UClass_UEEPlayerOverlay.InnerSingleton,
			StaticRegisterNativesUEEPlayerOverlay,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEEPlayerOverlay.InnerSingleton;
}
UClass* Z_Construct_UClass_UEEPlayerOverlay_NoRegister()
{
	return UEEPlayerOverlay::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEEPlayerOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/EEPlayerOverlay.h" },
		{ "ModuleRelativePath", "HUD/EEPlayerOverlay.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEEPlayerOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEEPlayerOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEEPlayerOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEEPlayerOverlay_Statics::ClassParams = {
	&UEEPlayerOverlay::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEEPlayerOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UEEPlayerOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEEPlayerOverlay()
{
	if (!Z_Registration_Info_UClass_UEEPlayerOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEEPlayerOverlay.OuterSingleton, Z_Construct_UClass_UEEPlayerOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEEPlayerOverlay.OuterSingleton;
}
UEEPlayerOverlay::UEEPlayerOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEEPlayerOverlay);
UEEPlayerOverlay::~UEEPlayerOverlay() {}
// ********** End Class UEEPlayerOverlay ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_HUD_EEPlayerOverlay_h__Script_SpaceRocks3D_EE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEEPlayerOverlay, UEEPlayerOverlay::StaticClass, TEXT("UEEPlayerOverlay"), &Z_Registration_Info_UClass_UEEPlayerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEEPlayerOverlay), 3017850035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_HUD_EEPlayerOverlay_h__Script_SpaceRocks3D_EE_2177962065(TEXT("/Script/SpaceRocks3D_EE"),
	Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_HUD_EEPlayerOverlay_h__Script_SpaceRocks3D_EE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_HUD_EEPlayerOverlay_h__Script_SpaceRocks3D_EE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
