// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PaperFlipbook.h"
#include "Struct_GhostAnimation.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FGhostAnimation
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Blue;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Flashing;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* MoveUp;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* MoveDown;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* MoveLeft;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* MoveRight;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Dead_MoveUp;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Dead_MoveDown;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Dead_MoveLeft;

	UPROPERTY(EditAnywhere)
		UPaperFlipbook* Dead_MoveRight;
};