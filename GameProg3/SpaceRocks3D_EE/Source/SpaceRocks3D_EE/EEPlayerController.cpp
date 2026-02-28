// Fill out your copyright notice in the Description page of Project Settings.


#include "EEPlayerController.h"

void AEEPlayerController::BeginPlay() {
	Super::BeginPlay();

	TheHud = Cast<AEEHUD>(GetHUD());
}

void AEEPlayerController::SetHUDHealth(float Health, float MaxHealth) {

	if (TheHud == nullptr) {
		TheHud = Cast<AEEHUD>(GetHUD());
	}

	if (TheHud && TheHud->PlayerOverlay) {
		TheHud->PlayerOverlay->UpdateHealthBar(Health, MaxHealth);
	}
}