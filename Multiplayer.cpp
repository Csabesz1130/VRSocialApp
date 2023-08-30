#include "Multiplayer.h"
#include "UnrealNetwork.h"

AMultiplayer::AMultiplayer()
{
  bReplicates = true;
}

void AMultiplayer::ConnectToServer(const FString& IPAddress, int32 Port)
{
  // Example logic to connect to a server
  // FURL ServerURL(nullptr, *FString::Printf(TEXT("%s:%d"), *IPAddress, Port), ETravelType::TRAVEL_Absolute);
  // GetWorld()->ServerTravel(ServerURL.ToString());
}

void AMultiplayer::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
  DOREPLIFETIME(AMultiplayer, SomeVariable);
}
