// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//#include "Delegates/DelegateCombinations.h"
#include "EEAttributeComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangedSignature, float, Health, float, MaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathSignature);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPACEROCKS3D_EE_API UEEAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEEAttributeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, Category = "Health") float MaxHealth = 100.0f;
	UPROPERTY(EditAnywhere, Category = "Resistance") float DamageMultiplier = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Collision Damage") float CollisionStrengthMultiplier = 0.01f;
	UPROPERTY(EditAnywhere, Category = "Collision Damage") float VirtualMass = 100.0f;
	float Health = 0.0f;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void UpdateHealth(float value);
	UPROPERTY(BlueprintAssignable) FOnHealthChangedSignature OnHealthChanged;
	UPROPERTY(BlueprintAssignable) FOnDeathSignature OnDeath;
	float GetMaxHealth() const;
	float GetHealth() const;
	float GetCollisionStrength() const;
};
