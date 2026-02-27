// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Props/EERock.h"
#include "EERockSpawner.generated.h"

UCLASS()
class SPACEROCKS3D_EE_API AEERockSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEERockSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Spawner Settings") TSubclassOf<AEERock> RockClass;
	UPROPERTY(EditAnywhere, Category = "Spawner Settings") int RocksNum = 10;
	UPROPERTY(EditAnywhere, Category = "Spawner Settings") float MaxSpawnRadius;
	UPROPERTY(EditAnywhere, Category = "Spawner Settings") float MinSpawnRadius;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



private:

	FVector Offset = FVector(0.0f, 0.0f, 0.0f);
	void SpawnRocks();

};
