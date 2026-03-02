// Fill out your copyright notice in the Description page of Project Settings.


#include "Attributes/EEAttributeComponent.h"

// Sets default values for this component's properties
UEEAttributeComponent::UEEAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEEAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

	UpdateHealth(MaxHealth);
	// ...
	
}


// Called every frame
void UEEAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEEAttributeComponent::UpdateHealth(float value) {

	if (value <= 0.0f) {
		float FinalMultiplier = DamageMultiplier;

		AActor* Owner = GetOwner();
		if (Owner) {
			float Scale = Owner->GetActorScale3D().GetMax();

			if (Scale <= 0.001) {
				Scale = 1.0f;
			}

			float SizeMultiplier = 1.0f / Scale;

			FinalMultiplier *= SizeMultiplier;
		}

		value *= FinalMultiplier;
		UE_LOG(LogTemp, Warning, TEXT("Resisted Damage. Scale: %f | Multiplier: %f | Final Dmg: %f"),
			GetOwner()->GetActorScale3D().GetMax(), FinalMultiplier, value);
	}

	Health += value;

	if (Health <= 0) {
		Health = 0;
		OnDeath.Broadcast();
	}
	else if (Health >= MaxHealth) {
		Health = MaxHealth;
	}

	OnHealthChanged.Broadcast(Health, MaxHealth);
}

float UEEAttributeComponent::GetMaxHealth() const {
	return MaxHealth;
}

float UEEAttributeComponent::GetHealth() const {
	return Health;
}

float UEEAttributeComponent::GetCollisionStrength() const {
	float ComputedStrength = 0;

	AActor* Owner = GetOwner();
	if (Owner) {
		UPrimitiveComponent* PhysicsBody = Cast<UPrimitiveComponent>(Owner->GetRootComponent());
		if (PhysicsBody && PhysicsBody->IsSimulatingPhysics()) {
			const float Mass = PhysicsBody->GetMass();
			ComputedStrength = (Mass * CollisionStrengthMultiplier);
		}
		else {
			ComputedStrength = VirtualMass * CollisionStrengthMultiplier;
		}

		float Scale = Owner->GetActorScale3D().GetMax();

		if (Scale <= 0.001f) {
			Scale = 1.0f;
		}

		ComputedStrength *= Scale;
	}
	return ComputedStrength;
}