// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test1GameMode.h"
#include "Test1PlayerController.h"
#include "Test1Pawn.h"

ATest1GameMode::ATest1GameMode()
{
	// no pawn by default
	DefaultPawnClass = ATest1Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ATest1PlayerController::StaticClass();
}
