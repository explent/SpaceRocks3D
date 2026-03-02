// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attributes/EEAttributeComponent.h"

#ifdef SPACEROCKS3D_EE_EEAttributeComponent_generated_h
#error "EEAttributeComponent.generated.h already included, missing '#pragma once' in EEAttributeComponent.h"
#endif
#define SPACEROCKS3D_EE_EEAttributeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnHealthChangedSignature *********************************************
#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h_10_DELEGATE \
SPACEROCKS3D_EE_API void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float Health, float MaxHealth);


// ********** End Delegate FOnHealthChangedSignature ***********************************************

// ********** Begin Delegate FOnDeathSignature *****************************************************
#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h_11_DELEGATE \
SPACEROCKS3D_EE_API void FOnDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDeathSignature);


// ********** End Delegate FOnDeathSignature *******************************************************

// ********** Begin Class UEEAttributeComponent ****************************************************
SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_UEEAttributeComponent_NoRegister();

#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEEAttributeComponent(); \
	friend struct Z_Construct_UClass_UEEAttributeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPACEROCKS3D_EE_API UClass* Z_Construct_UClass_UEEAttributeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEEAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceRocks3D_EE"), Z_Construct_UClass_UEEAttributeComponent_NoRegister) \
	DECLARE_SERIALIZER(UEEAttributeComponent)


#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEEAttributeComponent(UEEAttributeComponent&&) = delete; \
	UEEAttributeComponent(const UEEAttributeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEEAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEEAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEEAttributeComponent) \
	NO_API virtual ~UEEAttributeComponent();


#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h_13_PROLOG
#define FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEEAttributeComponent;

// ********** End Class UEEAttributeComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Entit_OneDrive_Dokumente_SpaceRocks3D_GameProg3_SpaceRocks3D_EE_Source_SpaceRocks3D_EE_Attributes_EEAttributeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
