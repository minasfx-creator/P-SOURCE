#pragma once
#include "CoreMinimal.h"
#include "SVGParser.generated.h"

class FSVGParser
{
public:
    static TArray<FVector> ParsePathD(const FString& PathD, float Z = 0.0f, float Spacing = 50.0f);
private:
    static void ApproximateCubicBezier(const FVector2D& P0, const FVector2D& P1, const FVector2D& P2, const FVector2D& P3, float Spacing, TArray<FVector>& Out);
    static void ApproximateQuadraticBezier(const FVector2D& P0, const FVector2D& P1, const FVector2D& P2, float Spacing, TArray<FVector>& Out);
};
