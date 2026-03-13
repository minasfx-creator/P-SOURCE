#include "MovieSceneDroneTrack.h"
#include "MovieSceneDroneSection.h"

UMovieSceneDroneTrack::UMovieSceneDroneTrack()
{
    bSupportsMultipleRows = true;
}

#if WITH_EDITORONLY_DATA
const TArray<UMovieSceneSection*>& UMovieSceneDroneTrack::GetAllSections() const
{
    return Sections;
}
#endif

bool UMovieSceneDroneTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UMovieSceneDroneSection::StaticClass();
}

UMovieSceneSection* UMovieSceneDroneTrack::CreateNewSection()
{
    UMovieSceneDroneSection* NewSection = NewObject<UMovieSceneDroneSection>(this, NAME_None, RF_Transactional);
    Sections.Add(NewSection);
    return NewSection;
}
