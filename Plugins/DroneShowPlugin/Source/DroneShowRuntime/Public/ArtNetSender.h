#pragma once
#include "CoreMinimal.h"
#include "Sockets.h"
#include "Networking.h"

class FArtNetSender
{
public:
    static bool SendArtNetUniverse(const FString& Host, int32 Port, int32 Universe, const TArray<uint8>& Data);
};
