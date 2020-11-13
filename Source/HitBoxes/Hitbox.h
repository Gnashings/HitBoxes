#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hitbox.generated.h"

// Different Types of Hitbox States
UENUM(BlueprintType)
enum class EHitboxEnum : uint8
{
	HB_PROXIMITY UMETA(DisplayName = "Proximity"), // Used to sense what attack is hitting it before it hits
	HB_STRIKE UMETA(DisplayName = "Strike"), // Used when damage is being dealt and what hitbox is being hit
	HB_HURTBOX UMETA(DisplayName = "Hurtbox") // Used as a collider for the strike hitbox
};

UCLASS()
class HITBOXES_API AHitbox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHitbox();

	// Notifies the HitboxActorBP that the hitbox is ready to be drawn
	UFUNCTION(BlueprintCallable)
		void TriggerVisualizeHitbox();

	// Draws the hitbox on screen. (Used in Debug or Practice Mode)
	UFUNCTION(BlueprintImplementableEvent)
		void VisualizeHitbox();

	// The hitbox enum instance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
		EHitboxEnum hitboxType;

	// The location where we spawn the hitbox
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
		FVector hitboxLocation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
