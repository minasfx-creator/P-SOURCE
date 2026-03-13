#include "DroneShowDataBridge.h"
#include "Engine/World.h"
#include "UObject/Package.h"

TWeakObjectPtr<UDroneShowDataBridge> UDroneShowDataBridge::SingletonInstance = nullptr;

UDroneShowDataBridge* UDroneShowDataBridge::CreateSingleton(UWorld* World)
{
    if (!World) return nullptr;
    UObject* Outer = World->GetGameInstance() ? (UObject*)World->GetGameInstance() : (UObject*)GetTransientPackage();
    UDroneShowDataBridge* Bridge = NewObject<UDroneShowDataBridge>(Outer, TEXT("DroneShowDataBridge"), RF_Public | RF_Standalone);
    Bridge->AddToRoot();
    return Bridge;
}

UDroneShowDataBridge* UDroneShowDataBridge::Get(UWorld* World)
{
    if (SingletonInstance.IsValid()) return SingletonInstance.Get();
    UDroneShowDataBridge* New = CreateSingleton(World);
    SingletonInstance = New;
    return New;
}

void UDroneShowDataBridge::SetTransforms(const TArray<FTransform>& Transforms)
{
    Positions.Reset();
    RotationsEuler.Reset();
    Intensities.Reset();
    Positions.Reserve(Transforms.Num());
    RotationsEuler.Reserve(Transforms.Num());
    Intensities.Reserve(Transforms.Num());
    for (const FTransform& T : Transforms)
    {
        Positions.Add(T.GetLocation());
        RotationsEuler.Add(T.GetRotation().Euler());
        Intensities.Add(1.0f);
    }
    FrameStamp++;
}

void UDroneShowDataBridge::Clear()
{
    Positions.Reset();
    RotationsEuler.Reset();
    Intensitie







s.Reset();
    FrameStamp++;
}
