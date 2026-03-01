// Fill out your copyright notice in the Description page of Project Settings.

#include "EEPlayerController.h"
#include "AEESpaceShip.h"


void AEEPlayerController::BeginPlay() {
	Super::BeginPlay();

	TheHud = Cast<AEEHUD>(GetHUD());
	Lives = MaxLives;
}

void AEEPlayerController::SetHUDHealth(float Health, float MaxHealth) {

	if (TheHud == nullptr) {
		TheHud = Cast<AEEHUD>(GetHUD());
	}

	if (TheHud && TheHud->PlayerOverlay) {
		TheHud->PlayerOverlay->UpdateHealthBar(Health, MaxHealth);
	}
}

void AEEPlayerController::LoseLife() {
	Lives--;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Lives left: %d"), Lives));
	AAEESpaceShip* SpaceShip = Cast<AAEESpaceShip>(GetPawn());
	SpaceShip->SetHealth(SpaceShip->GetMaxHealth());
	
	if (TheHud && TheHud->PlayerOverlay) {
		SetHUDHealth(SpaceShip->GetMaxHealth(), SpaceShip->GetMaxHealth());
	}
	if (Lives <= 0) {

	}
	else {

	}
}