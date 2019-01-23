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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AGridBlock*> BlocksArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Spacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Score;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Lives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int BonusGhostPoints;

	// Functions and Events
public:

	UFUNCTION()
		FVector WorldToGridLocation(FVector Location);

	UFUNCTION()
		AGridBlock* GetBlockFromGridLocation(int X, int Y);

	UFUNCTION()
		AGridBlock* GetBlockFromWorldLocation(FVector Location);

	UFUNCTION(BlueprintNativeEvent)
		void CreateGrid();

	UFUNCTION(BlueprintNativeEvent)
		void SpawnPacman();

	UFUNCTION(BlueprintNativeEvent)
		void WinEvent(class AActor* DestroyedActor);

};
