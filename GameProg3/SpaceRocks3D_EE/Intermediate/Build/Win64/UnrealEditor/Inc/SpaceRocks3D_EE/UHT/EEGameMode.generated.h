// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EEGameMode.h"

#ifdef SPACEROCKS3D_EE_EEGameMode_generated_h
#error "EEGameMode.generated.h already included, missing '#pragma once' in EEGameMode.h"
#endif
#define SPACEROCKS3D_EE_EEGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEEGameMode **************************************************************
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEGameMode_NoRegister();

#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEEGameMode(); \
	friend struct Z_Construct_UClass_AEEGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_AEEGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AEEGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceRocks3D_EE"), Z_Construct_UClass_AEEGameMode_NoRegister) \
	DECLARE_SERIALIZER(AEEGameMode)


#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEEGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEEGameMode(AEEGameMode&&) = delete; \
	AEEGameMode(const AEEGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEEGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEEGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEEGameMode) \
	NO_API virtual ~AEEGameMode();


#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEGameMode_h_12_PROLOG
#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEEGameMode;

// ********** End Class AEEGameMode ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_EEGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
