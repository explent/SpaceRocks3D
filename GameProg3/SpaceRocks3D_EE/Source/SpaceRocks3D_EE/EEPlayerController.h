// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HUD/EEHUD.h"
#include "GameFramework/PlayerController.h"
#include "EEPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SPACEROCKS3D_EE_API AEEPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	void SetHUDHealth(float Health, float MaxHealth);

private: 
	TObjectPtr<AEEHUD> TheHud;

protected:
	virtual void BeginPlay() override;
};
