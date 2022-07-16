// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPlayerController.h"

void ARTSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &ARTSPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ARTSPlayerController::MoveRight);
}

void ARTSPlayerController::MoveForward(float Axis)
{
	APawn* MyPawn = GetPawn();
	if (MyPawn)
	{
		MyPawn->AddActorLocalOffset(FVector(MovementSpeed * Axis, 0.0f, 0.0f), true);
	}
}

void ARTSPlayerController::MoveRight(float Axis)
{
	APawn* MyPawn = GetPawn();
	if (MyPawn)
	{
		MyPawn->AddActorLocalOffset(FVector(0.0f, MovementSpeed * Axis, 0.0f), true);
	}
}
