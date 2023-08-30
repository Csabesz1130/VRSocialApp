#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Multiplayer.generated.h"

UCLASS()
class VRSOCIALAPP_API AMultiplayer : public AActor
{
  GENERATED_BODY()

public:
  AMultiplayer();

  UPROPERTY(Replicated)
  int SomeVariable;

  UFUNCTION()
  void ConnectToServer(const FString& IPAddress, int32 Port);

  virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
};
