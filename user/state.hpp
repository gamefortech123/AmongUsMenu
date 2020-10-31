#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "il2cpp-appdata.h"
#include <queue>
#include <optional>
#include <string>
#include <sys/stat.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "_rpc.h"
#include "json.hpp"

using namespace app;
using json = nlohmann::json;

class Settings
{
private:
    inline bool Exists(const std::string& name);

public:
    bool ImGuiInitialized;
    bool ShowMenu;

    std::string CurrentScene;

    bool MaxVision;
    bool PlayerSpeed_Enabled;
    float PlayerSpeed;
    bool UnlockVents;

    bool RevealImpostors;
    bool NoKillTimer;
    bool KillDistance_Enabled;
    int KillDistance;

    bool NoClip;

    uint8_t selectedPlayerId;
    std::queue<RPCInterface*> rpcQueue;

    bool ShowRadar;
    bool ShowRadar_DeadBodies;
    bool ShowRadar_Ghosts;
    bool ShowRadar_RightClick_Teleport;

    bool ChatAlwaysActive;
    bool ReadGhostMessages;

    bool AutoRepairLights;
    bool AutoRepairReactor;
    bool AutoRepairOxygen;
    bool AutoRepairComms;

    SystemTypes__Enum selectedDoor;
    std::vector<SystemTypes__Enum> mapDoors;
    std::vector<SystemTypes__Enum> pinnedDoors;

    void Load();
    void Save();
};

extern Settings State;