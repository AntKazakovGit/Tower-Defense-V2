#pragma once

#include "SDL.h"


struct Settings
{
	int width;
	int height;
	Uint32 screenMode;
	bool VSync;

};

void LoadSettings(Settings * settings);

void SaveSettings(Settings settings);