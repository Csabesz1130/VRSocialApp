#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Avatar.h"
#include "VoiceChat.h"
#include "Multiplayer.h"
#include "VirtualSpace.h"
#include "FriendSystem.h"
#include "TextChat.h"
#include "VRSocialApp.generated.h"

UCLASS()
class VRSOCIALAPP_API AVRSocialApp : public AActor
{
  GENERATED_BODY()

public:
  AVRSocialApp();

  UPROPERTY()
  AAvatar* UserAvatar;

  UPROPERTY()
  UVoiceChat* VoiceChatManager;

  UPROPERTY()
  AMultiplayer* MultiplayerManager;

  UPROPERTY()
  AVirtualSpace* VirtualSpaceManager;

  UPROPERTY()
  UFriendSystem* FriendSystemManager;

  UPROPERTY()
  UTextChat* TextChatManager;

  UFUNCTION()
  void InitializeApp();

  UFUNCTION()
  void JoinSpace(bool bIsPrivate);
};
