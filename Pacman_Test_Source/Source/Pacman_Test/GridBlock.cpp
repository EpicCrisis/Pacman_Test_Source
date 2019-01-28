// Fill out your copyright notice in the Description page of Project Settings.

#include "GridBlock.h"


// Sets default values
AGridBlock::AGridBlock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetBoxExtent(FVector(40.0f, 40.0f, 40.0f), true);
	Box->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	OnActorBeginOverlap.AddDynamic(this, &AGridBlock::ActorOverlap);

	RootComponent = Box;
}

// Called when the game starts or when spawned
void AGridBlock::BeginPlay()
{
	Super::BeginPlay();

	isWalkable = true;

	Checked = false;
}

// Called every frame
void AGridBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGridBlock::ActorOverlap(class AActor* ThisActor, AActor* OtherActor)
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Overlap Complete");

	if (Checked == false)
	{
		Checked = true;
		isWalkable = false;

		Box->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

