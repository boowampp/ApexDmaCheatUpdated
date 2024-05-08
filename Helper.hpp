#pragma once
#include "DMALibrary/Memory/Memory.h"
#include "LocalPlayer.hpp"


struct ActionHelper { 
    LocalPlayer* Myself;

    ActionHelper(LocalPlayer* Myself) {
        this->Myself = Myself;
    }

    void superGrpple(LocalPlayer* Myself) {
        if (Myself->IsGrppleActived) {
            if (Myself->IsGrppleAttached == 1) {
                mem.Write<int>(mem.OFF_BASE + OFF_IN_JUMP + 0x08, 5);
                std::this_thread::sleep_for(std::chrono::milliseconds(20));
                mem.Write<int>(mem.OFF_BASE + OFF_IN_JUMP + 0x08, 4);
            }
        }

    }
    
    void tapStrafe(LocalPlayer* Myself) {
        bool ts_start = true;
        bool longclimb = false;
        //autoTapstrafe
        if (Myself->wallrunStart > Myself->wallrunClear) {
            float climbTime = Myself->TimeBase - Myself->wallrunStart;
            if (climbTime > 0.8) {
                longclimb = true;
                ts_start = false;
            }
            else
            {
                ts_start = true;
            }
        }
        if (ts_start) {
            if (longclimb) {
                if (Myself->TimeBase > Myself->wallrunClear + 0.1)
                    longclimb = false;
            }
            // when player is in air  and                       not skydrive    and  not longclimb and   not backward
            if (((Myself->spaceFlag & 0x1)== 0) && !(Myself->skyDriveState > 0) && !longclimb && !(Myself->backWardState > 0))
            {
                if (((Myself->duckState > 0) && (Myself->forewardState == 33))) { //previously 33
                    if (Myself->forceForeward == 0) {
                        mem.Write<int>(mem.OFF_BASE + OFF_IN_FORWARD + 0x8, 1);
                    }
                    else {
                        mem.Write<int>(mem.OFF_BASE + OFF_IN_FORWARD + 0x8, 0);
                    }
                }
            }
            else if ((Myself->spaceFlag & 0x1) != 0) {
                if (Myself->forewardState == 33) {
                    mem.Write<int>(mem.OFF_BASE + OFF_IN_FORWARD + 0x8, 1);
                }
                else if (Myself->forewardState == 0) {
                    mem.Write<int>(mem.OFF_BASE + OFF_IN_FORWARD + 0x8, 0);
                }
            }
        }
    
    }
    void Update() {
        if (Myself->IsDead) return;
        superGrpple(Myself);
        tapStrafe(Myself);
    }
};