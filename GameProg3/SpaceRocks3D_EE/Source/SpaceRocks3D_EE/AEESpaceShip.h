// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NiagaraComponent.h"
#include "EEPlayerController.h"
#include "Components/AudioComponent.h"
#include "AEESpaceShip.generated.h"

class USphereComponent;
class UCameraComponent;
class USpringArmComponent;
class UStaticMeshComponent;
class AEEProjectile;

UCLASS()
class SPACEROCKS3D_EE_API AAEESpaceShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAEESpaceShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Sphere component 
	UPROPERTY(VisibleAnywhere) TObjectPtr<USphereComponent> SphereComponent;

	// Camera component
	UPROPERTY(VisibleAnywhere) TObjectPtr<UCameraComponent> Camera;

	//Camera boom
	UPROPERTY(VisibleAnywhere) TObjectPtr<USpringArmComponent> SpringArm;

	//Static mesh
	UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> StaticMesh;

	UPROPERTY(EditAnywhere, Category = "Movement") float MaxSpeed = 3000.0f;

	UPROPERTY(EditAnywhere, Category = "Movement") float ThrustStrength = 750.0f;

	UPROPERTY(EditAnywhere, Category = "Movement") float Friction = 0.001f; 

	UPROPERTY(EditAnywhere, Category = "Movement") float RotationSpeed = 20.0f;

	UPROPERTY(EditAnywhere, Category = "Movement") float BrakingFriction = 0.02f;

	UPROPERTY(EditAnywhere, Category = "Movement") float MaxRollAngle = 30.0f;

	UPROPERTY(EditAnywhere, Category = "Movement") float RollSpeed = 20.0f;

	UPROPERTY(EditAnywhere, Category = "Movement") float MaxPitchAngle = 30.0f;

	UPROPERTY(EditAnywhere, Category = "Movement") float PitchSpeed = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Combat") TSubclassOf<AEEProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere, Category = "Combat") FName LLMuzzleSocketName;

	UPROPERTY(VisibleAnywhere, Category = "Combat") FName LRMuzzleSocketName;

	UPROPERTY(EditAnywhere, Category = "Movement") TObjectPtr<USoundBase> ThrusterLoopSound;

	UPROPERTY(EditAnywhere, Category = "Player Stats") float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Player Stats") float DamageMultiplier = 0.1f;

	TObjectPtr<AEEPlayerController> PlayerController;

	UPROPERTY(EditAnywhere) TObjectPtr<UNiagaraSystem> ThrusterParticle;

	UPROPERTY(VisibleAnywhere) TObjectPtr<UAudioComponent> AudioComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	float GetMaxHealth() const;
	void SetHealth(float NewHealth);

	void DisableOnDeath();
	void EnableOnRegen();
	void Regenerate();

	void SetInputEnabled(bool bIsEnabled);

private:
	FVector Velocity = FVector(0.0f, 0.0f, 0.0f);
	FVector Acceleration = FVector(0.0f, 0.0f, 0.0f);
	float Health = 0.0f;
	float CurrentRoll;
	float CurrentPitch;
	FString SpeedText;

	bool bCanReceiveInput = true; 
	bool bIsThrusting = false;
	bool bIsBraking = false; 
	int TurnDirection = 0; 
	int AltitudeDirection = 0;

	void OnThrustPressed();
	void OnThrustReleased();
	void OnTurnLeftPressed();
	void OnTurnRightPressed();
	void OnTurnReleased();
	void OnBrakePressed();
	void OnBrakeReleased();
	void OnAltitudeUpPressed();
	void OnAltitudeDownPressed();
	void OnAltitudeReleased();
	void OnFirePressed(FName& SocketName);
	void OnFireGun1Pressed();
	void OnFireGun2Pressed();
};
