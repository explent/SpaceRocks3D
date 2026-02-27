// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EERock.generated.h"

class UStaticMesh;

UCLASS()
class SPACEROCKS3D_EE_API AEERock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEERock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> StaticMesh;
	UPROPERTY(EditAnywhere, Category = "Rock Properties") TArray<TObjectPtr<UStaticMesh>> RockMeshes;
	UPROPERTY(EditAnywhere, Category = "Rock Properties") FVector2D RandomScaleRange = FVector2D(0.5, 15);
	UPROPERTY(EditAnywhere, Category = "Rock Properties") FVector2D RandomSpeedRange = FVector2D(100.0f, 1000.0f);
	UPROPERTY(EditAnywhere, Category = "Rock Properties") FVector2D RandomAngleRange = FVector2D(-45.0f, 45.0f);
	UFUNCTION() void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	UPROPERTY(EditDefaultsOnly, Category = "Damage") TSubclassOf<UDamageType> DamageTypeClass;

	UPROPERTY(EditAnywhere, Category = "Damage") float BaseDamage = 10.0f;
	UPROPERTY(EditAnywhere, Category = "Damage") float MassMultiplier = 0.1f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;

private:
	FVector Velocity = FVector(0.0f, 0.0f, 0.0f);
	FVector AngularVelocity = FVector(0.0f, 0.0f, 0.0f);
};
