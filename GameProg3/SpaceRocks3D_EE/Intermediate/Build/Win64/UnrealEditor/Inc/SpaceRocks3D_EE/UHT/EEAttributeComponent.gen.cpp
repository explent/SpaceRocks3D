// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/EEAttributeComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEEAttributeComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_UEEAttributeComponent();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_UEEAttributeComponent_NoRegister();
SPACEROCKS3D_EE_API UFunction* Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature();
SPACEROCKS3D_EE_API UFunction* Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SpaceRocks3D_EE();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
struct Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics
{
	struct _Script_SpaceRocks3D_EE_eventOnHealthChangedSignature_Parms
	{
		float Health;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpaceRocks3D_EE_eventOnHealthChangedSignature_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SpaceRocks3D_EE_eventOnHealthChangedSignature_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE, nullptr, "OnHealthChangedSignature__DelegateSignature", Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::_Script_SpaceRocks3D_EE_eventOnHealthChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::_Script_SpaceRocks3D_EE_eventOnHealthChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float Health, float MaxHealth)
{
	struct _Script_SpaceRocks3D_EE_eventOnHealthChangedSignature_Parms
	{
		float Health;
		float MaxHealth;
	};
	_Script_SpaceRocks3D_EE_eventOnHealthChangedSignature_Parms Parms;
	Parms.Health=Health;
	Parms.MaxHealth=MaxHealth;
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Delegate FOnDeathSignature *****************************************************
struct Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE, nullptr, "OnDeathSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDeathSignature)
{
	OnDeathSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDeathSignature *******************************************************

// ********** Begin Class UEEAttributeComponent ****************************************************
void UEEAttributeComponent::StaticRegisterNativesUEEAttributeComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEEAttributeComponent;
UClass* UEEAttributeComponent::GetPrivateStaticClass()
{
	using TClass = UEEAttributeComponent;
	if (!Z_Registration_Info_UClass_UEEAttributeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EEAttributeComponent"),
			Z_Registration_Info_UClass_UEEAttributeComponent.InnerSingleton,
			StaticRegisterNativesUEEAttributeComponent,
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
	return Z_Registration_Info_UClass_UEEAttributeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UEEAttributeComponent_NoRegister()
{
	return UEEAttributeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEEAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Attributes/EEAttributeComponent.h" },
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Resistance" },
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionStrengthMultiplier_MetaData[] = {
		{ "Category", "Collision Damage" },
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualMass_MetaData[] = {
		{ "Category", "Collision Damage" },
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "ModuleRelativePath", "Attributes/EEAttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionStrengthMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VirtualMass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEEAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEEAttributeComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEEAttributeComponent, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_CollisionStrengthMultiplier = { "CollisionStrengthMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEEAttributeComponent, CollisionStrengthMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionStrengthMultiplier_MetaData), NewProp_CollisionStrengthMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_VirtualMass = { "VirtualMass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEEAttributeComponent, VirtualMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualMass_MetaData), NewProp_VirtualMass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEEAttributeComponent, OnHealthChanged), Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 3793603764
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEEAttributeComponent, OnDeath), Z_Construct_UDelegateFunction_SpaceRocks3D_EE_OnDeathSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 1271630026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEEAttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_CollisionStrengthMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_VirtualMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEEAttributeComponent_Statics::NewProp_OnDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEEAttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEEAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEEAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEEAttributeComponent_Statics::ClassParams = {
	&UEEAttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEEAttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEEAttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEEAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEEAttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEEAttributeComponent()
{
	if (!Z_Registration_Info_UClass_UEEAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEEAttributeComponent.OuterSingleton, Z_Construct_UClass_UEEAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEEAttributeComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEEAttributeComponent);
UEEAttributeComponent::~UEEAttributeComponent() {}
// ********** End Class UEEAttributeComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h__Script_SpaceRocks3D_EE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEEAttributeComponent, UEEAttributeComponent::StaticClass, TEXT("UEEAttributeComponent"), &Z_Registration_Info_UClass_UEEAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEEAttributeComponent), 1924044309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h__Script_SpaceRocks3D_EE_954291330(TEXT("/Script/SpaceRocks3D_EE"),
	Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h__Script_SpaceRocks3D_EE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h__Script_SpaceRocks3D_EE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
