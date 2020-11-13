// Copyright Epic Games, Inc. All Rights Reserved.

#include "HitBoxesCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AHitBoxesCharacter::AHitBoxesCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	playerHealth = 1.0f; // Set player health to 100%

	// Set player attack states to false
	wasAttack1Used = false;
	wasAttack2Used = false;
	wasAttack3Used = false;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AHitBoxesCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHitBoxesCharacter::MoveRight);
	PlayerInputComponent->BindAction("TestDamage", IE_Pressed, this, &AHitBoxesCharacter::TestDamage);

	PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &AHitBoxesCharacter::StartAttack1);
	// Potential options for released attacks
	// PlayerInputComponent->BindAction("Attack1", IE_Released, this, &AHitBoxesCharacter::StartAttack1);
	PlayerInputComponent->BindAction("Attack2", IE_Pressed, this, &AHitBoxesCharacter::StartAttack2);
	PlayerInputComponent->BindAction("Attack3", IE_Pressed, this, &AHitBoxesCharacter::StartAttack3);
	// PlayerInputComponent->BindAction("Attack4", IE_Pressed, this, &AHitBoxesCharacter::StartAttack1);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AHitBoxesCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AHitBoxesCharacter::TouchStopped);
}

void AHitBoxesCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void AHitBoxesCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void AHitBoxesCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

void AHitBoxesCharacter::StartAttack1()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack 1"));
	wasAttack1Used = true;
}

void AHitBoxesCharacter::StartAttack2()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack 2"));
	wasAttack2Used = true;
}

void AHitBoxesCharacter::StartAttack3()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack 3"));
	wasAttack3Used = true;
}

void AHitBoxesCharacter::TestDamage()
{
	TakeDamage(0.10f);
}

void AHitBoxesCharacter::TakeDamage(float damageTaken)
{
	UE_LOG(LogTemp, Warning, TEXT("Damage Taken, %f"), damageTaken);
	playerHealth -= damageTaken;

	if (playerHealth < 0.0f)
	{
		playerHealth = 0.0f;
	}

}


