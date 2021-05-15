// Fill out your copyright notice in the Description page of Project Settings.


#include "SpriteActor.h"
#include "PaperSpriteComponent.h"

// Sets default values
ASpriteActor::ASpriteActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteMesh"));

	SetRootComponent(SpriteComponent);
}

// Called when the game starts or when spawned
void ASpriteActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpriteActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpriteActor::OnConstruction(const FTransform & Transform)
{
	Super::OnConstruction(Transform);

	FVector Position = GetActorLocation();

	Position.Y = 0.f;

	SetActorLocation(Position);
}

