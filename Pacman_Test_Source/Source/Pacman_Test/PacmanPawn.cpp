// Fill out your copyright notice in the Description page of Project Settings.

#include "PacmanPawn.h"
#include "Pacman_TestGameModeBase.h"
#include "Engine/World.h"
#include "GhostCharacter.h"
#include "GridBlock.h"

// Sets default values
APacmanPawn::APacmanPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	CanChangeDirection = true;
	GhostPoints = 200;
	BonusPointsTime = 4.0f;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SceneRoot->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	RootComponent = SceneRoot;

	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	Sphere->AttachToComponent(SceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetBoxExtent(FVector(32.0f, 32.0f, 50.0f), true);
	Box->AttachToComponent(SceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetAbsolute(true, true, true);
	Camera->SetRelativeLocation(FVector(1100.0f, 1050.0f, 2000.0f));
	Camera->SetRelativeRotation(FRotator(-90.0f, -90.0f, 0.0f));
	Camera->AttachToComponent(SceneRoot, FAttachmentTransformRules::KeepWorldTransform);

	MoveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MoveTimeline"));

	InterpFunction.BindUFunction(this, FName("TimelineFloatReturn"));
	TimelineFinish.BindUFunction(this, FName("OnTimelineFinished"));

	MoveDistance = 100.0f;
}

// Called when the game starts or when spawned
void APacmanPawn::BeginPlay()
{
	Super::BeginPlay();

	OnDestroyed.AddDynamic(this, &APacmanPawn::ActorDestroyed);

	isDead = false;

	GameModeRef = (APacman_TestGameModeBase *)GetWorld()->GetAuthGameMode();

	MoveTimeline->AddInterpFloat(MoveCurve, InterpFunction, FName("Alpha"));
	MoveTimeline->SetTimelineFinishedFunc(TimelineFinish);
}

// Called every frame
void APacmanPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isDead)
	{
		if (!DoOnceDead)
		{
			DoOnceDead = true;

			GameModeRef->Lives -= 1;

			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, "You Died!");

			GetWorld()->GetTimerManager().SetTimer
			(
				DelayDeathTimerHandle, this, &APacmanPawn::CallGameOver, 2.0f, false
			);
		}
	}
	else
	{
		if (!DoOnceMove)
		{
			DoOnceMove = true;

			TempLocation = GetActorLocation();

			if (CheckRightCollision())
			{
				DirectionX = 0;
			}
			else if (CheckLeftCollision())
			{
				DirectionX = 0;
			}
			else if (CheckUpCollision())
			{
				DirectionY = 0;
			}
			else if (CheckDownCollision())
			{
				DirectionY = 0;
			}

			if (RightPressed)
			{
				RightKeyAction();
			}
			if (LeftPressed)
			{
				LeftKeyAction();
			}
			if (UpPressed)
			{
				UpKeyAction();
			}
			if (DownPressed)
			{
				DownKeyAction();
			}

			if (DirectionX != 0 || DirectionY != 0)
			{
				if (MoveCurve)
				{
					float xMove = DirectionX * MoveDistance;
					float yMove = DirectionY * MoveDistance;

					EndLocation = FVector
					(
						TempLocation.X + xMove, TempLocation.Y + yMove, TempLocation.Z
					);

					MoveTimeline->SetLooping(false);
					MoveTimeline->SetIgnoreTimeDilation(true);

					MoveTimeline->PlayFromStart();
				}
			}
			else
			{
				ResetDoOnce();
			}
		}
	}

}

// Called to bind functionality to input
void APacmanPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("PressW", IE_Pressed, this, &APacmanPawn::UpKeyPressed);
	PlayerInputComponent->BindAction("PressS", IE_Pressed, this, &APacmanPawn::DownKeyPressed);
	PlayerInputComponent->BindAction("PressA", IE_Pressed, this, &APacmanPawn::LeftKeyPressed);
	PlayerInputComponent->BindAction("PressD", IE_Pressed, this, &APacmanPawn::RightKeyPressed);
	
	PlayerInputComponent->BindAction("PressW", IE_Released, this, &APacmanPawn::UpKeyReleased);
	PlayerInputComponent->BindAction("PressS", IE_Released, this, &APacmanPawn::DownKeyReleased);
	PlayerInputComponent->BindAction("PressA", IE_Released, this, &APacmanPawn::LeftKeyReleased);
	PlayerInputComponent->BindAction("PressD", IE_Released, this, &APacmanPawn::RightKeyReleased);
}

void APacmanPawn::ActorDestroyed(AActor * DestroyedActor)
{
	GameModeRef->SpawnPacman();
}

void APacmanPawn::ActorOverlap(AActor * ThisActor, AActor * OtherActor)
{
	AGhostCharacter* Ghost = Cast<AGhostCharacter>(OtherActor);

	if (!isDead && Ghost->CanKill)
	{
		isDead = true;
	}
	else if (Ghost->CanBeEaten)
	{
		GetWorld()->GetTimerManager().ClearTimer(EatBonusTimerHandle);

		GetGhostPoints();

		Ghost->EatEvent();
	}
}

void APacmanPawn::GetGhostPoints()
{
	GameModeRef->Score += GhostPoints;

	GhostPoints *= 2;

	GetWorld()->GetTimerManager().SetTimer(EatBonusTimerHandle, this, &APacmanPawn::ResetBonusPoints, BonusPointsTime, false);
}

void APacmanPawn::EatGhostEvent()
{
	for (TActorIterator<AGhostCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->CanBeEatenEvent();
	}
}

void APacmanPawn::ResetBonusPoints()
{
	GhostPoints = 200.0f;
}

void APacmanPawn::CallGameOver()
{
	if (GameModeRef->Lives <= 0)
	{
		GetWorld()->GetTimerManager().SetTimer
		(
			LoadLevelTimerHandle, this, &APacmanPawn::RestartMap, 5.0f, false
		);

		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "Game Over!");
	}
	else
	{
		for (TActorIterator<AGhostCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			ActorItr->ResetLocation();
		}

		Destroy();
	}
}

void APacmanPawn::RestartMap()
{
	UGameplayStatics::OpenLevel(this, FName("Pacman_Level"), true);

	//UGameplayStatics::OpenLevel(GetWorld(), "Pacman_Level");
}

bool APacmanPawn::CheckRightCollision()
{
	int x;
	int y;
	FVector Loc = GetActorLocation();

	x = GameModeRef->WorldToGridLocation(Loc).X + 1;
	y = GameModeRef->WorldToGridLocation(Loc).Y;

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(x, y);

	if (!Block->isWalkable && DirectionX == 1)
	{
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

bool APacmanPawn::CheckLeftCollision()
{
	int x;
	int y;
	FVector Loc = GetActorLocation();

	x = GameModeRef->WorldToGridLocation(Loc).X - 1;
	y = GameModeRef->WorldToGridLocation(Loc).Y;

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(x, y);

	if (!Block->isWalkable && DirectionX == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool APacmanPawn::CheckUpCollision()
{
	int x;
	int y;
	FVector Loc = GetActorLocation();

	x = GameModeRef->WorldToGridLocation(Loc).X;
	y = GameModeRef->WorldToGridLocation(Loc).Y - 1;

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(x, y);

	if (!Block->isWalkable && DirectionY == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool APacmanPawn::CheckDownCollision()
{
	int x;
	int y;
	FVector Loc = GetActorLocation();

	x = GameModeRef->WorldToGridLocation(Loc).X;
	y = GameModeRef->WorldToGridLocation(Loc).Y + 1;

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(x, y);

	if (!Block->isWalkable && DirectionY == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void APacmanPawn::RightKeyPressed()
{
	RightPressed = true;
}

void APacmanPawn::LeftKeyPressed()
{
	LeftPressed = true;
}

void APacmanPawn::UpKeyPressed()
{
	UpPressed = true;
}

void APacmanPawn::DownKeyPressed()
{
	DownPressed = true;
}

void APacmanPawn::RightKeyReleased()
{
	RightPressed = false;
}

void APacmanPawn::LeftKeyReleased()
{
	LeftPressed = false;
}

void APacmanPawn::UpKeyReleased()
{
	UpPressed = false;
}

void APacmanPawn::DownKeyReleased()
{
	DownPressed = false;
}

void APacmanPawn::RightKeyAction()
{
	int x;
	int y;
	FVector Loc;

	x = GameModeRef->WorldToGridLocation(Loc).X + 1;
	y = GameModeRef->WorldToGridLocation(Loc).Y;

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(x, y);

	if (Block->isWalkable && CanChangeDirection)
	{
		DirectionX = 1;
		DirectionY = 0;
	}
}

void APacmanPawn::LeftKeyAction()
{
	int x;
	int y;
	FVector Loc;

	x = GameModeRef->WorldToGridLocation(Loc).X - 1;
	y = GameModeRef->WorldToGridLocation(Loc).Y;

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(x, y);

	if (Block->isWalkable && CanChangeDirection)
	{
		DirectionX = -1;
		DirectionY = 0;
	}
}

void APacmanPawn::UpKeyAction()
{
	int x;
	int y;
	FVector Loc;

	x = GameModeRef->WorldToGridLocation(Loc).X;
	y = GameModeRef->WorldToGridLocation(Loc).Y - 1;

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(x, y);

	if (Block->isWalkable && CanChangeDirection)
	{
		DirectionX = 0;
		DirectionY = -1;
	}
}

void APacmanPawn::DownKeyAction()
{
	int x;
	int y;
	FVector Loc;

	x = GameModeRef->WorldToGridLocation(Loc).X;
	y = GameModeRef->WorldToGridLocation(Loc).Y + 1;

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(x, y);

	if (Block->isWalkable && CanChangeDirection)
	{
		DirectionX = 0;
		DirectionY = 1;
	}
}

void APacmanPawn::ResetDoOnce()
{
	DoOnceMove = false;
}

void APacmanPawn::TimelineFloatReturn(float value)
{
	SetActorLocation(FMath::Lerp(TempLocation, EndLocation, value));
}

void APacmanPawn::OnTimelineFinished()
{
	ResetDoOnce();
}

