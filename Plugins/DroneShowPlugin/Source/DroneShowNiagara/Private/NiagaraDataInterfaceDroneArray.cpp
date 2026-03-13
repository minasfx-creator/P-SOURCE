#include "NiagaraDataInterfaceDroneArray.h"
#include "DroneShowDataBridge.h"
#include "VectorVM.h"
#include "NiagaraTypes.h"
#include "NiagaraFunctionLibrary.h"

void UNiagaraDataInterfaceDroneArray::GetFunctions(TArray<FNiagaraFunctionSignature>& OutFunctions)
{
    FNiagaraFunctionSignature SigCount;
    SigCount.Name = "GetDroneCount";
    SigCount.bMemberFunction = false;
    SigCount.bRequiresContext = false;
    SigCount.Outputs.Add(FNiagaraVariable(FNiagaraTypeDefinition::GetIntDef(), TEXT("Count")));
    OutFunctions.Add(SigCount);

    FNiagaraFunctionSignature SigGet;
    SigGet.Name = "GetDroneTransform";
    SigGet.bMemberFunction = false;
    SigGet.bRequiresContext = false;
    SigGet.Inputs.Add(FNiagaraVariable(FNiagaraTypeDefinition::GetIntDef(), TEXT("Index")));
    SigGet.Outputs.Add(FNiagaraVariable(FNiagaraTypeDefinition::GetVec3Def(), TEXT("Position")));
    SigGet.Outputs.Add(FNiagaraVariable(FNiagaraTypeDefinition::GetVec3Def(), TEXT("RotationEuler")));
    SigGet.Outputs.Add(FNiagaraVariable(FNiagaraTypeDefinition::GetFloatDef(), TEXT("Intensity")));
    OutFunctions.Add(SigGet);
}

void UNiagaraDataInterfaceDroneArray::GetVMExternalFunction(const FVMExternalFunctionBindingInfo& BindingInfo, void* InstanceData, FVMExternalFunction& OutFunc)
{
    if (BindingInfo.Name == "GetDroneCount")
    {
        OutFunc = FVMExternalFunction::CreateStatic(&UNiagaraDataInterfaceDroneArray::VM_GetCount;
    }
    else if (BindingInfo.Name == "GetDroneTransform")
    {
        OutFunc = FVMExternalFunction::CreateStatic(&UNiagaraDataInterfaceDroneArray::VM_GetTransformAtIndex;
    }
}

UDroneShowDataBridge* UNiagaraDataInterfaceDroneArray::GetBridge()
{
    if (GWorld) return UDroneShowDataBridge::GetBridge();
    return nullptr;
}

void UNiagaraDataInterfaceDroneArray::VM_GetCount(FVectorVMExternalFunctionContext& Context)
{
    VectorVM::FExternalFuncRegisterHandler<int32> OutCount(Context);
    UDroneShowDataBridge* Bridge = GetBridge(;
    int32 Count = Bridge ? Bridge->Positions.Num() : 0;
    *OutCount.GetDest() = Count;
}

void UNiagaraDataInterfaceDroneArray::VM_GetTransformAtIndex(FVectorVMExternalFunctionContext& Context)
{
    VectorVM::FExternalFuncRegisterHandler<int32> InIndex(Context);
    VectorVM::FExternalFuncRegisterHandler<FVector> OutPos(Context);
    VectorVM::FExternalFuncRegisterHandler<FVector> OutRot(Context);
    VectorVM::FExternalFuncRegisterHandler<float> OutIntensity(Context);

    int32 Index = InIndex.GetAndAdvance(;
    UDroneShowDataBridge* Bridge = GetBridge(;
    if (!Bridge || Index < 0 || Index >= Bridge->Positions.Num())
    {
        *OutPos.GetDest() = FVector::ZeroVector;
        *OutRot.GetDest() = FVector::ZeroVector;
        *OutIntensity.GetDest() = 0.0f;
        return;
    }
    *OutPos.GetDest() = Bridge->Positions[Index];
    *OutRot.GetDest() = Bridge->RotationsEuler[Index];
    *OutIntensity.GetDest() = Bridge->Intensities.IsValidIndex(Index) ? Bridge->Intensities[Index] : 1.0f);
}











