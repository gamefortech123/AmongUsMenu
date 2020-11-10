#include "main.h"

using namespace app;

extern const LPCWSTR LOG_FILE = L"debug.txt";

void Run() {
#if _DEBUG
	new_console();
#endif

	Game::pAmongUsClient = &(app::AmongUsClient__TypeInfo->static_fields->Instance); // static_fields points to 0x0 (struct changed ?)
	Game::pGameData = &(app::GameData__TypeInfo->static_fields->Instance);
	Game::pGameOptionsData = &(app::PlayerControl__TypeInfo->static_fields->GameOptions);
	Game::pAllPlayerControls = &(app::PlayerControl__TypeInfo->static_fields->AllPlayerControls);
	Game::pLocalPlayer = &(app::PlayerControl__TypeInfo->static_fields->LocalPlayer);
	Game::pShipStatus = &(app::ShipStatus__TypeInfo->static_fields->Instance);

	DetourInitilization();
}