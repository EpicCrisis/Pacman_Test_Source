// Fill out your copyright notice in the Description page of Project Settings.

#include "GhostCharacter.h"
#include "Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "PacmanPawn.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "GhostDestination.h"
#include "ENUM_GhostType.h"


// Sets default values
AGhostCharacter::AGhostCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	SpriteFlipBook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("SpriteFlipBook"));
	SpriteFlipBook->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	NormalSpeed = 360.0f;
	BlueSpeed = 260.0f;
	AvoidanceDistance = 100.0f;
	CanBeEatenTime = 6.0f;
	FlashingTime = 3.0f;
	CurrentAmbushDistance = 200.0f;
}

// Called when the game starts or when spawned
void AGhostCharacter::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	BackToNormal();

	if (GType == GhostType::Red)
	{
		SpriteFlipBook->SetFlipbook(MoveUp_Red);
	}
	else if (GType == GhostType::Pink)
	{
		SpriteFlipBook->SetFlipbook(MoveUp_Pink);
	}
	else if (GType == GhostType::Cyan)
	{
		SpriteFlipBook->SetFlipbook(MoveUp_Cyan);
	}
	else
	{
		SpriteFlipBook->SetFlipbook(MoveUp_Orange);
	}
}

// Called every frame
void AGhostCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UpdateGhostAnimations();
}

// Called to bind functionality to input
void AGhostCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGhostCharacter::UpdateGhostAnimations()
{
	if (CanBeEaten)
	{
		if (isFlashing)
		{
			SpriteFlipBook->SetFlipbook(Flashing);
		}
		else
		{
			SpriteFlipBook->SetFlipbook(Blue);
		}
	}
	else
	{
		TempVelocity = GetVelocity();

		// If moving vertically
		if (FMath::Abs(TempVelocity.Y) > GetCharacterMovement()->GetMaxSpeed() - 50.0f)
		{
			// If moving up
			if (TempVelocity.Y < 0.0f)
			{
				if (isDead)
				{
					SpriteFlipBook->SetFlipbook(MoveUp_Dead);
				}
				else
				{
					if (GType == GhostType::Red)
					{
						SpriteFlipBook->SetFlipbook(MoveUp_Red);
					}
					else if (GType == GhostType::Pink)
					{
						SpriteFlipBook->SetFlipbook(MoveUp_Pink);
					}
					else if (GType == GhostType::Cyan)
					{
						SpriteFlipBook->SetFlipbook(MoveUp_Cyan);
					}
					else
					{
						SpriteFlipBook->SetFlipbook(MoveUp_Orange);
					}
				}
			}
			// If moving down
			else
			{
				if (isDead)
				{
					SpriteFlipBook->SetFlipbook(MoveDown_Dead);
				}
				else
				{
					if (GType == GhostType::Red)
					{
						SpriteFlipBook->SetFlipbook(MoveDown_Red);
					}
					else if (GType == GhostType::Pink)
					{
						SpriteFlipBook->SetFlipbook(MoveDown_Pink);
					}
					else if (GType == GhostType::Cyan)
					{
						SpriteFlipBook->SetFlipbook(MoveDown_Cyan);
					}
					else
					{
						SpriteFlipBook->SetFlipbook(MoveDown_Orange);
					}
				}
			}
		}
		else
		{
			// If moving left
			if (TempVelocity.X < 0.0f)
			{
				if (isDead)
				{
					SpriteFlipBook->SetFlipbook(MoveLeft_Dead);
				}
				else
				{
					if (GType == GhostType::Red)
					{
						SpriteFlipBook->SetFlipbook(MoveLeft_Red);
					}
					else if (GType == GhostType::Pink)
					{
						SpriteFlipBook->SetFlipbook(MoveLeft_Pink);
					}
					else if (GType == GhostType::Cyan)
					{
						SpriteFlipBook->SetFlipbook(MoveLeft_Cyan);
					}
					else
					{
						SpriteFlipBook->SetFlipbook(MoveLeft_Orange);
					}
				}
			}
			// If moving right
			else
			{
				if (isDead)
				{
					SpriteFlipBook->SetFlipbook(MoveRight_Dead);
				}
				else
				{
					if (GType == GhostType::Red)
					{
						SpriteFlipBook->SetFlipbook(MoveRight_Red);
					}
					else if (GType == GhostType::Pink)
					{
						SpriteFlipBook->SetFlipbook(MoveRight_Pink);
					}
					else if (GType == GhostType::Cyan)
					{
						SpriteFlipBook->SetFlipbook(MoveRight_Cyan);
					}
					else
					{
						SpriteFlipBook->SetFlipbook(MoveRight_Orange);
					}
				}
			}
		}
	}
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
	for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		if (ActorItr)
		{
			ActorItr->isTaken = false;
		}
	}

	if (GType == GhostType::Red)
	{
		//ChaseEvent();
	}
	else if (GType == GhostType::Pink)
	{
		//AmbushEvent();
	}
	else if (GType == GhostType::Cyan)
	{
		//RandomMovement();
	}
	else if (GType == GhostType::Orange)
	{
		//RandomMovement();
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
			for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
			{
				TargetTriggerArray.Add(*ActorItr);
			}

			TargetTriggerArray.Remove(CurrentTargetTrigger);
		}
		else
		{
			for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
			{
				if (!ActorItr->isTaken)
				{
					TargetTriggerArray.Add(*ActorItr);
				}
			}

			int Index = FMath::RandRange(0, TargetTriggerArray.Max() - 1);

			CurrentTargetTrigger = TargetTriggerArray[Index];
			CurrentTargetTrigger->isTaken = true;

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
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	APacmanPawn* PlayerPawn = Cast<APacmanPawn>(Pawn);

	if (PlayerPawn)
	{
		PacmanPlayer = PlayerPawn;

		int xLoc;
		int yLoc;
		int xMulti;
		int yMulti;
		int xNextLoc;
		int yNextLoc;

		xLoc = PacmanPlayer->GetActorLocation().X;
		yLoc = PacmanPlayer->GetActorLocation().Y;
		xMulti = PacmanPlayer->DirectionX * CurrentAmbushDistance;
		yMulti = PacmanPlayer->DirectionY * CurrentAmbushDistance;
		xNextLoc = xLoc + xMulti;
		yNextLoc = yLoc + yMulti;

		AmbushLocation = FVector(xNextLoc, yNextLoc, GetActorLocation().Z);


	}
}

void AGhostCharacter::RandomBehavior()
{
}
