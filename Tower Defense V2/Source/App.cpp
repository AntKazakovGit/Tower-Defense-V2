#include "App.h"

void App::Execution()
{
	while (running)
	{
		// Обработка событий
		SDL_EventHandling();
		if (appScene)
		{
			// Выполнение сцены
			appScene->Execution();
			// Очистка поверхности
			SDL_RenderClear(appRenderer);
			// Отображение объектов на поверхности
			appScene->RenderObjects();
			// Отображение поверхности
			SDL_RenderPresent(appRenderer);
		}
	}
}

void App::SDL_EventHandling()
{
	SDL_Event appEvent;
	// Поиск событий
	while (SDL_PollEvent(&appEvent))
	{
		switch (appEvent.type)
		{
			// Обработка выхода из приложения
		case SDL_EventType::SDL_QUIT:
			running = false;
			break;
		}
	}
}

App::App()
{
	// Создание окна приложения
	appWindow = 
		SDL_CreateWindow
		(
			"Tower Defense", 
			SDL_WINDOWPOS_UNDEFINED, 
			SDL_WINDOWPOS_UNDEFINED, 
			800, 
			600, 
			SDL_WindowFlags::SDL_WINDOW_SHOWN
		);
	// Создание поверхности окна
	appRenderer = 
		SDL_CreateRenderer
		(
			appWindow, 
			-1, 
			SDL_RendererFlags::SDL_RENDERER_ACCELERATED | 
			SDL_RendererFlags::SDL_RENDERER_PRESENTVSYNC
		);
	// Выполнение приложения
	this->Execution();
}

App::~App()
{
	SDL_DestroyRenderer(appRenderer);
	SDL_DestroyWindow(appWindow);
	delete appScene;
}
