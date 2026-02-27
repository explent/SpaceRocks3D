// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Props/EERockSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEERockSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEERock_NoRegister();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEERockSpawner();
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEERockSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceRocks3D_EE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEERockSpawner ***********************************************************
void AEERockSpawner::StaticRegisterNativesAEERockSpawner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEERockSpawner;
UClass* AEERockSpawner::GetPrivateStaticClass()
{
	using TClass = AEERockSpawner;
	if (!Z_Registration_Info_UClass_AEERockSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EERockSpawner"),
			Z_Registration_Info_UClass_AEERockSpawner.InnerSingleton,
			StaticRegisterNativesAEERockSpawner,
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
	return Z_Registration_Info_UClass_AEERockSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_AEERockSpawner_NoRegister()
{
	return AEERockSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEERockSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Props/EERockSpawner.h" },
		{ "ModuleRelativePath", "Props/EERockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RockClass_MetaData[] = {
		{ "Category", "Spawner Settings" },
		{ "ModuleRelativePath", "Props/EERockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocksNum_MetaData[] = {
		{ "Category", "Spawner Settings" },
		{ "ModuleRelativePath", "Props/EERockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnRadius_MetaData[] = {
		{ "Category", "Spawner Settings" },
		{ "ModuleRelativePath", "Props/EERockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnRadius_MetaData[] = {
		{ "Category", "Spawner Settings" },
		{ "ModuleRelativePath", "Props/EERockSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RockClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RocksNum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEERockSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEERockSpawner_Statics::NewProp_RockClass = { "RockClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERockSpawner, RockClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEERock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RockClass_MetaData), NewProp_RockClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEERockSpawner_Statics::NewProp_RocksNum = { "RocksNum", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERockSpawner, RocksNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocksNum_MetaData), NewProp_RocksNum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEERockSpawner_Statics::NewProp_MaxSpawnRadius = { "MaxSpawnRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERockSpawner, MaxSpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnRadius_MetaData), NewProp_MaxSpawnRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEERockSpawner_Statics::NewProp_MinSpawnRadius = { "MinSpawnRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEERockSpawner, MinSpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpawnRadius_MetaData), NewProp_MinSpawnRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEERockSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERockSpawner_Statics::NewProp_RockClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERockSpawner_Statics::NewProp_RocksNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERockSpawner_Statics::NewProp_MaxSpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEERockSpawner_Statics::NewProp_MinSpawnRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEERockSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEERockSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceRocks3D_EE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEERockSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEERockSpawner_Statics::ClassParams = {
	&AEERockSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEERockSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEERockSpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEERockSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AEERockSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEERockSpawner()
{
	if (!Z_Registration_Info_UClass_AEERockSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEERockSpawner.OuterSingleton, Z_Construct_UClass_AEERockSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEERockSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEERockSpawner);
AEERockSpawner::~AEERockSpawner() {}
// ********** End Class AEERockSpawner *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Props_EERockSpawner_h__Script_SpaceRocks3D_EE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEERockSpawner, AEERockSpawner::StaticClass, TEXT("AEERockSpawner"), &Z_Registration_Info_UClass_AEERockSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEERockSpawner), 4125113841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Props_EERockSpawner_h__Script_SpaceRocks3D_EE_1301188528(TEXT("/Script/SpaceRocks3D_EE"),
	Z_CompiledInDeferFile_FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Props_EERockSpawner_h__Script_SpaceRocks3D_EE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Props_EERockSpawner_h__Script_SpaceRocks3D_EE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
