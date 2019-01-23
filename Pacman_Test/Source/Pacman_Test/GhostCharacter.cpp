// Fill out your copyright notice in the Description page of Project Settings.

#include "GhostCharacter.h"


// Sets default values
AGhostCharacter::AGhostCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGhostCharacter::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	BackToNormal();

	if (GhostType::Red)
	{
		SetRedAnimations();
	}
	else if (GhostType::Pink)
	{
		SetPinkAnimations();
	}
	else if (GhostType::Cyan)
	{
		SetCyanAnimations();
	}
	else
	{
		SetOrangeAnimations();
	}
}

// Called every frame
void AGhostCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGhostCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGhostCharacter::SetRedAnimations()
{
}

void AGhostCharacter::SetPinkAnimations()
{
}

void AGhostCharacter::SetCyanAnimations()
{
}

void AGhostCharacter::SetOrangeAnimations()
{
}

void AGhostCharacter::UpdateGhostAnimations()
{
}

void AGhostCharacter::CheckIfCanBeEaten()
{
}

void AGhostCharacter::StoringTempVelocity()
{
}

void AGhostCharacter::CanBeEatenAnimations()
{
}

void AGhostCharacter::CheckMovingVertically()
{
}

void AGhostCharacter::CheckMovingUp()
{
}

void AGhostCharacter::CheckMovingLeft()
{
}

void AGhostCharacter::MoveUpAnimation()
{
}

void AGhostCharacter::MoveDownAnimation()
{
}

void AGhostCharacter::MoveLeftAnimation()
{
}

void AGhostCharacter::MoveRightAnimation()
{
}

void AGhostCharacter::IsWithinAmbushDistance()
{
}

void AGhostCharacter::BackToNormal_Implementation()
{
}

void AGhostCharacter::EatEvent_Implementation()
{
}

void AGhostCharacter::Reset_Implementation()
{
}

void AGhostCharacter::FlashingEvent_Implementation()
{
}

void AGhostCharacter::FindNextDestination_Implementation()
{
}

void AGhostCharacter::ResetLocation_Implementation()
{
}

void AGhostCharacter::AvoidPlayer_Implementation()
{
}

void AGhostCharacter::RandomMovement_Implementation()
{
}

void AGhostCharacter::ChaseEvent_Implementation()
{
}

void AGhostCharacter::AmbushEvent_Implementation()
{
}

void AGhostCharacter::RandomBehavior_Implementation()
{
}
