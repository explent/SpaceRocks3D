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

// ********** Begin Class AEEPlayerController Function LoseLife ************************************
struct Z_Construct_UFunction_AEEPlayerController_LoseLife_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EEPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEEPlayerController_LoseLife_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEEPlayerController, nullptr, "LoseLife", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEEPlayerController_LoseLife_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEEPlayerController_LoseLife_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEEPlayerController_LoseLife()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEEPlayerController_LoseLife_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEEPlayerController::execLoseLife)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoseLife();
	P_NATIVE_END;
}
// ********** End Class AEEPlayerController Function LoseLife **************************************

// ********** Begin Class AEEPlayerController Function SetHUDHealth ********************************
struct Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics
{
	struct EEPlayerController_eventSetHUDHealth_Parms
	{
		float Health;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EEPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EEPlayerController_eventSetHUDHealth_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EEPlayerController_eventSetHUDHealth_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEEPlayerController, nullptr, "SetHUDHealth", Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::EEPlayerController_eventSetHUDHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::EEPlayerController_eventSetHUDHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEEPlayerController_SetHUDHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEEPlayerController_SetHUDHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEEPlayerController::execSetHUDHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDHealth(Z_Param_Health,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// ********** End Class AEEPlayerController Function SetHUDHealth **********************************

// ********** Begin Class AEEPlayerController ******************************************************
void AEEPlayerController::StaticRegisterNativesAEEPlayerController()
{
	UClass* Class = AEEPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoseLife", &AEEPlayerController::execLoseLife },
		{ "SetHUDHealth", &AEEPlayerController::execSetHUDHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEEPlayerController_LoseLife, "LoseLife" }, // 2172402596
		{ &Z_Construct_UFunction_AEEPlayerController_SetHUDHealth, "SetHUDHealth" }, // 1078787198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AEEPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AEEPlayerController, AEEPlayerController::StaticClass, TEXT("AEEPlayerController"), &Z_Registration_Info_UClass_AEEPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEEPlayerController), 2368793337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEPlayerController_h__Script_SpaceRocks3D_EE_585014391(TEXT("/Script/SpaceRocks3D_EE"),
	Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEPlayerController_h__Script_SpaceRocks3D_EE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEPlayerController_h__Script_SpaceRocks3D_EE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
