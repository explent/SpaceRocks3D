// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectiles/EEProjectile.h"

#ifdef SPACEROCKS3D_EE_EEProjectile_generated_h
#error "EEProjectile.generated.h already included, missing '#pragma once' in EEProjectile.h"
#endif
#define SPACEROCKS3D_EE_EEProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AEEProjectile ************************************************************
#define FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEProjectile_NoRegister();

#define FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEEProjectile(); \
	friend struct Z_Construct_UClass_AEEProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(AEEProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceRocks3D_EE"), Z_Construct_UClass_AEEProjectile_NoRegister) \
	DECLARE_SERIALIZER(AEEProjectile)


#define FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEEProjectile(AEEProjectile&&) = delete; \
	AEEProjectile(const AEEProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEEProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEEProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEEProjectile) \
	NO_API virtual ~AEEProjectile();


#define FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h_12_PROLOG
#define FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEEProjectile;

// ********** End Class AEEProjectile **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Entit_Downloads_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Projectiles_EEProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
