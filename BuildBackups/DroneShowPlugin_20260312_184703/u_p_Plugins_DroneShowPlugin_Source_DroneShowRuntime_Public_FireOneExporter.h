#pragma once
#include "CoreMinimal.h"
#include "Misc/FileHelper.h"
#include "FireOneExporter.generated.h"

USTRUCT()
struct FPyroEvent { GENERATED_BODY() UPROPERTY() int32 ID; UPROPERTY() int32 FireTime; UPROPERTY() int32 EventID; UPROPERTY() int32 Module; UPROPERTY() int32 Pin; };

class FFireOneExporter
{
public:
    static bool ExportFireOneCSV(const FString& FilePath, TArray<FPyroEvent> Events);
};
