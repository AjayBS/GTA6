// Copyright Epic Games, Inc. All Rights Reserved.

#include "GTA6GameMode.h"
#include "GTA6Character.h"
#include "UObject/ConstructorHelpers.h"

AGTA6GameMode::AGTA6GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
