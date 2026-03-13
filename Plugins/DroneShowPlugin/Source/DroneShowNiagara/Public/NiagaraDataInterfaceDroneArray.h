
#include "VectorVM.h"
#include "DroneShowDataBridge.h"
class FVectorVMExternalFunctionContext;
#include "VectorVM.h"
struct FVectorVMContext;
#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraTypes.h"
UCLASS(EditInlineNew, Category = "DroneShow", meta = (DisplayName = "Drone Array Data Interface"))
UCLASS()

{
    GENERATED_BODY()
public:
    virtual void GetFunctions(TArray<FNiagaraFunctionSignature>& OutFunctions) override;
    virtual void GetVMExternalFunction(const FVMExternalFunctionBindingInfo& BindingInfo, void* InstanceData, FVMExternalFunction& OutFunc) override;

    static void VM_GetCount(FVectorVMExternalFunctionContext& Context);
    static void VM_GetTransformAtIndex(FVectorVMExternalFunctionContext& Context);

    static class UDroneShowDataBridge* GetBridge();
};

 #include "NiagaraDataInterfaceDroneArray.generated.h"
