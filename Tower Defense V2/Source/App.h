#pragma once

#include "Window.h"
#include "Settings.h"


class App
{
	// Окно приложения
	Window * appWindow;
	// Настройки приложения
	Settings appSettings;
	// Рендерер окна
	SDL_Renderer * windowRenderer;
	// Работает ли приложение
	bool running = true;

	// Выполнение приложения
	void Execution();

public:
	App();
	~App();

};
