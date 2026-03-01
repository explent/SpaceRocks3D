// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EEPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEEPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEPlayerController();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceRocks3D_EE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEEPlayerController ******************************************************
void AEEPlayerController::StaticRegisterNativesAEEPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEEPlayerController;
UClass* AEEPlayerController::GetPrivateStaticClass()
{
	using TClass = AEEPlayerController;
	if (!Z_Registration_Info_UClass_AEEPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EEPlayerController"),
			Z_Registration_Info_UClass_AEEPlayerController.InnerSingleton,
			StaticRegisterNativesAEEPlayerController,
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
	return Z_Registration_Info_UClass_AEEPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AEEPlayerController_NoRegister()
{
	return AEEPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEEPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EEPlayerController.h" },
		{ "ModuleRelativePath", "EEPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLives_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "EEPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEEPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEEPlayerController_Statics::NewProp_MaxLives = { "MaxLives", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEEPlayerController, MaxLives), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLives_MetaData), NewProp_MaxLives_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEEPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEEPlayerController_Statics::NewProp_MaxLives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEEPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEEPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEEPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEEPlayerController_Statics::ClassParams = {
	&AEEPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEEPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEEPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEEPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEEPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEEPlayerController()
{
	if (!Z_Registration_Info_UClass_AEEPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEEPlayerController.OuterSingleton, Z_Construct_UClass_AEEPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEEPlayerController.OuterSingleton;
}
AEEPlayerController::AEEPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEEPlayerController);
AEEPlayerController::~AEEPlayerController() {}
// ********** End Class AEEPlayerController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEPlayerController_h__Script_SpaceRocks3D_EE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEEPlayerController, AEEPlayerController::StaticClass, TEXT("AEEPlayerController"), &Z_Registration_Info_UClass_AEEPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEEPlayerController), 1130598039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEPlayerController_h__Script_SpaceRocks3D_EE_1085633490(TEXT("/Script/SpaceRocks3D_EE"),
	Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEPlayerController_h__Script_SpaceRocks3D_EE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEPlayerController_h__Script_SpaceRocks3D_EE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
