#include "VRSocialApp.h"
#include "UObject/ConstructorHelpers.h"

AVRSocialApp::AVRSocialApp()
{
  // Initialize sub-objects
  UserAvatar = CreateDefaultSubobject<AAvatar>(TEXT("UserAvatar"));
  VoiceChatManager = CreateDefaultSubobject<UVoiceChat>(TEXT("VoiceChatManager"));
  MultiplayerManager = CreateDefaultSubobject<AMultiplayer>(TEXT("MultiplayerManager"));
  VirtualSpaceManager = CreateDefaultSubobject<AVirtualSpace>(TEXT("VirtualSpaceManager"));
  FriendSystemManager = CreateDefaultSubobject<UFriendSystem>(TEXT("FriendSystemManager"));
  TextChatManager = CreateDefaultSubobject<UTextChat>(TEXT("TextChatManager"));
}

void AVRSocialApp::InitializeApp()
{
  // Initialize avatar with a default mesh
  ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("SkeletalMesh'/Game/Path/To/DefaultMesh.DefaultMesh'"));
  UserAvatar->SetAvatarMesh(MeshAsset.Object);

  // Initialize voice chat
  VoiceChatManager->InitializeVivox();

  // Initialize multiplayer (e.g., connect to a server)
  MultiplayerManager->ConnectToServer("127.0.0.1", 7777);

  // Initialize virtual space (e.g., load default level)
  VirtualSpaceManager->LoadSpace(false);
}

void AVRSocialApp::JoinSpace(bool bIsPrivate)
{
  VirtualSpaceManager->LoadSpace(bIsPrivate);
}
