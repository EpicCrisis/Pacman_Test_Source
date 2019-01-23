// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ENUM_GhostType.h"
#include "Struct_GhostAnimation.h"
#include "PacmanPawn.h"
#include "GhostDestination.h"
#include "GhostCharacter.generated.h"

UCLASS()
class PACMAN_TEST_API AGhostCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGhostCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Variables and References
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CanKill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CanBeEaten;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isFlashing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector TempLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector AmbushLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float NormalSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BlueSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float AvoidanceDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CanBeEatenTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlashingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurrentAmbushDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTimerHandle FlashingEventTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTimerHandle BackToNormalTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APacmanPawn* PacmanPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AGhostDestination* CurrentTargetTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AGhostDestination*> TargetTriggerArray;

	// Functions and Events
public:
	UFUNCTION()
		void SetRedAnimations();

	UFUNCTION()
		void SetPinkAnimations();

	UFUNCTION()
		void SetCyanAnimations();

	UFUNCTION()
		void SetOrangeAnimations();

	UFUNCTION()
		void UpdateGhostAnimations();

	UFUNCTION()
		void CheckIfCanBeEaten();

	UFUNCTION()
		void StoringTempVelocity();

	UFUNCTION()
		void CanBeEatenAnimations();

	UFUNCTION()
		void CheckMovingVertically();

	UFUNCTION()
		void CheckMovingUp();

	UFUNCTION()
		void CheckMovingLeft();

	UFUNCTION()
		void MoveUpAnimation();

	UFUNCTION()
		void MoveDownAnimation();

	UFUNCTION()
		void MoveLeftAnimation();

	UFUNCTION()
		void MoveRightAnimation();

	UFUNCTION()
		void IsWithinAmbushDistance();

	UFUNCTION(BlueprintNativeEvent)
		void BackToNormal();

	UFUNCTION(BlueprintNativeEvent)
		void EatEvent();

	UFUNCTION(BlueprintNativeEvent)
		void Reset();

	UFUNCTION(BlueprintNativeEvent)
		void FlashingEvent();

	UFUNCTION(BlueprintNativeEvent)
		void FindNextDestination();

	UFUNCTION(BlueprintNativeEvent)
		void ResetLocation();

	UFUNCTION(BlueprintNativeEvent)
		void AvoidPlayer();

	UFUNCTION(BlueprintNativeEvent)
		void RandomMovement();

	UFUNCTION(BlueprintNativeEvent)
		void ChaseEvent();

	UFUNCTION(BlueprintNativeEvent)
		void AmbushEvent();

	UFUNCTION(BlueprintNativeEvent)
		void RandomBehavior();


};