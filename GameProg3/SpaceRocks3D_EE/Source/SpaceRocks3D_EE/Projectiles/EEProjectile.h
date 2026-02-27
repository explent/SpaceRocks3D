// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraComponent.h"
#include "EEProjectile.generated.h"

UCLASS()
class SPACEROCKS3D_EE_API AEEProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEEProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere) TObjectPtr<UBoxComponent> BoxComponent;

	UPROPERTY(VisibleAnywhere) TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UFUNCTION() void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditDefaultsOnly, Category = "Damage") TSubclassOf<UDamageType> DamageTypeClass;

	UPROPERTY(VisibleAnywhere) TObjectPtr<UNiagaraComponent> Tracer;

	UPROPERTY(EditAnywhere, Category = "Combat") TObjectPtr<USoundBase> FireSound;

	UPROPERTY(EditAnywhere) TObjectPtr<UNiagaraSystem> ExplosionParticle;

	UPROPERTY(EditAnywhere, Category = "Combat") TObjectPtr<USoundBase> ExplosionSound;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;
};
