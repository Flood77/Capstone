// Copyright Epic Games, Inc. All Rights Reserved.

#include "CapstoneGameMode.h"
#include "CapstoneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACapstoneGameMode::ACapstoneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
