// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HitBoxesCharacter.generated.h"

UCLASS(config=Game)
class AHitBoxesCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	void StartAttack1();
	void StartAttack2();
	void StartAttack3();
	void TestDamage();
	void TakeDamage(float damageTaken);
	
	/** Sets a Health Variable that can be Edited in Blueprints */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = "true"))
	float playerHealth;

	/** Did the player use Attack 1? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	bool wasAttack1Used;

	/** Did the player use Attack 2? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	bool wasAttack2Used;

	/** Did the player use Attack 3? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	bool wasAttack3Used;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface


public:
	AHitBoxesCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
