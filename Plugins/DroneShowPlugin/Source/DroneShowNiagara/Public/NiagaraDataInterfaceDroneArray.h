#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraTypes.h"
#include "NiagaraDataInterfaceDroneArray.generated.h"

UCLASS(EditInlineNew, Category = "DroneShow", meta = (DisplayName = "Drone Array Data Interface"))
class UNiagaraDataInterfaceDroneArray : public UNiagaraDataInterface
{
    GENERATED_BODY()
public:
    virtual void GetFunctions(TArray<FNiagaraFunctionSignature>& OutFunctions) override;
    virtual void GetVMExternalFunction(const FVMExternalFunctionBindingInfo& BindingInfo, void* InstanceData, FVMExternalFunction& OutFunc) override;

    static void VM_GetCount(FVectorVMContext& Context);
    static void VM_GetTransformAtIndex(FVectorVMContext& Context);

    static class UDroneShowDataBridge* GetBridge();
};
