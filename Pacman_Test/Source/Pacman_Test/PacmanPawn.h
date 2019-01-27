// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/TimelineComponent.h"
#include "PacmanPawn.generated.h"

// Forward Declaration
class APacman_TestGameModeBase;

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
		bool UpPressed = false;

	UPROPERTY()
		bool DownPressed = false;

	UPROPERTY()
		bool LeftPressed = false;

	UPROPERTY()
		bool RightPressed = false;

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

	UPROPERTY(EditAnywhere, Category = "Timeline")
		UTimelineComponent* MoveTimeline;

	UPROPERTY(EditAnywhere, Category = "Timeline")
		UCurveFloat* MoveCurve;

	UPROPERTY(EditAnywhere, Category = "Timeline")
		FVector EndLocation;

	UPROPERTY(EditAnywhere, Category = "Timeline")
		float MoveDistance;

	// Declare delegate function to bind with TimelineFloatReturn()
	FOnTimelineFloat InterpFunction{};

	// Declare delegate function to bind with OnTimelineFinished()
	FOnTimelineEvent TimelineFinish{};

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

	// Collision check
	UFUNCTION()
		bool CheckRightCollision();

	UFUNCTION()
		bool CheckLeftCollision();

	UFUNCTION()
		bool CheckUpCollision();

	UFUNCTION()
		bool CheckDownCollision();

	// Key press check
	UFUNCTION()
		void RightKeyPressed();

	UFUNCTION()
		void LeftKeyPressed();

	UFUNCTION()
		void UpKeyPressed();

	UFUNCTION()
		void DownKeyPressed();

	UFUNCTION()
		void RightKeyReleased();

	UFUNCTION()
		void LeftKeyReleased();

	UFUNCTION()
		void UpKeyReleased();

	UFUNCTION()
		void DownKeyReleased();

	// Key press action
	UFUNCTION()
		void RightKeyAction();

	UFUNCTION()
		void LeftKeyAction();

	UFUNCTION()
		void UpKeyAction();

	UFUNCTION()
		void DownKeyAction();

	UFUNCTION()
		void ResetDoOnce();

	UFUNCTION(Category = "Timeline")
		void TimelineFloatReturn(float value);

	UFUNCTION(Category = "Timeline")
		void OnTimelineFinished();
};
