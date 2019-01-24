// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Forward declaration
class AGridBlock;

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GridBlock.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GhostCharacter.h"
#include "GhostDestination.h"
#include "Pacman_TestGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class PACMAN_TEST_API APacman_TestGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APacman_TestGameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Variables and References
public:
	UPROPERTY(EditAnywhere)
		TArray<AGridBlock*> BlocksArray;

	UPROPERTY(EditAnywhere)
		int MaxX;

	UPROPERTY(EditAnywhere)
		int MaxY;

	UPROPERTY(EditAnywhere)
		float Spacing;

	UPROPERTY(EditAnywhere)
		int Score;

	UPROPERTY(EditAnywhere)
		int Lives;

	UPROPERTY(EditAnywhere)
		int BonusGhostPoints;

	UPROPERTY(EditAnywhere)
		int TotalDots;

	UPROPERTY(EditAnywhere)
		int EatenDots;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class APawn> PacPlayer;

	// Functions and Events
public:

	UFUNCTION()
		FVector WorldToGridLocation(FVector Location);

	UFUNCTION()
		AGridBlock* GetBlockFromGridLocation(int X, int Y);

	UFUNCTION()
		AGridBlock* GetBlockFromWorldLocation(FVector Location);

	UFUNCTION()
		void WinEvent();

	UFUNCTION(BlueprintNativeEvent)
		void CreateGrid();

	UFUNCTION(BlueprintNativeEvent)
		void SpawnPacman();

};
