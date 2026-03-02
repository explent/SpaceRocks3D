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

	UFUNCTION() void SetHUDHealth(float Health, float MaxHealth);
	UFUNCTION() void LoseLife();
	void SetHUDLives(int NumLives);


private: 
	TObjectPtr<AEEHUD> TheHud;
	UPROPERTY(EditAnywhere, Category = "Player Stats") int MaxLives = 3;
	int Lives = 0;
	void InitHUD();

protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
};
