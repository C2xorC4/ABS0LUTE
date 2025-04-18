// Copyright Epic Games, Inc. All Rights Reserved.

#include "ABS0LUTEGameMode.h"
#include "ABS0LUTECharacter.h"
#include "UObject/ConstructorHelpers.h"

AABS0LUTEGameMode::AABS0LUTEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
