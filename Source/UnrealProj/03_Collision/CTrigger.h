#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CTrigger.generated.h"

DECLARE_DELEGATE(FBoxLightBeginOverlap);
DECLARE_DELEGATE(FBoxLightEndOverlap);
DECLARE_DELEGATE_RetVal_OneParam(FString, FBoxLightRandomBeginOverlap, FLinearColor);

UCLASS()
class UNREALPROJ_API ACTrigger : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene;
	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;
	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

public:	
	ACTrigger();

protected:
	virtual void BeginPlay() override;
private:
	UFUNCTION()
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

public :
	FBoxLightBeginOverlap		OnBoxLightBeginOverlap;
	FBoxLightEndOverlap			OnBoxLightEndOverlap;
	FBoxLightRandomBeginOverlap	OnBoxLightRandomBeginOverlap;
};
