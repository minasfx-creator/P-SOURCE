
#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
USTRUCT()
USTRUCT()

    GENERATED_BODY()
    UPROPERTY()
    UObject* BakedDataAsset;

    virtual UScriptStruct& GetScriptStructImpl() const override { return *StaticStruct(); }
    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand, const FMovieSceneContext& Context, const FPersistentEvaluationData& PersistentData, FMovieSceneExecutionTokens& ExecutionTokens) const override;
};

 #include "MovieSceneDroneEvalTemplate.generated.h"
