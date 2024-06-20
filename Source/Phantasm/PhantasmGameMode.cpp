// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhantasmGameMode.h"
#include "PhantasmCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhantasmGameMode::APhantasmGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
