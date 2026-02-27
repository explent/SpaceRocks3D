// Fill out your copyright notice in the Description page of Project Settings.


#include "AEESpaceShip.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Projectiles/EEProjectile.h"
#include "Engine/StaticMeshSocket.h"

// Sets default values
AAEESpaceShip::AAEESpaceShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("A Sphere Component"));
	SetRootComponent(SphereComponent);
	SphereComponent->SetSphereRadius(1500.0f);
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("The Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 1500.0f;
	SpringArm->SetRelativeLocation(FVector(0, 0, 500));
	SpringArm->SetRelativeRotation(FRotator(-5, 0, 0));
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("The Camera"));
	Camera->SetupAttachment(SpringArm);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("The Ship"));
	StaticMesh->SetupAttachment(SphereComponent);
	StaticMesh->SetCollisionProfileName(TEXT("SpaceShip"));
	StaticMesh->SetNotifyRigidBodyCollision(true);

	LLMuzzleSocketName = FName("LowerLeftGunMuzzle");
	LRMuzzleSocketName = FName("LowerRightGunMuzzle");
	

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component"));
	AudioComponent->SetSound(ThrusterLoopSound);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AAEESpaceShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAEESpaceShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Acceleration = FVector(0.0f, 0.0f, 0.0f);

	//Rotate around Z axis if A or D is held
	if (TurnDirection != 0) {
		FRotator Rotation = GetActorRotation();
		Rotation.Yaw = Rotation.Yaw + TurnDirection * RotationSpeed * DeltaTime;
		SetActorRotation(Rotation);
	}

	//Calculate target roll based on turn direction 
	float targetRoll = TurnDirection * MaxRollAngle;

	//Interpolate current roll toward target roll
	CurrentRoll = FMath::FInterpTo(CurrentRoll, targetRoll, DeltaTime, RollSpeed);

	//Set the roll (X-axis Rotation) of the actor
	FRotator rotation = GetActorRotation();
	rotation.Roll = CurrentRoll;
	SetActorRotation(rotation);

	if (AltitudeDirection != 0) {
		FVector UpVector = GetActorUpVector();

		Acceleration = Acceleration + UpVector * AltitudeDirection * ThrustStrength;
	}

	//Calculate target pitch based on altitude direction
	float targetPitch = AltitudeDirection * MaxPitchAngle;

	//Interpolate current roll toward target roll
	CurrentPitch = FMath::FInterpTo(CurrentPitch, targetPitch, DeltaTime, PitchSpeed);

	rotation = GetActorRotation();
	rotation.Pitch = CurrentPitch;
	SetActorRotation(rotation);

	//Add acceleration if thrusting
	if (bIsThrusting)
	{
		FVector Forward = GetActorForwardVector();
		Acceleration = Acceleration + Forward * ThrustStrength;
	}


	Friction = bIsBraking ? BrakingFriction : Friction;

	Velocity = Velocity + Acceleration * DeltaTime;
	// Apply friction (drag)
	Velocity = Velocity - (Velocity * Friction);

	// Cap the speed to MaxSpeed
	if (Velocity.Size() > MaxSpeed)
	{
		Velocity = Velocity.GetClampedToMaxSize(MaxSpeed);
	}

	SpeedText = FString::FromInt(Velocity.Size());
	GEngine->AddOnScreenDebugMessage(1, 0.2f, FColor::Blue, SpeedText);

	// Move the ship using the current velocity
	AddActorWorldOffset(Velocity * DeltaTime, true);
}

// Called to bind functionality to input
void AAEESpaceShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Bind W Key for Thrust
	PlayerInputComponent->BindKey(EKeys::W, IE_Pressed, this, &AAEESpaceShip::OnThrustPressed);
	PlayerInputComponent->BindKey(EKeys::W, IE_Released, this, &AAEESpaceShip::OnThrustReleased);

	//Bind Left and Right keys for turning
	PlayerInputComponent->BindKey(EKeys::Left, IE_Pressed, this, &AAEESpaceShip::OnTurnLeftPressed);
	PlayerInputComponent->BindKey(EKeys::Right, IE_Pressed, this, &AAEESpaceShip::OnTurnRightPressed);

	//Stop turning when Left or Right is released
	PlayerInputComponent->BindKey(EKeys::Left, IE_Released, this, &AAEESpaceShip::OnTurnReleased);
	PlayerInputComponent->BindKey(EKeys::Right, IE_Released, this, &AAEESpaceShip::OnTurnReleased);

	//Bind Up and Down for altitude
	PlayerInputComponent->BindKey(EKeys::Up, IE_Pressed, this, &AAEESpaceShip::OnAltitudeUpPressed);
	PlayerInputComponent->BindKey(EKeys::Down, IE_Pressed, this, &AAEESpaceShip::OnAltitudeDownPressed);

	//Stop rising/falling when Up or Down is released
	PlayerInputComponent->BindKey(EKeys::Up, IE_Released, this, &AAEESpaceShip::OnAltitudeReleased);
	PlayerInputComponent->BindKey(EKeys::Down, IE_Released, this, &AAEESpaceShip::OnAltitudeReleased);

	//Bind S Key for Brake
	PlayerInputComponent->BindKey(EKeys::S, IE_Pressed, this, &AAEESpaceShip::OnBrakePressed);
	PlayerInputComponent->BindKey(EKeys::S, IE_Released, this, &AAEESpaceShip::OnBrakeReleased);

	PlayerInputComponent->BindKey(EKeys::Q, IE_Pressed, this, &AAEESpaceShip::OnFireGun1Pressed);
	PlayerInputComponent->BindKey(EKeys::E, IE_Pressed, this, &AAEESpaceShip::OnFireGun2Pressed);
}

void AAEESpaceShip::OnThrustPressed() {
	if (!bCanReceiveInput) {
		return;
	}

	bIsThrusting = true;

	if (AudioComponent) {
		AudioComponent->FadeIn(2.0f, 1.0f);
	}
}

void AAEESpaceShip::OnThrustReleased() {
	bIsThrusting = false;
	AudioComponent->FadeOut(2.0f, 0.0f);
}

void AAEESpaceShip::OnTurnLeftPressed() {
	if (!bCanReceiveInput) {
		return;
	}

	TurnDirection = -1;
}

void AAEESpaceShip::OnTurnRightPressed() {
	if (!bCanReceiveInput) {
		return;
	}

	TurnDirection = 1;
}

void AAEESpaceShip::OnTurnReleased() {
	TurnDirection = 0;
}

void AAEESpaceShip::SetInputEnabled(bool bIsEnabled) {
	bCanReceiveInput = bIsEnabled;
}

void AAEESpaceShip::OnBrakePressed() {
	if (!bCanReceiveInput) {
		return;
	}

	bIsBraking = true;
}

void AAEESpaceShip::OnBrakeReleased() {
	bIsBraking = false;
}

void AAEESpaceShip::OnAltitudeUpPressed() {
	if (!bCanReceiveInput) {
		return;
	}

	AltitudeDirection = 1;
}

void AAEESpaceShip::OnAltitudeDownPressed() {
	if (!bCanReceiveInput) {
		return;
	}

	AltitudeDirection = -1;
}

void AAEESpaceShip::OnAltitudeReleased() {
	AltitudeDirection = 0;
}

void AAEESpaceShip::OnFirePressed(FName& SocketName) {

	if (ProjectileClass)
	{

		FVector SpawnLocation;

		const UStaticMeshSocket* MuzzleSocket = StaticMesh->GetSocketByName(SocketName);

		if (MuzzleSocket) {
			FTransform SocketTransform;

			//store the transform of the socket in sockettransform
			MuzzleSocket->GetSocketTransform(SocketTransform, StaticMesh);
			SpawnLocation = SocketTransform.GetLocation();  //then get the socket location
		}
		else {
			SpawnLocation = GetActorLocation() + GetActorForwardVector() * 2000;
		}


		UWorld* World = GetWorld();

		if (World)
		{
			FActorSpawnParameters SpawnParameters;

			//Identify this ship as responsibile for the damage dealt by the projectile
			SpawnParameters.Instigator = this;

			//Ensures the projectile spawns even if it's currently overlapping another object
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			//Instantiate the Projectile:
			World->SpawnActor<AEEProjectile>(ProjectileClass, SpawnLocation, GetActorRotation(), SpawnParameters);
			//(The type to spawn, where to spawn it (the ship's location + a bit), matches the ship's orientation, pass our custom rules into the spawn

		}

	}

}

void AAEESpaceShip::OnFireGun1Pressed() {
	OnFirePressed(LLMuzzleSocketName);
}

void AAEESpaceShip::OnFireGun2Pressed() {
	OnFirePressed(LRMuzzleSocketName);
}

float AAEESpaceShip::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
	float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Damage Applied: %f"), ActualDamage));

	return ActualDamage;
}