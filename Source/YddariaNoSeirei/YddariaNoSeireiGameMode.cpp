// Copyright Epic Games, Inc. All Rights Reserved.

#include "YddariaNoSeireiGameMode.h"
#include "YddariaNoSeireiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYddariaNoSeireiGameMode::AYddariaNoSeireiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
