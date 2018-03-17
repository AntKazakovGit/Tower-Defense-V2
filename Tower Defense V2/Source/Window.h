#pragma once

#include <iostream>
#include "SDL.h"


class Window
{
	SDL_Window * window;
	SDL_Renderer * windowRenderer;

public:
	Window(std::string title, int width, int height, Uint32 windowMode, bool VSync);
	~Window();
	// Изменение настроек окна
	void SetWindowSettings(int width, int height, Uint32 windowMode, bool VSync);
	// Возвращает ссылку на рендерер окна
	SDL_Renderer * GetWindowRenderer();

};