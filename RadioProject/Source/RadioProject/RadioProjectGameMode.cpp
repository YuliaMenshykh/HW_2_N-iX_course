// Copyright Epic Games, Inc. All Rights Reserved.

#include "RadioProjectGameMode.h"
#include "RadioProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARadioProjectGameMode::ARadioProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
