// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/KismetMathLibrary.h"
#include "Props/EERockSpawner.h"

// Sets default values
AEERockSpawner::AEERockSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEERockSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnRocks();
}

// Called every frame
void AEERockSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEERockSpawner::SpawnRocks() {
	if (RockClass) {

		for (int i = 0; i < RocksNum; i++) {

			//Get a random unit vector for the direction
			const FVector RandomUnitVector = UKismetMathLibrary::RandomUnitVector();

			//Get a random number between MinSpawnRadius and MaxSpawnRadius
			const float Distance = FMath::FRandRange(MinSpawnRadius, MaxSpawnRadius);

			//Create an offset vector from the above direction and distance
			Offset = RandomUnitVector * Distance;

			//create a spawn location using the location of the spawner + offset
			FVector SpawnLocation = GetActorLocation() * Offset;

			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
			GetWorld()->SpawnActor<AEERock>(RockClass, SpawnLocation, FRotator::ZeroRotator, SpawnParams);

		}
	}
}