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
	void LoseLife();
	void SetHUDLives(int NumLives);


private: 
	TObjectPtr<AEEHUD> TheHud;
	UPROPERTY(EditAnywhere, Category = "Player Stats") int MaxLives = 3;
	int Lives = 0;


protected:
	virtual void BeginPlay() override;
};
