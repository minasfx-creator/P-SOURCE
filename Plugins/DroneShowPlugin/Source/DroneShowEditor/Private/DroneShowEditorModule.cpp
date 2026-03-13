#include "DroneShowEditorModule.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FDroneShowEditorModule"

void FDroneShowEditorModule::StartupModule()
{
    UE_LOG(LogTemp, Log, TEXT("DroneShowEditor module started"));
}

void FDroneShowEditorModule::ShutdownModule()
{
    UE_LOG(LogTemp, Log, TEXT("DroneShowEditor module shutdown"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDroneShowEditorModule, DroneShowEditor)
