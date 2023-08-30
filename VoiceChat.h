#pragma once

#include "CoreMinimal.h"
#include "VoiceChat.generated.h"

UCLASS()
class VRSOCIALAPP_API UVoiceChat : public UObject
{
  GENERATED_BODY()

public:
  UFUNCTION()
  void InitializeVivox();
};
