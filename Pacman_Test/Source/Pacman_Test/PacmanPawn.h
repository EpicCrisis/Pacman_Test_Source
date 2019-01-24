// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Forward Declaration
class APacman_TestGameModeBase;

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "PacmanPawn.generated.h"

UCLASS()
class PACMAN_TEST_API APacmanPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APacmanPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Hard Variables, for condition checking such as DoOnce and Delay.
private:
	UPROPERTY()
		bool DoOnceDead = false;

	UPROPERTY()
		bool DoOnceMove = false;

	UPROPERTY()
		FTimerHandle DelayDeathTimerHandle;

	UPROPERTY()
		FTimerHandle LoadLevelTimerHandle;

	// Variables and References
public:
	UPROPERTY(EditAnywhere)
		USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Sphere;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Box;

	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
		APacman_TestGameModeBase* GameModeRef;

	UPROPERTY(EditAnywhere)
		FVector TempLocation;

	UPROPERTY(EditAnywhere)
		bool isDead;
	
	UPROPERTY(EditAnywhere)
		bool CanChangeDirection;

	UPROPERTY(EditAnywhere)
		int DirectionX;

	UPROPERTY(EditAnywhere)
		int DirectionY;

	UPROPERTY(EditAnywhere)
		int GhostPoints;

	UPROPERTY(EditAnywhere)
		FTimerHandle EatBonusTimerHandle;

	UPROPERTY(EditAnywhere)
		float BonusPointsTime;

	// Functions and Events
public:
	UFUNCTION()
		void ActorDestroyed(AActor* DestroyedActor);

	UFUNCTION()
		void ActorOverlap(class AActor* ThisActor, AActor* OtherActor);

	UFUNCTION()
		void GetGhostPoints();

	UFUNCTION()
		void EatGhostEvent();

	UFUNCTION()
		void ResetBonusPoints();

	UFUNCTION()
		void CallGameOver();

	UFUNCTION()
		void RestartMap();
};
