// Fill out your copyright notice in the Description page of Project Settings.


#include "OldRadio.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AOldRadio::AOldRadio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	Root->SetupAttachment(RootComponent);
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
}

// Called when the game starts or when spawned
void AOldRadio::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AOldRadio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AOldRadio::SetPauseAudio_Implementation()
{
	AudioComp->SetActive(false);
}


