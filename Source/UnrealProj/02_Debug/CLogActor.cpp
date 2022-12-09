
#include "CLogActor.h"
#include "Global.h"

// Sets default values
ACLogActor::ACLogActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACLogActor::BeginPlay()
{
	Super::BeginPlay();
	Clog::Print(10);
	Clog::Print(20, 1);
	Clog::Print(30, 2,20.0f);
	Clog::Print(40, 3, 20.0f);

	Clog::Print("Unreal Proj");
	Clog::Print(GetActorLocation());
	Clog::Print(GetActorRotation());
	
	Clog::Log(33);
	Clog::Log(PI);
	Clog::Log("Unreal Proj");
	Clog::Log(GetActorLocation());
	Clog::Log(GetActorRotation());

	Clog::Log(this);
	//Clog::Log(__FUNCTION__, __LINE__);
	PrintLine();
}

// Called every frame
void ACLogActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Time += DeltaTime;
	Clog::Print(Time,4);
}

