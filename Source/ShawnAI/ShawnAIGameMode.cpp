// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ShawnAIGameMode.h"
#include "ShawnAICharacter.h"
#include "UObject/ConstructorHelpers.h"

AShawnAIGameMode::AShawnAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
