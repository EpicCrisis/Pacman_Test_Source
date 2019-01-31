// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "AIController.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundWave.h"
#include "GhostCharacter.generated.h"

// Forward declaration
class APacmanPawn;
class AGhostDestination;
enum GhostType;

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
	// Vulnerable
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* Blue;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* Flashing;
	// Dead
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveUp_Dead;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveDown_Dead;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveLeft_Dead;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveRight_Dead;
	// Red
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveUp_Red;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveDown_Red;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveLeft_Red;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveRight_Red;
	// Pink
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveUp_Pink;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveDown_Pink;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveLeft_Pink;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveRight_Pink;
	// Cyan
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveUp_Cyan;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveDown_Cyan;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveLeft_Cyan;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveRight_Cyan;
	// Orange
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveUp_Orange;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveDown_Orange;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveLeft_Orange;
	UPROPERTY(EditAnywhere, Category = "Flipbook")
		UPaperFlipbook* MoveRight_Orange;

	UPROPERTY(EditAnywhere)
		UPaperFlipbookComponent* SpriteFlipBook;

	UPROPERTY(EditAnywhere)
		UAudioComponent* GhostSound;

	UPROPERTY(EditAnywhere, Category = "GhostSound")
		USoundWave* GhostDeathSound;

	UPROPERTY(EditAnywhere)
		TEnumAsByte<GhostType> GType;

	UPROPERTY(EditAnywhere)
		bool CanKill;

	UPROPERTY(EditAnywhere)
		bool isDead;

	UPROPERTY(EditAnywhere)
		bool CanBeEaten;

	UPROPERTY(EditAnywhere)
		bool isFlashing;

	UPROPERTY(EditAnywhere)
		bool isGhostActive;

	UPROPERTY(EditAnywhere)
		FVector StartLocation;

	UPROPERTY(EditAnywhere)
		FVector TempVelocity;

	UPROPERTY(EditAnywhere)
		FVector AmbushLocation;

	UPROPERTY(EditAnywhere)
		float RedSpeed;

	UPROPERTY(EditAnywhere)
		float PinkSpeed;

	UPROPERTY(EditAnywhere)
		float CyanSpeed;

	UPROPERTY(EditAnywhere)
		float OrangeSpeed;

	UPROPERTY(EditAnywhere)
		float CurrentSpeed;

	UPROPERTY(EditAnywhere)
		float BlueSpeed;

	UPROPERTY(EditAnywhere)
		float AvoidanceDistance;

	UPROPERTY(EditAnywhere)
		float CanBeEatenTime;

	UPROPERTY(EditAnywhere)
		float FlashingTime;

	UPROPERTY(EditAnywhere)
		float CurrentAmbushDistance;

	UPROPERTY(EditAnywhere)
		FTimerHandle FlashingEventTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle BackToNormalTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle DelayBackToNormalTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle LoadLevelTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle CheckChaseDeathTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle CheckAmbushDeathTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle CheckAmbushAgainTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle CheckRandomDeathTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle ActivatePinkTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle ActivateCyanTimerHandle;

	UPROPERTY(EditAnywhere)
		FTimerHandle ActivateOrangeTimerHandle;

	UPROPERTY(EditAnywhere)
		APacmanPawn* PacmanPlayer;

	UPROPERTY(EditAnywhere)
		AGhostDestination* CurrentTargetTrigger;

	UPROPERTY(EditAnywhere)
		TArray<AGhostDestination*> TargetTriggerArray;

	// Functions and Events
public:
	UFUNCTION()
		void UpdateGhostAnimations();

	UFUNCTION()
		void IsWithinAmbushDistance();

	UFUNCTION()
		void BackToNormal();

	UFUNCTION()
		void EatEvent();

	UFUNCTION()
		void CanBeEatenEvent();

	UFUNCTION()
		void Reset();

	UFUNCTION()
		void FlashingEvent();

	UFUNCTION()
		void FindNextDestination();

	UFUNCTION()
		void ResetLocation();

	UFUNCTION()
		void AvoidPlayer();

	UFUNCTION()
		void RandomMovement();

	UFUNCTION()
		void ChaseEvent();

	UFUNCTION()
		void AmbushEvent();

	UFUNCTION()
		void RandomBehavior();

	UFUNCTION()
		void ActivatePink();

	UFUNCTION()
		void ActivateCyan();

	UFUNCTION()
		void ActivateOrange();

};