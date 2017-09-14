// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CastleKeeperGameMode.h"
#include "CastleKeeperPlayerController.h"
#include "CastleKeeperCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACastleKeeperGameMode::ACastleKeeperGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACastleKeeperPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}