// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles/EEProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"

// Sets default values
AEEProjectile::AEEProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("A Box Component"));
	SetRootComponent(BoxComponent);
	BoxComponent->SetCollisionProfileName(TEXT("Projectile"));

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->InitialSpeed = 10000.0f;
	ProjectileMovement->MaxSpeed = 10000.0f;
	ProjectileMovement->ProjectileGravityScale = 0.0f;
	InitialLifeSpan = 4.0f;

	Tracer = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Tracer Particle"));
	Tracer->SetupAttachment(BoxComponent);


}

// Called when the game starts or when spawned
void AEEProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	if (BoxComponent && GetInstigator()) {
		//Collider ignores the ship or thing that fired it
		BoxComponent->IgnoreActorWhenMoving(GetInstigator(), true);
	}

	//UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());

	if (FireSound) // Check if the TracerSound is set in the editor (not a nullptr)
	{
		UGameplayStatics::SpawnSoundAttached(
			FireSound,                           // The sound cue or wave asset to play
			BoxComponent,                        // Attach the sound to the projectile CollisionBox so it moves with it
			FName(),                             // Optional socket name, not used here
			FVector::ZeroVector,                 // Position offset relative to the attached component (none in this case)
			EAttachLocation::KeepRelativeOffset, // Maintain this offset relative to the CollisionBox
			true                                 // Stop the sound automatically when the projectile is destroyed
		);
	}
}

// Called every frame
void AEEProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEEProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
	
	FVector HitDirection = GetActorRotation().Vector();

	UGameplayStatics::ApplyPointDamage(OtherActor, 50.0f, HitDirection, Hit, GetInstigatorController(), this, DamageTypeClass);
	
	UGameplayStatics::SpawnSoundAtLocation(this, ExplosionSound, GetActorLocation());
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ExplosionParticle, GetActorLocation());

	if (OtherActor->ActorHasTag("Destructible")) {
		OtherActor->Destroy();
	}
	Destroy();
}

void AEEProjectile::PostInitializeComponents() {

	Super::PostInitializeComponents();
	//Bind the OnHit Method to the OnComponentHit
	BoxComponent->OnComponentHit.AddDynamic(this, &AEEProjectile::OnHit);
}