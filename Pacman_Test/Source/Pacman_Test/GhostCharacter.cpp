// Fill out your copyright notice in the Description page of Project Settings.

#include "GhostCharacter.h"
#include "Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ENUM_GhostType.h"
#include "Struct_GhostAnimation.h"
#include "PacmanPawn.h"
#include "GhostDestination.h"


// Sets default values
AGhostCharacter::AGhostCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	SpriteFlipBook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("SpriteFlipBook"));
	SpriteFlipBook->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);


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

void AGhostCharacter::BackToNormal()
{
	isDead = false;
	CanBeEaten = false;
	isFlashing = false;
	CanKill = true;

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;

	GetCharacterMovement()->StopActiveMovement();

	CurrentTargetTrigger = NULL;

	FindNextDestination();
}

void AGhostCharacter::EatEvent()
{
	if (CanBeEaten && !isDead)
	{
		GetWorld()->GetTimerManager().ClearTimer(FlashingEventTimerHandle);

		GetWorld()->GetTimerManager().ClearTimer(BackToNormalTimerHandle);

		CanBeEaten = false;
		isDead = true;

		//Navigate->SimpleMoveToLocation(GetController(), StartLocation);

		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	}
}

void AGhostCharacter::CanBeEatenEvent()
{
	if (!isDead)
	{
		GetWorld()->GetTimerManager().ClearTimer(FlashingEventTimerHandle);

		GetWorld()->GetTimerManager().ClearTimer(BackToNormalTimerHandle);

		GetCharacterMovement()->MaxWalkSpeed = BlueSpeed;

		CanKill = false;
		CanBeEaten = true;
		isFlashing = false;

		GetWorld()->GetTimerManager().SetTimer
		(
			FlashingEventTimerHandle, this, &AGhostCharacter::FlashingEvent, CanBeEatenTime, false
		);

		RandomMovement();
	}
}

void AGhostCharacter::Reset()
{
	CanBeEaten = true;
	isFlashing = true;

	GetWorld()->GetTimerManager().SetTimer
	(
		DelayBackToNormalTimerHandle, this, &AGhostCharacter::BackToNormal, 2.0f, false
	);

}

void AGhostCharacter::FlashingEvent()
{
	isFlashing = true;

	GetWorld()->GetTimerManager().SetTimer
	(
		BackToNormalTimerHandle, this, &AGhostCharacter::BackToNormal, FlashingTime, false
	);
}

void AGhostCharacter::FindNextDestination()
{
	/*for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->isTaken = false;
	}*/

	if (GhostType::Red)
	{
		ChaseEvent();
	}
	else if (GhostType::Pink)
	{
		AmbushEvent();
	}
	else if (GhostType::Cyan)
	{
		RandomMovement();
	}
	else if (GhostType::Orange)
	{
		RandomMovement();
	}
}

void AGhostCharacter::ResetLocation()
{
	GetWorld()->GetTimerManager().ClearTimer(FlashingEventTimerHandle);

	GetWorld()->GetTimerManager().ClearTimer(BackToNormalTimerHandle);

	SetActorLocation(StartLocation);

	CanKill = false;

	GetCharacterMovement()->MaxWalkSpeed = 0.0f;

	Reset();
}

void AGhostCharacter::AvoidPlayer()
{
}

void AGhostCharacter::RandomMovement()
{
	if (!isDead)
	{
		if (IsValid(CurrentTargetTrigger))
		{
			/*for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
			{
				TargetTriggerArray.Add(ActorItr);
			}*/

			TargetTriggerArray.Remove(CurrentTargetTrigger);
		}
		else
		{
			/*for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
			{
				TargetTriggerArray.Add(ActorItr);

				if(ActorItr->isTaken)
				{
					TargetTriggerArray.Remove(ActorItr);
				}
			}*/

			//int Index = FMath::RandRange(0, (TargetTriggerArray.Max - 1));
			
			//CurrentTargetTrigger = TargetTriggerArray[Index];
			//CurrentTargetTrigger->isTaken = true;

			// AI Move To Syntax
			// AI Move To Fails and isDead
			// Timer handle delay
		}
	}
}

void AGhostCharacter::ChaseEvent()
{
}

void AGhostCharacter::AmbushEvent()
{
}

void AGhostCharacter::RandomBehavior()
{
}
