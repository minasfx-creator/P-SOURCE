#pragma once
#include "CoreMinimal.h"
#include "Misc/FileHelper.h"
#include "Dom/JsonObject.h"
#include "VVIZExporter.generated.h"

USTRUCT()
struct FAgentSample { GENERATED_BODY() UPROPERTY() float dx; UPROPERTY() float dy; UPROPERTY() float dz; UPROPERTY() float dh; };

USTRUCT()
struct FAgentPerformance { GENERATED_BODY() UPROPERTY() int32 AgentId; UPROPERTY() TArray<FAgentSample> Samples; };

class FVVIZExporter
{
public:
    static bool ExportVVIZ(const FString& FilePath, const TArray<FAgentPerformance>& Performances, int32 SampleRate);
    static bool ConvertUnrealToVVIZDelta(const FVector& Delta, float& OutDx, float& OutDy, float& OutDz);
};
