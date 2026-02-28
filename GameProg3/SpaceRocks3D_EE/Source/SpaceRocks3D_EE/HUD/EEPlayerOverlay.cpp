// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "HUD/EEPlayerOverlay.h"

void UEEPlayerOverlay::UpdateHealthBar(float Health, float MaxHealth) {
	if (HealthBar && HealthText) {
		HealthBar->SetPercent(Health / MaxHealth);

		FString HealthString = FString::Printf(TEXT("%d/%d"), FMath::CeilToInt(Health), FMath::CeilToInt(MaxHealth));
		HealthText->SetText(FText::FromString(HealthString));
	}
}