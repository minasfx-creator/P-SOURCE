#pragma once
#include "CoreMinimal.h"
#include "XmlParser.h"
#include "GDTFParser.generated.h"

USTRUCT()
struct FGDTFChannel { GENERATED_BODY() UPROPERTY() FString Name; UPROPERTY() int32 ChannelIndex; UPROPERTY() FString Function; };

USTRUCT()
struct FGDTFFixture { GENERATED_BODY() UPROPERTY() FString Manufacturer; UPROPERTY() FString Model; UPROPERTY() TArray<FGDTFChannel> Channels; };

class FGDTFParser
{
public:
    static bool ParseGDTF(const FString& FilePath, FGDTFFixture& OutFixture);
};
