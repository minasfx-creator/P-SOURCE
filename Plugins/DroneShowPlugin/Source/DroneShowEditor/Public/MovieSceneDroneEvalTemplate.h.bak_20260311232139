#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvalTemplate.h"
#include "MovieSceneDroneEvalTemplate.generated.h"

USTRUCT()
struct FMovieSceneDroneEvalTemplate : public FMovieSceneEvalTemplate
{
    GENERATED_BODY()
    UPROPERTY()
    UObject* BakedDataAsset;

    virtual UScriptStruct& GetScriptStructImpl() const override { return *StaticStruct(); }
    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand, const FMovieSceneContext& Context, const FPersistentEvaluationData& PersistentData, FMovieSceneExecutionTokens& ExecutionTokens) const override;
};
