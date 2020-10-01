// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "LiberationArmyGameMode.h"
#include "LiberationArmyHUD.h"
#include "LiberationArmyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALiberationArmyGameMode::ALiberationArmyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALiberationArmyHUD::StaticClass();
}
