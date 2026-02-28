// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUD/EEHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEEHUD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEHUD();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceRocks3D_EE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEEHUD *******************************************************************
void AEEHUD::StaticRegisterNativesAEEHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEEHUD;
UClass* AEEHUD::GetPrivateStaticClass()
{
	using TClass = AEEHUD;
	if (!Z_Registration_Info_UClass_AEEHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EEHUD"),
			Z_Registration_Info_UClass_AEEHUD.InnerSingleton,
			StaticRegisterNativesAEEHUD,
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
	return Z_Registration_Info_UClass_AEEHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AEEHUD_NoRegister()
{
	return AEEHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEEHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/EEHUD.h" },
		{ "ModuleRelativePath", "HUD/EEHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOverlayClass_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "HUD/EEHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerOverlayClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEEHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEEHUD_Statics::NewProp_PlayerOverlayClass = { "PlayerOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEEHUD, PlayerOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOverlayClass_MetaData), NewProp_PlayerOverlayClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEEHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEEHUD_Statics::NewProp_PlayerOverlayClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEEHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEEHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEEHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEEHUD_Statics::ClassParams = {
	&AEEHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEEHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEEHUD_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEEHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AEEHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEEHUD()
{
	if (!Z_Registration_Info_UClass_AEEHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEEHUD.OuterSingleton, Z_Construct_UClass_AEEHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEEHUD.OuterSingleton;
}
AEEHUD::AEEHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEEHUD);
AEEHUD::~AEEHUD() {}
// ********** End Class AEEHUD *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_HUD_EEHUD_h__Script_SpaceRocks3D_EE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEEHUD, AEEHUD::StaticClass, TEXT("AEEHUD"), &Z_Registration_Info_UClass_AEEHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEEHUD), 736122613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_HUD_EEHUD_h__Script_SpaceRocks3D_EE_292962178(TEXT("/Script/SpaceRocks3D_EE"),
	Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_HUD_EEHUD_h__Script_SpaceRocks3D_EE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_HUD_EEHUD_h__Script_SpaceRocks3D_EE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
