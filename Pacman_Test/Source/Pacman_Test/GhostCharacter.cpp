// Fill out your copyright notice in the Description page of Project Settings.

#include "GhostCharacter.h"
#include "Engine.h"
#include "Engine/World.h"
#include "TimerManager.h"
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

	RedSpeed = 340.0f;
	PinkSpeed = 360.0f;
	CyanSpeed = 350.0f;
	OrangeSpeed = 330.0f;
	CurrentSpeed = 0.0f;
	BlueSpeed = 200.0f;
	AvoidanceDistance = 100.0f;
	CanBeEatenTime = 6.0f;
	FlashingTime = 3.0f;
	CurrentAmbushDistance = 200.0f;
	isGhostActive = false;

	// Setting up blueprint asset
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> flashing
	(TEXT("PaperFlipbook'/Game/FlipBooks/Flashing_Flipbook.Flashing_Flipbook'"));
	if (flashing.Succeeded())
	{
		Flashing = flashing.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> blue
	(TEXT("PaperFlipbook'/Game/FlipBooks/Blue.Blue'"));
	if (blue.Succeeded())
	{
		Blue = blue.Object;
	}

	// Default asset for dead //
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveUpDead
	(TEXT("PaperFlipbook'/Game/FlipBooks/Eyes_Up_Flipbook.Eyes_Up_Flipbook'"));
	if (moveUpDead.Succeeded())
	{
		MoveUp_Dead = moveUpDead.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveDownDead
	(TEXT("PaperFlipbook'/Game/FlipBooks/Eyes_Down_Flipbook.Eyes_Down_Flipbook'"));
	if (moveDownDead.Succeeded())
	{
		MoveDown_Dead = moveDownDead.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveLeftDead
	(TEXT("PaperFlipbook'/Game/FlipBooks/Eyes_Left_Flipbook.Eyes_Left_Flipbook'"));
	if (moveLeftDead.Succeeded())
	{
		MoveLeft_Dead = moveLeftDead.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveRightDead
	(TEXT("PaperFlipbook'/Game/FlipBooks/Eyes_Right_Flipbook.Eyes_Right_Flipbook'"));
	if (moveRightDead.Succeeded())
	{
		MoveRight_Dead = moveRightDead.Object;
	}

	// Default asset for red //
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveUpRed
	(TEXT("PaperFlipbook'/Game/FlipBooks/Red_U.Red_U'"));
	if (moveUpRed.Succeeded())
	{
		MoveUp_Red = moveUpRed.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveDownRed
	(TEXT("PaperFlipbook'/Game/FlipBooks/Red_D.Red_D'"));
	if (moveDownRed.Succeeded())
	{
		MoveDown_Red = moveDownRed.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveLeftRed
	(TEXT("PaperFlipbook'/Game/FlipBooks/Red_L.Red_L'"));
	if (moveLeftRed.Succeeded())
	{
		MoveLeft_Red = moveLeftRed.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveRightRed
	(TEXT("PaperFlipbook'/Game/FlipBooks/Red_R.Red_R'"));
	if (moveRightRed.Succeeded())
	{
		MoveRight_Red = moveRightRed.Object;
	}

	// Default asset for pink //
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveUpPink
	(TEXT("PaperFlipbook'/Game/FlipBooks/Pink_U.Pink_U'"));
	if (moveUpPink.Succeeded())
	{
		MoveUp_Pink = moveUpPink.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveDownPink
	(TEXT("PaperFlipbook'/Game/FlipBooks/Pink_D.Pink_D'"));
	if (moveDownPink.Succeeded())
	{
		MoveDown_Pink = moveDownPink.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveLeftPink
	(TEXT("PaperFlipbook'/Game/FlipBooks/Pink_L.Pink_L'"));
	if (moveLeftPink.Succeeded())
	{
		MoveLeft_Pink = moveLeftPink.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveRightPink
	(TEXT("PaperFlipbook'/Game/FlipBooks/Pink_R.Pink_R'"));
	if (moveRightPink.Succeeded())
	{
		MoveRight_Pink = moveRightPink.Object;
	}

	// Default asset for cyan //
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveUpCyan
	(TEXT("PaperFlipbook'/Game/FlipBooks/Cyan_U.Cyan_U'"));
	if (moveUpCyan.Succeeded())
	{
		MoveUp_Cyan = moveUpCyan.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveDownCyan
	(TEXT("PaperFlipbook'/Game/FlipBooks/Cyan_D.Cyan_D'"));
	if (moveDownCyan.Succeeded())
	{
		MoveDown_Cyan = moveDownCyan.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveLeftCyan
	(TEXT("PaperFlipbook'/Game/FlipBooks/Cyan_L.Cyan_L'"));
	if (moveLeftCyan.Succeeded())
	{
		MoveLeft_Cyan = moveLeftCyan.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveRightCyan
	(TEXT("PaperFlipbook'/Game/FlipBooks/Cyan_R.Cyan_R'"));
	if (moveRightCyan.Succeeded())
	{
		MoveRight_Cyan = moveRightCyan.Object;
	}

	// Default asset for orange //
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveUpOrange
	(TEXT("PaperFlipbook'/Game/FlipBooks/Orange_U.Orange_U'"));
	if (moveUpOrange.Succeeded())
	{
		MoveUp_Orange = moveUpOrange.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveDownOrange
	(TEXT("PaperFlipbook'/Game/FlipBooks/Orange_D.Orange_D'"));
	if (moveDownOrange.Succeeded())
	{
		MoveDown_Orange = moveDownOrange.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveLeftOrange
	(TEXT("PaperFlipbook'/Game/FlipBooks/Orange_L.Orange_L'"));
	if (moveLeftOrange.Succeeded())
	{
		MoveLeft_Orange = moveLeftOrange.Object;
	}
	ConstructorHelpers::FObjectFinder<UPaperFlipbook> moveRightOrange
	(TEXT("PaperFlipbook'/Game/FlipBooks/Orange_R.Orange_R'"));
	if (moveRightOrange.Succeeded())
	{
		MoveRight_Orange = moveRightOrange.Object;
	}
}

// Called when the game starts or when spawned
void AGhostCharacter::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	if (GType == GhostType::Red)
	{
		SpriteFlipBook->SetFlipbook(MoveUp_Red);

		isGhostActive = true;
	}
	else if (GType == GhostType::Pink)
	{
		SpriteFlipBook->SetFlipbook(MoveUp_Pink);

		GetWorld()->GetTimerManager().SetTimer
		(
			ActivatePinkTimerHandle, this, &AGhostCharacter::ActivatePink, 4.0f, false
		);
	}
	else if (GType == GhostType::Cyan)
	{
		SpriteFlipBook->SetFlipbook(MoveUp_Cyan);

		GetWorld()->GetTimerManager().SetTimer
		(
			ActivateCyanTimerHandle, this, &AGhostCharacter::ActivateCyan, 8.0f, false
		);
	}
	else
	{
		SpriteFlipBook->SetFlipbook(MoveUp_Orange);

		GetWorld()->GetTimerManager().SetTimer
		(
			ActivateOrangeTimerHandle, this, &AGhostCharacter::ActivateOrange, 12.0f, false
		);
	}

	BackToNormal();
}

// Called every frame
void AGhostCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateGhostAnimations();
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

	if (!isGhostActive)
	{
		GetCharacterMovement()->MaxWalkSpeed = 0.0f;
	}

	if (GType == GhostType::Red)
	{
		if (isGhostActive)
		{
			CurrentSpeed = RedSpeed;
			GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
		}
	}
	else if (GType == GhostType::Pink)
	{
		if (isGhostActive)
		{
			CurrentSpeed = PinkSpeed;
			GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
		}
	}
	else if (GType == GhostType::Cyan)
	{
		if (isGhostActive)
		{
			CurrentSpeed = CyanSpeed;
			GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
		}
	}
	else if (GType == GhostType::Orange)
	{
		if (isGhostActive)
		{
			CurrentSpeed = OrangeSpeed;
			GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
		}
	}

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

		GetCharacterMovement()->StopActiveMovement();

		AAIController* Control = Cast<AAIController>(this->GetController());

		if (Control)
		{
			Control->MoveToLocation(StartLocation, -1.0f, false, true, true, false, 0, false);
		}

		if (GType == GhostType::Red)
		{
			if (isGhostActive)
			{
				CurrentSpeed = RedSpeed;
				GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
			}
		}
		else if (GType == GhostType::Pink)
		{
			if (isGhostActive)
			{
				CurrentSpeed = PinkSpeed;
				GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
			}
		}
		else if (GType == GhostType::Cyan)
		{
			if (isGhostActive)
			{
				CurrentSpeed = CyanSpeed;
				GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
			}
		}
		else if (GType == GhostType::Orange)
		{
			if (isGhostActive)
			{
				CurrentSpeed = OrangeSpeed;
				GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
			}
		}
	}
}

void AGhostCharacter::CanBeEatenEvent()
{
	if (!isDead)
	{
		GetWorld()->GetTimerManager().ClearTimer(FlashingEventTimerHandle);

		GetWorld()->GetTimerManager().ClearTimer(BackToNormalTimerHandle);

		if (isGhostActive)
		{
			CurrentSpeed = BlueSpeed;
			GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;
		}

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
		DelayBackToNormalTimerHandle, this, &AGhostCharacter::BackToNormal, 3.0f, false
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
		AGhostDestination* GPoint = *ActorItr;

		if (GPoint)
		{
			GPoint->isTaken = false;
		}
	}

	if (GType == GhostType::Red)
	{
		//RandomMovement();
		ChaseEvent();
	}
	else if (GType == GhostType::Pink)
	{
		//RandomMovement();
		AmbushEvent();
	}
	else if (GType == GhostType::Cyan)
	{
		RandomMovement();
	}
	else if (GType == GhostType::Orange)
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

	isGhostActive = false;

	GetCharacterMovement()->MaxWalkSpeed = 0.0f;

	if (GType == GhostType::Red)
	{
		isGhostActive = true;
	}
	else if (GType == GhostType::Pink)
	{
		GetWorld()->GetTimerManager().ClearTimer(ActivatePinkTimerHandle);

		GetWorld()->GetTimerManager().SetTimer
		(
			ActivatePinkTimerHandle, this, &AGhostCharacter::ActivatePink, 4.0f, false
		);
	}
	else if (GType == GhostType::Cyan)
	{
		GetWorld()->GetTimerManager().ClearTimer(ActivateCyanTimerHandle);

		GetWorld()->GetTimerManager().SetTimer
		(
			ActivateCyanTimerHandle, this, &AGhostCharacter::ActivateCyan, 8.0f, false
		);
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(ActivateOrangeTimerHandle);

		GetWorld()->GetTimerManager().SetTimer
		(
			ActivateOrangeTimerHandle, this, &AGhostCharacter::ActivateOrange, 12.0f, false
		);
	}

	Reset();
}

void AGhostCharacter::AvoidPlayer()
{
}

void AGhostCharacter::RandomMovement()
{
	if (CurrentTargetTrigger)
	{
		CurrentTargetTrigger->isTaken = false;

		CurrentTargetTrigger = NULL;
	}

	int Index = FMath::RandRange(0, TargetTriggerArray.Num() - 1);

	CurrentTargetTrigger = TargetTriggerArray[Index];

	CurrentTargetTrigger->isTaken = true;

	GetCharacterMovement()->StopActiveMovement();

	AAIController* Control = Cast<AAIController>(this->GetController());

	if (Control)
	{
		Control->MoveToActor(CurrentTargetTrigger, -1.0f, false, true, false, 0, false);
	}

	// AI Move To Syntax
	// AI Move To Fails and isDead
	// Timer handle delay
}

void AGhostCharacter::ChaseEvent()
{
	AActor* FollowActor = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	GetCharacterMovement()->StopActiveMovement();

	AAIController* Control = Cast<AAIController>(this->GetController());

	if (!CanKill)
	{
		RandomMovement();
	}
	else if (Control)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, "Chase Pacman!");

		Control->MoveToActor(FollowActor, -1.0f, false, true, false, 0, false);
	}
}

void AGhostCharacter::AmbushEvent()
{
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	APacmanPawn* PlayerPawn = Cast<APacmanPawn>(Pawn);

	if (!CanKill)
	{
		RandomMovement();
	}
	else if (PlayerPawn)
	{
		PacmanPlayer = PlayerPawn;

		int xLoc = PacmanPlayer->TempLocation.X;
		int yLoc = PacmanPlayer->TempLocation.Y;
		int xMulti = PacmanPlayer->DirectionX * CurrentAmbushDistance;
		int yMulti = PacmanPlayer->DirectionY * CurrentAmbushDistance;
		int xNextLoc = xLoc + xMulti;
		int yNextLoc = yLoc + yMulti;

		AmbushLocation = FVector(xNextLoc, yNextLoc, GetActorLocation().Z);

		AActor* FollowActor = UGameplayStatics::GetPlayerController(GetWorld(), 0);

		AAIController* Control = Cast<AAIController>(this->GetController());

		if (Control)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, "Ambush Pacman!");

			Control->MoveToLocation(AmbushLocation, -1.0f, false, true, true, false, 0, false);

			GetWorld()->GetTimerManager().SetTimer
			(
				CheckAmbushAgainTimerHandle, this, &AGhostCharacter::AmbushEvent, 1.0f, false
			);
		}
	}
}

void AGhostCharacter::RandomBehavior()
{
}

void AGhostCharacter::ActivatePink()
{
	isGhostActive = true;
	CurrentSpeed = PinkSpeed;

	if (!CanBeEaten)
	{
		BackToNormal();
	}
}

void AGhostCharacter::ActivateCyan()
{
	isGhostActive = true;
	CurrentSpeed = CyanSpeed;

	if (!CanBeEaten)
	{
		BackToNormal();
	}
}

void AGhostCharacter::ActivateOrange()
{
	isGhostActive = true;
	CurrentSpeed = OrangeSpeed;

	if (!CanBeEaten)
	{
		BackToNormal();
	}
}
