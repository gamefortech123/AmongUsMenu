#include "state.hpp"

namespace State
{
    bool ImGuiInitialized = false;
    bool ShowMenu = false;

    std::string CurrentScene;

    bool MaxVision = false;
    bool PlayerSpeed_Enabled = false;
    float PlayerSpeed = 1.F;
    bool UnlockVents = false;

    bool RevealImpostors = false;
    bool NoKillTimer = false;
    bool KillDistance_Enabled = false;
    int KillDistance = 1;

    bool NoClip = false;

    uint8_t selectedPlayerId = 255;
    std::queue<RPCInterface*> rpcQueue;

    bool ShowRadar = false;
    bool ShowRadar_DeadBodies = false;
    bool ShowRadar_Ghosts = false;
    bool ShowRadar_Impostors = false;
    bool ShowRadar_RightClick_Teleport = false;

    bool ChatAlwaysActive = false;
    bool ReadGhostMessages = false;

    bool AutoRepairLights = false;
    bool AutoRepairReactor = false;
    bool AutoRepairOxygen = false;
    bool AutoRepairComms = false;

    SystemTypes__Enum selectedDoor = SystemTypes__Enum_Hallway;
    std::vector<SystemTypes__Enum> mapDoors;
    std::vector<SystemTypes__Enum> pinnedDoors;
}