#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "il2cpp-appdata.h"
#include <queue>
#include <optional>
#include <string>
#include "_rpc.h"

using namespace app;

namespace State
{
    extern bool ImGuiInitialized;
    extern bool ShowMenu;

    extern std::string CurrentScene;

    extern bool MaxVision;
    extern bool PlayerSpeed_Enabled;
    extern float PlayerSpeed;
    extern bool UnlockVents;

    extern bool RevealImpostors;
    extern bool NoKillTimer;
    extern bool KillDistance_Enabled;
    extern int KillDistance;

    extern bool NoClip;

    extern uint8_t selectedPlayerId;
    extern std::queue<RPCInterface*> rpcQueue;

    extern bool ShowRadar;
    extern bool ShowRadar_DeadBodies;
    extern bool ShowRadar_Ghosts;
    extern bool ShowRadar_Impostors;
    extern bool ShowRadar_RightClick_Teleport;

    extern bool ChatAlwaysActive;
    extern bool ReadGhostMessages;

    extern bool AutoRepairLights;
    extern bool AutoRepairReactor;
    extern bool AutoRepairOxygen;
    extern bool AutoRepairComms;

    extern SystemTypes__Enum selectedDoor;
    extern std::vector<SystemTypes__Enum> mapDoors;
    extern std::vector<SystemTypes__Enum> pinnedDoors;
}