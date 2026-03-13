#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneDroneTrack.generated.h"

UCLASS()
class UMovieSceneDroneTrack : public UMovieSceneTrack
{
    GENERATED_BODY()
public:
    UMovieSceneDroneTrack();
#if WITH_EDITORONLY_DATA
    virtual const TArray<UMovieSceneSection*>& GetAllSections() const override;
#endif
    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual UMovieSceneSection* CreateNewSection() override;
private:
    UPROPERTY()
    TArray<UMovieSceneSection*> Sections;
};
