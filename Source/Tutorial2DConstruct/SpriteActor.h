// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpriteActor.generated.h"

UCLASS()
class TUTORIAL2DCONSTRUCT_API ASpriteActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(Category = SpriteMesh, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UPaperSpriteComponent* SpriteComponent;

public:	
	// Sets default values for this actor's properties
	ASpriteActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform);

};
