// Copyright Epic Games, Inc. All Rights Reserved.

#include "StampGameMode.h"
#include "StampPlayerController.h"
#include "StampCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStampGameMode::AStampGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AStampPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}