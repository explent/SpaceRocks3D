// Fill out your copyright notice in the Description page of Project Settings.

#include "EEPlayerController.h"
#include "AEESpaceShip.h"


void AEEPlayerController::BeginPlay() {
	Super::BeginPlay();

	TheHud = Cast<AEEHUD>(GetHUD());
	Lives = MaxLives;
	SetHUDLives(Lives);
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
	SetHUDLives(Lives);
	if (Lives <= 0) {
		SetPause(true);
	}
	else {
		AAEESpaceShip* SpaceShip = Cast<AAEESpaceShip>(GetPawn());

		if (SpaceShip) {
			SpaceShip->Regenerate();
		}
	}
}

void AEEPlayerController::SetHUDLives(int NumLives) {
	if (TheHud == nullptr) {
		TheHud = Cast<AEEHUD>(GetHUD());
	}

	if (TheHud && TheHud->PlayerOverlay) {
		TheHud->PlayerOverlay->UpdateLivesDisplay(NumLives);
	}
}