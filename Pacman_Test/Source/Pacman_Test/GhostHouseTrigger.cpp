// Fill out your copyright notice in the Description page of Project Settings.

#include "GhostHouseTrigger.h"


// Sets default values
AGhostHouseTrigger::AGhostHouseTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	OnActorBeginOverlap.AddDynamic(this, &AGhostHouseTrigger::OnOverlap);

	RootComponent = Box;

}

// Called when the game starts or when spawned
void AGhostHouseTrigger::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGhostHouseTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGhostHouseTrigger::OnOverlap(AActor * ThisActor, AActor * OtherActor)
{
	AGhostCharacter* Ghost = Cast<AGhostCharacter>(OtherActor);

	if (Ghost->isDead)
	{
		//GetWorldTimerManager().SetTimer(Ghost->BackToNormalTimerHandle, this, Ghost->Reset, 1.0f, true, 2.0f);
	}
}


