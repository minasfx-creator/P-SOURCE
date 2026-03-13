#pragma once
#include "CoreMinimal.h"
#include "BaseTools/ScriptableClickDragTool.h"
#include "Components/SplineComponent.h"
#include "DroneFormationTool.generated.h"

UCLASS()
class UDroneFormationTool : public UScriptableClickDragTool
{
    GENERATED_BODY()
public:
    virtual void OnDragBegin_Implementation(FInputDeviceRay StartPosition, const FScriptableToolModifierStates& Modifiers) override;
    virtual void OnDragUpdatePosition_Implementation(FInputDeviceRay NewPosition, const FScriptableToolModifierStates& Modifiers) override;
    virtual void OnDragEnd_Implementation(FInputDeviceRay EndPosition, const FScriptableToolModifierStates& Modifiers) override;

    UFUNCTION(BlueprintCallable, Category="DroneFormation")
    TArray<FVector> GetSplineWaypoints() const;

    UFUNCTION(BlueprintCallable, Category="DroneFormation")
    bool ExportSplineToVVIZ(const FString& FilePath, int32 SampleRate = 10) const;

    UFUNCTION(BlueprintCallable, Category="DroneFormation")
    bool ExportSplineToMAVLinkMission(const FString& FilePath, int32 SampleRate = 10) const;

private:
    USplineComponent* CoreoSpline = nullptr;
    void EnsureSplineCreated();
    void UpdateSplineVisualization();
    TArray<FVector> ResampleSpline(float Spacing) const;
    FVector RaycastToWorld(const FInputDeviceRay& Ray) const;
};

