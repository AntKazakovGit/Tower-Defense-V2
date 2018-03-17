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
			appSettings.screenMode
		);
	// Создание рендерера на основе окна
	windowRenderer = appWindow->CreateWindowRenderer(appSettings.VSync);
	// Выполнение приложения
	this->Execution();
}

App::~App()
{
	// Сохранение настроек
	SaveSettings(appSettings);
}

void App::SDLEventsHandling(SDL_Event * appEvent)
{
	while (SDL_PollEvent(appEvent))
	{
		switch (appEvent->type)
		{
		case SDL_EventType::SDL_QUIT:
			running = false;
			break;

		}
	}
}

void App::Execution()
{
	SDL_Event appEvent;
	while (running)
	{
		// Обработка SDL событий окна
		SDLEventsHandling(&appEvent);

	}
}