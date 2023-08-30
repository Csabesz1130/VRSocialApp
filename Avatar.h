#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Avatar.generated.h"

UCLASS()
class VRSOCIALAPP_API AAvatar : public AActor
{
  GENERATED_BODY()

public:
  AAvatar();

  UPROPERTY(VisibleAnywhere)
  USkeletalMeshComponent* SkeletalMeshComp;

  UFUNCTION(Server, Reliable)
  void SetAvatarMesh(USkeletalMesh* NewMesh);

  UFUNCTION(BlueprintCallable)
  void ChangeOutfit(int OutfitIndex);
};

