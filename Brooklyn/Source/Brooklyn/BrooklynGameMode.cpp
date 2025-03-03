// Copyright Epic Games, Inc. All Rights Reserved.

#include "BrooklynGameMode.h"
#include "BrooklynCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABrooklynGameMode::ABrooklynGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
