#pragma once
#include <sys/stat.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <json.hpp>
#include "state.hpp"

void saveSettings();
void loadSettings();