#pragma once
#include "../TypeMacros.hpp"
//#include "Difficulties.hpp"
#include <vector>

DECLARE_JSON_CLASS(BeatmapsIO, Metadata, 
    //GETTER_VALUE(float, BPM);
    GETTER_VALUE(int, Duration);
    GETTER_VALUE(std::string, SongName);
    GETTER_VALUE(std::string, SongSubName);
    GETTER_VALUE(std::string, SongAuthorName);
    GETTER_VALUE(std::string, LevelAuthorName);
    //GETTER_VALUE_OPTIONAL(std::string, Automapper);
    //GETTER_VALUE(BeatSaver::Difficulties, Difficulties);
    //GETTER_VALUE(std::vector<BeatSaver::BeatmapCharacteristic>, Characteristics);
)
