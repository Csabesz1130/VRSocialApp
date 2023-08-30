#include "Avatar.h"

AAvatar::AAvatar()
{
  SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComp"));
  RootComponent = SkeletalMeshComp;
}

void AAvatar::SetAvatarMesh(USkeletalMesh* NewMesh)
{
  if (SkeletalMeshComp && NewMesh)
  {
    SkeletalMeshComp->SetSkeletalMesh(NewMesh);
  }
}

void AAvatar::ChangeOutfit(int OutfitIndex)
{
  // Example logic to change outfit based on index
  TArray<USkeletalMesh*> Outfits;
  // Populate Outfits array with different meshes
  if (OutfitIndex >= 0 && OutfitIndex < Outfits.Num())
  {
    SetAvatarMesh(Outfits[OutfitIndex]);
  }
}
