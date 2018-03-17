#pragma once

#include <iostream>
#include "SDL.h"


class Window
{
	SDL_Window * window;

public:
	Window(std::string title, int width, int height, Uint32 windowMode);
	~Window();
	// Изменение настроек окна
	void SetWindowSettings(int width, int height, Uint32 windowMode);
	// Возвращает ссылку на рендерер окна
	SDL_Renderer * CreateWindowRenderer(bool VSync);

};