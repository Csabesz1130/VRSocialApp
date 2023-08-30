#include "VirtualSpace.h"
#include "Kismet/GameplayStatics.h"

void AVirtualSpace::LoadSpace(bool bIsPrivate)
{
  FString LevelToLoad = bIsPrivate ? "PrivateSpace" : "PublicSpace";
  UGameplayStatics::OpenLevel(this, *LevelToLoad);
}
