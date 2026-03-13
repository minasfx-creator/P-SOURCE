#include "DroneUIManager.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

static TWeakObjectPtr<UDroneUIManager> GDroneUIManager;

UDroneUIManager* UDroneUIManager::Get(UWorld* World)
{
    if (GDroneUIManager.IsValid()) return GDroneUIManager.Get();
    UObject* Outer = World->GetGameInstance() ? (UObject*)World->GetGameInstance() : (UObject*)GetTransientPackage();
    UDroneUIManager* Mgr = NewObject<UDroneUIManager>(Outer);
    Mgr->AddToRoot();
    GDroneUIManager = Mgr;
    return Mgr;
}

void UDroneUIManager::ShowMainDashboard()
{
    if (MainWidget.IsValid()) return;
    TSubclassOf<UUserWidget> WClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/UI/W_MainDashboard.W_MainDashboard_C"));
    if (!WClass) return;
    UUserWidget* W = CreateWidget<UUserWidget>(GetWorld(), WClass);
    if (W) { W->AddToViewport(0); MainWidget = W; }
}

void UDroneUIManager::PlayIntroSequence()
{
    if (IntroWidget.IsValid()) return;
    TSubclassOf<UUserWidget> WClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/UI/W_IntroCinematic.W_IntroCinematic_C"));
    if (!WClass) { ShowMainDashboard(); return; }
    UUserWidget* W = CreateWidget<UUserWidget>(GetWorld(), WClass);
    if (W)
    {
        IntroWidget = W;
        W->AddToViewport(100);
        // Bind animation finished in Blueprint to call ShowMainDashboard
    }
}

void UDroneUIManager::EmergencyLandAll()
{
    // Implement: call runtime emergency land logic (MAVLink/MAVSDK)
    UE_LOG(LogTemp, Warning, TEXT("EmergencyLandAll called - implement runtime handler"));
}
