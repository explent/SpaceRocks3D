// Fill out your copyright notice in the Description page of Project Settings.

#include "HUD/EEPlayerOverlay.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/HorizontalBox.h"

void UEEPlayerOverlay::UpdateHealthBar(float Health, float MaxHealth) {
	if (HealthBar && HealthText) {
		HealthBar->SetPercent(Health / MaxHealth);

		FString HealthString = FString::Printf(TEXT("%d/%d"), FMath::CeilToInt(Health), FMath::CeilToInt(MaxHealth));
		HealthText->SetText(FText::FromString(HealthString));
	}
}

void UEEPlayerOverlay::UpdateLivesDisplay(int NumLives) {
	if (!LivesContainer) {
		return;
	}

	LivesContainer->ClearChildren();

	for (int i = 0; i < NumLives; i++) {

		//Create a new Image
		UImage* LifeIcon = NewObject<UImage>(this);

		//If the brush is assigned set the visual appearance
		if (LifeIcon) {
			LifeIcon->SetBrush(LifeIconBrush);
		}

		//Add the new image to the containter
		LivesContainer->AddChild(LifeIcon);
	}
}