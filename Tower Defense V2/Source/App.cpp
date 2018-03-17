#include "App.h"

App::App()
{
	// Загрузка настроек
	LoadSettings(&appSettings);
	// Создание окна
	appWindow = 
		new Window
		(
			"Tower Defense", 
			appSettings.width, 
			appSettings.height, 
			appSettings.screenMode, 
			appSettings.VSync
		);
	// Выполнение приложения
	this->Execution();
}

App::~App()
{
	// Сохранение настроек
	SaveSettings(appSettings);
}

void App::Execution()
{
	SDL_Event appEvent;
	while (running)
	{
		while (SDL_PollEvent(&appEvent))
		{

		}
	}
}