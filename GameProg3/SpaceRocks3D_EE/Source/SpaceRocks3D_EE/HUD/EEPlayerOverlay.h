// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EEPlayerOverlay.generated.h"

/**
 * 
 */
UCLASS()
class SPACEROCKS3D_EE_API UEEPlayerOverlay : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(meta = (BindWidget)) TObjectPtr<class UProgressBar> HealthBar;

	UPROPERTY(meta = (BindWidget)) TObjectPtr<class UTextBlock> HealthText;


public:

	void UpdateHealthBar(float Health, float MaxHealth);
};
