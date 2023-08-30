#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VirtualSpace.generated.h"

UCLASS()
class VRSOCIALAPP_API AVirtualSpace : public AActor
{
  GENERATED_BODY()

public:
  UFUNCTION()
  void LoadSpace(bool bIsPrivate);
};
