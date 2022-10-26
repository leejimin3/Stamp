// Copyright Epic Games, Inc. All Rights Reserved.

#include "StampPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "StampCharacter.h"
#include "Engine/World.h"

AStampPlayerController::AStampPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

}

void AStampPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	if(bInputPressed)
	{
		FollowTime += DeltaTime;

		// Look for the touch location
		FVector HitLocation = FVector::ZeroVector;
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, true, Hit);
		HitLocation = Hit.Location;

		// Direct the Pawn towards that location
		APawn* const MyPawn = GetPawn();
		if(MyPawn)
		{
			FVector WorldDirection = (HitLocation - MyPawn->GetActorLocation()).GetSafeNormal();
			MyPawn->AddMovementInput(WorldDirection, 1.f, false);
		}
	}
	else
	{
		FollowTime = 0.f;
	}
}

void AStampPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &AStampPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &AStampPlayerController::OnSetDestinationReleased);

}

void AStampPlayerController::OnSetDestinationPressed()
{
	// We flag that the input is being pressed
	bInputPressed = true;
	// Just in case the character was moving because of a previous short press we stop it
	StopMovement();
}

void AStampPlayerController::OnSetDestinationReleased()
{
	//Make Object TArray Type
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;

	//Insert Custom Type "Human"
	ObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery7);
	
	// Player is no longer pressing the input
	bInputPressed = false;

	// If it was a short press
	if(FollowTime <= ShortPressThreshold)
	{
		// We look for the location in the world where the player has pressed the input
		FVector HitLocation = FVector::ZeroVector;
		FHitResult Hit;
		bool bHitSomethinglist = GetHitResultUnderCursorForObjects(ObjectTypes,true, Hit);


		// If Hit Something in the list, Move to actor. else, you move to hit location.
		if(bHitSomethinglist == 1)
		{
			UAIBlueprintHelperLibrary::SimpleMoveToActor(this, Hit.GetActor());
		}
		else
		{
			GetHitResultUnderCursor(ECC_Visibility, true, Hit);
			HitLocation = Hit.Location;
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, HitLocation);
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, HitLocation, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
		}
		// We move there and spawn some particles
		
	}
}