// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HUD/EEPlayerOverlay.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/HUD.h"
#include "EEHUD.generated.h"

/**
 * 
 */
UCLASS()
class SPACEROCKS3D_EE_API AEEHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Player Stats") TSubclassOf<UUserWidget> PlayerOverlayClass;
	TObjectPtr<UEEPlayerOverlay> PlayerOverlay;
	virtual void PostInitializeComponents() override;
};
