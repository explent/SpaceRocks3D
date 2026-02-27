// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Props/EERock.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEERock() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEERock();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEERock_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceRocks3D_EE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEERock Function OnHit ***************************************************
struct Z_Construct_UFunction_AEERock_OnHit_Statics
{
	struct EERock_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EERock_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EERock_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EERock_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EERock_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EERock_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEERock_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEERock_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEERock_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEERock_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEERock, nullptr, "OnHit", Z_Construct_UFunction_AEERock_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEERock_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEERock_OnHit_Statics::EERock_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEERock_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEERock_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEERock_OnHit_Statics::EERock_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEERock_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEERock_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEERock::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AEERock Function OnHit *****************************************************

// ********** Begin Class AEERock ******************************************************************
void AEERock::StaticRegisterNativesAEERock()
{
	UClass* Class = AEERock::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &AEERock::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEERock;
UClass* AEERock::GetPrivateStaticClass()
{
	using TClass = AEERock;
	if (!Z_Registration_Info_UClass_AEERock.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EERock"),
			Z_Registration_Info_UClass_AEERock.InnerSingleton,
			StaticRegisterNativesAEERock,
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
	return Z_Registration_Info_UClass_AEERock.InnerSingleton;
}
UClass* Z_Construct_UClass_AEERock_NoRegister()
{
	return AEERock::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEERock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Props/EERock.h" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "EERock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RockMeshes_MetaData[] = {
		{ "Category", "Rock Properties" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomScaleRange_MetaData[] = {
		{ "Category", "Rock Properties" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSpeedRange_MetaData[] = {
		{ "Category", "Rock Properties" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomAngleRange_MetaData[] = {
		{ "Category", "Rock Properties" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassMultiplier_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Props/EERock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RockMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RockMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomScaleRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomSpeedRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomAngleRange;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MassMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEERock_OnHit, "OnHit" }, // 1703485636
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEERock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERock, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_RockMeshes_Inner = { "RockMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_RockMeshes = { "RockMeshes", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERock, RockMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RockMeshes_MetaData), NewProp_RockMeshes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_RandomScaleRange = { "RandomScaleRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERock, RandomScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomScaleRange_MetaData), NewProp_RandomScaleRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_RandomSpeedRange = { "RandomSpeedRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERock, RandomSpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSpeedRange_MetaData), NewProp_RandomSpeedRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_RandomAngleRange = { "RandomAngleRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERock, RandomAngleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomAngleRange_MetaData), NewProp_RandomAngleRange_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERock, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERock, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEERock_Statics::NewProp_MassMultiplier = { "MassMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERock, MassMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassMultiplier_MetaData), NewProp_MassMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEERock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_RockMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_RockMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_RandomScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_RandomSpeedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_RandomAngleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_DamageTypeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERock_Statics::NewProp_MassMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEERock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEERock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEERock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEERock_Statics::ClassParams = {
	&AEERock::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEERock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEERock_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEERock_Statics::Class_MetaDataParams), Z_Construct_UClass_AEERock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEERock()
{
	if (!Z_Registration_Info_UClass_AEERock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEERock.OuterSingleton, Z_Construct_UClass_AEERock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEERock.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEERock);
AEERock::~AEERock() {}
// ********** End Class AEERock ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Props_EERock_h__Script_SpaceRocks3D_EE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEERock, AEERock::StaticClass, TEXT("AEERock"), &Z_Registration_Info_UClass_AEERock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEERock), 7585144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Props_EERock_h__Script_SpaceRocks3D_EE_1083261756(TEXT("/Script/SpaceRocks3D_EE"),
	Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Props_EERock_h__Script_SpaceRocks3D_EE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Props_EERock_h__Script_SpaceRocks3D_EE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
