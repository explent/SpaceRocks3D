// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/DamageEvents.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Props/EERock.h"

// Sets default values
AEERock::AEERock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	SetRootComponent(StaticMesh);
	StaticMesh->SetCollisionProfileName("PhysicsActor");
	StaticMesh->SetSimulatePhysics(true);
	StaticMesh->SetEnableGravity(false);
	StaticMesh->SetAllMassScale(0.1f);
	StaticMesh->SetNotifyRigidBodyCollision(true);
}

// Called when the game starts or when spawned
void AEERock::BeginPlay()
{
	Super::BeginPlay();

	if (RockMeshes.Num() > 0) {
		const int i = FMath::RandRange(0, RockMeshes.Num() - 1);
		StaticMesh->SetStaticMesh(RockMeshes[i]);
	}

	//choose a random scale and apply
	const float Scale = FMath::FRandRange(RandomScaleRange.X, RandomScaleRange.Y);
	const FVector Scale3D = FVector(Scale, Scale, Scale);
	StaticMesh->SetWorldScale3D(Scale3D);
	
	//Random movement
	//Get a random unit vector for direction
	const FVector RandomUnitVector = UKismetMathLibrary::RandomUnitVector();

	//Get a random speed between 100 and 1000
	const float RandomSpeed = FMath::FRandRange(RandomSpeedRange.X, RandomScaleRange.Y);

	//Create a velocity vector from the above
	Velocity = RandomUnitVector * RandomSpeed;


	//Create a random number between -45 and 45
	const float RandomAngle = FMath::FRandRange(RandomAngleRange.X, RandomAngleRange.Y);

	//Use the random Angle to create a rotation
	AngularVelocity = FVector(RandomAngle, RandomAngle, RandomAngle);

	//Use both vectors to set the physics of the rocks
	StaticMesh->SetPhysicsLinearVelocity(Velocity);
	StaticMesh->SetPhysicsAngularVelocityInDegrees(AngularVelocity);
}

// Called every frame
void AEERock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEERock::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

	if (OtherActor->ActorHasTag("Projectile")) {
		Destroy();
	}
	if (OtherActor->ActorHasTag("SpaceShip")) {
		
		FVector HitDirection = GetActorRotation().Vector();

		const float RockMass = HitComp->GetMass();
		const float ScaledDamage = BaseDamage + (RockMass * MassMultiplier);

		UGameplayStatics::ApplyPointDamage(OtherActor, ScaledDamage, HitDirection, Hit, GetInstigatorController(), this, DamageTypeClass);

		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Damage Applied"));
	}
}

void AEERock::PostInitializeComponents() {

	Super::PostInitializeComponents();
	//Bind the OnHit Method to the OnComponentHit
	StaticMesh->OnComponentHit.AddDynamic(this, &AEERock::OnHit);
}