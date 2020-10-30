#include "settings.hpp"

using json = nlohmann::json;

const char* pSettings = "settings.json";

inline bool exists(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

void saveSettings() {
	json j = json{
		{"ShowMenu", State::ShowMenu},
		{"ShowRadar", State::ShowRadar},
		{"ShowRadar_DeadBodies", State::ShowRadar_DeadBodies},
		{"ShowRadar_Ghosts", State::ShowRadar_Ghosts}
	};

	std::ofstream o(pSettings);
	o << std::setw(4) << j << std::endl;
}

void loadSettings() {
	if (!exists(pSettings))
		return;

	std::ifstream i(pSettings);
	json j;
	i >> j;

	State::ShowMenu = j["ShowMenu"].get<bool>();
	State::ShowRadar = j["ShowRadar"].get<bool>();
	State::ShowRadar_DeadBodies = j["ShowRadar_DeadBodies"].get<bool>();
	State::ShowRadar_Ghosts = j["ShowRadar_Ghosts"].get<bool>();
}