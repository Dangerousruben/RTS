// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RTS_API ARTSPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void SetupInputComponent() override;

	void MoveForward(float Axis);
	void MoveRight(float Axis);

	UPROPERTY(EditDefaultsOnly)
		float MovementSpeed = 30.0f;

};
