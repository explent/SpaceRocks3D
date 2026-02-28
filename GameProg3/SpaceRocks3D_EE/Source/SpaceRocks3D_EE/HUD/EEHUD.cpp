// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/EEHUD.h"

void AEEHUD::PostInitializeComponents() {

	//ensures parent logic runs
	Super::PostInitializeComponents();

	//get the player controller that owns this HUD
	APlayerController* PlayerController = GetOwningPlayerController();

	if (PlayerController && PlayerOverlayClass) {
		PlayerOverlay = CreateWidget<UEEPlayerOverlay>(PlayerController, PlayerOverlayClass);

		PlayerOverlay->AddToViewport();
	}
}