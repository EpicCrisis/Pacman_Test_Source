// Fill out your copyright notice in the Description page of Project Settings.

#include "Pacman_TestGameModeBase.h"
#include "GridBlock.h"
#include "Engine/World.h"
#include "PacDot.h"
#include "PacmanPawn.h"

// Sets default values
APacman_TestGameModeBase::APacman_TestGameModeBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxX = 23;
	MaxY = 23;
	Spacing = 100.0f;
	Score = 0;
	Lives = 3;
	BonusGhostPoints = 200;
}

void APacman_TestGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Score = 0;
	Lives = 3;

	CreateGrid();

	for (TActorIterator<AGhostCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->FindNextDestination();
	}

	for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->Randomize();
	}
}

void APacman_TestGameModeBase::Tick(float DeltaTime)
{
}

FVector APacman_TestGameModeBase::WorldToGridLocation(FVector Location)
{
	int xCoord;
	int yCoord;

	xCoord = FMath::FloorToInt(Location.X + (Spacing / 2) / Spacing);
	yCoord = FMath::FloorToInt(Location.Y + (Spacing / 2) / Spacing);

	return FVector(FMath::Clamp(xCoord, 0, MaxX), FMath::Clamp(yCoord, 0, MaxY), Location.Z);
}

AGridBlock* APacman_TestGameModeBase::GetBlockFromGridLocation(int X, int Y)
{
	int Index;

	Index = (X * MaxX) + (Y % MaxY);

	return BlocksArray[Index];
}

AGridBlock* APacman_TestGameModeBase::GetBlockFromWorldLocation(FVector Location)
{
	int xCoord;
	int yCoord;

	xCoord = WorldToGridLocation(Location).X;
	yCoord = WorldToGridLocation(Location).Y;

	return GetBlockFromGridLocation(xCoord, yCoord);
}

void APacman_TestGameModeBase::CreateGrid_Implementation()
{
	BlocksArray.Empty();

	int TotalBlocks = (MaxX * MaxY);

	for (int i = 0; i < TotalBlocks; ++i)
	{
		FVector Loc((i / 23) * Spacing, (i % 23) * Spacing, 0.0f);
		FRotator Rot(0.0f, 0.0f, 0.0f);
		FActorSpawnParameters SpawnInfo;

		AGridBlock* SpawnBlock = GetWorld()->SpawnActor<AGridBlock>(Loc, Rot, SpawnInfo);

		BlocksArray.Add(SpawnBlock);
	}

	for (TActorIterator<APacDot> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->OnDestroyed.AddDynamic(this, &APacman_TestGameModeBase::WinEvent);
	}
}

void APacman_TestGameModeBase::SpawnPacman_Implementation()
{
	for (TActorIterator<APlayerStart> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		FVector Loc(ActorItr->GetActorLocation());
		FRotator Rot(ActorItr->GetActorRotation());
		FActorSpawnParameters SpawnInfo;

		APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		Controller->UnPossess();

		APacmanPawn* SpawnPacman = GetWorld()->SpawnActor<APacmanPawn>(Loc, Rot, SpawnInfo);
		Controller->Possess(SpawnPacman);
	}
}

void APacman_TestGameModeBase::WinEvent_Implementation(class AActor* DestroyedActor)
{
	for (TActorIterator<APacDot> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		if (ActorItr.GetProgressNumerator() == 2)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "You Win!");
		}
	}
}
