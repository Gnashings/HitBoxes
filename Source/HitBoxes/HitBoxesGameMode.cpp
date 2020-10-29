// Copyright Epic Games, Inc. All Rights Reserved.

#include "HitBoxesGameMode.h"
#include "HitBoxesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHitBoxesGameMode::AHitBoxesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
