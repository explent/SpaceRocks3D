// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AEESpaceShip.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAEESpaceShip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AAEESpaceShip();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AAEESpaceShip_NoRegister();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceRocks3D_EE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAEESpaceShip ************************************************************
void AAEESpaceShip::StaticRegisterNativesAAEESpaceShip()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAEESpaceShip;
UClass* AAEESpaceShip::GetPrivateStaticClass()
{
	using TClass = AAEESpaceShip;
	if (!Z_Registration_Info_UClass_AAEESpaceShip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AEESpaceShip"),
			Z_Registration_Info_UClass_AAEESpaceShip.InnerSingleton,
			StaticRegisterNativesAAEESpaceShip,
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
	return Z_Registration_Info_UClass_AAEESpaceShip.InnerSingleton;
}
UClass* Z_Construct_UClass_AAEESpaceShip_NoRegister()
{
	return AAEESpaceShip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAEESpaceShip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AEESpaceShip.h" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "AEESpaceShip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sphere component \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "AEESpaceShip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "AEESpaceShip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera boom\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "AEESpaceShip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Static mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrustStrength_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingFriction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRollAngle_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchAngle_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LLMuzzleSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LRMuzzleSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrusterLoopSound_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrusterParticle_MetaData[] = {
		{ "Category", "AEESpaceShip" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "AEESpaceShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEESpaceShip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrustStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRollAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchSpeed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LLMuzzleSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LRMuzzleSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrusterLoopSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrusterParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAEESpaceShip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_ThrustStrength = { "ThrustStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, ThrustStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrustStrength_MetaData), NewProp_ThrustStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_BrakingFriction = { "BrakingFriction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, BrakingFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingFriction_MetaData), NewProp_BrakingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_MaxRollAngle = { "MaxRollAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, MaxRollAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRollAngle_MetaData), NewProp_MaxRollAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_RollSpeed = { "RollSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, RollSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollSpeed_MetaData), NewProp_RollSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_MaxPitchAngle = { "MaxPitchAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, MaxPitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitchAngle_MetaData), NewProp_MaxPitchAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_PitchSpeed = { "PitchSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, PitchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchSpeed_MetaData), NewProp_PitchSpeed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEEProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_LLMuzzleSocketName = { "LLMuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, LLMuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LLMuzzleSocketName_MetaData), NewProp_LLMuzzleSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_LRMuzzleSocketName = { "LRMuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, LRMuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LRMuzzleSocketName_MetaData), NewProp_LRMuzzleSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_ThrusterLoopSound = { "ThrusterLoopSound", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, ThrusterLoopSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrusterLoopSound_MetaData), NewProp_ThrusterLoopSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_ThrusterParticle = { "ThrusterParticle", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, ThrusterParticle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrusterParticle_MetaData), NewProp_ThrusterParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAEESpaceShip, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAEESpaceShip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_ThrustStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_BrakingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_MaxRollAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_RollSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_MaxPitchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_PitchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_LLMuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_LRMuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_ThrusterLoopSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_ThrusterParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEESpaceShip_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAEESpaceShip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAEESpaceShip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAEESpaceShip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAEESpaceShip_Statics::ClassParams = {
	&AAEESpaceShip::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAEESpaceShip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAEESpaceShip_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAEESpaceShip_Statics::Class_MetaDataParams), Z_Construct_UClass_AAEESpaceShip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAEESpaceShip()
{
	if (!Z_Registration_Info_UClass_AAEESpaceShip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAEESpaceShip.OuterSingleton, Z_Construct_UClass_AAEESpaceShip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAEESpaceShip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAEESpaceShip);
AAEESpaceShip::~AAEESpaceShip() {}
// ********** End Class AAEESpaceShip **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_AEESpaceShip_h__Script_SpaceRocks3D_EE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAEESpaceShip, AAEESpaceShip::StaticClass, TEXT("AAEESpaceShip"), &Z_Registration_Info_UClass_AAEESpaceShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAEESpaceShip), 3469574419U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_AEESpaceShip_h__Script_SpaceRocks3D_EE_409910904(TEXT("/Script/SpaceRocks3D_EE"),
	Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_AEESpaceShip_h__Script_SpaceRocks3D_EE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_AEESpaceShip_h__Script_SpaceRocks3D_EE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
