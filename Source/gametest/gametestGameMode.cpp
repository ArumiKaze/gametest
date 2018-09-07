// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "gametestGameMode.h"
#include "gametestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgametestGameMode::AgametestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
