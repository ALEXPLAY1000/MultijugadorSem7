// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiSem7Parcial1GameMode.h"
#include "MultiSem7Parcial1Character.h"
#include "UObject/ConstructorHelpers.h"

AMultiSem7Parcial1GameMode::AMultiSem7Parcial1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
