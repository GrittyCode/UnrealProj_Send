#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSpawner.generated.h"

UCLASS()
class UNREALPROJ_API ACSpawner : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class ACSpawnActor> spawnClass[3];

	class ACSpawnActor* spawnActors[3];

public:	
	ACSpawner();

protected:
	virtual void BeginPlay() override;


};
