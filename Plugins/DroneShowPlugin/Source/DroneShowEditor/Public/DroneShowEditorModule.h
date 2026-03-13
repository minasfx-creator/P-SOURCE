#pragma once
#include "Modules/ModuleManager.h"

class FDroneShowEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
