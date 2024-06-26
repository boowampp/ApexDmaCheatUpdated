#pragma once
#include "Offsets.hpp"
#include "DMALibrary/Memory/Memory.h"

/*
给地图名，是否可玩，是否射击场赋值
*/

struct Level {
    std::string Name;
    char NameBuffer[1024] = { 0 };
    bool IsPlayable;
    bool IsFiringRange;

    void Read() {
        if (!NameBuffer) {
            Name = "Unknown";
        }
        else {
            Name = std::string(NameBuffer);
        }

        IsPlayable = !Name.empty() && Name != "mp_lobby" && Name != "Unknown";
        IsFiringRange = Name == "mp_rr_canyonlands_staging_mu1";
    }
};