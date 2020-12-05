// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyTestMPGameMode.h"
#include "MyTestMPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyTestMPGameMode::AMyTestMPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
