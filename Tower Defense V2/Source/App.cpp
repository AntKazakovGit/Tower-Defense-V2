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
			// Обновление поверхности окна
			RenderObjects();
		}
	}
}

void App::SDL_EventHandling()
{
	SDL_Event appEvent;
	// Поиск событий
	while (SDL_PollEvent(&appEvent))
	{
		// Обработка выхода из программы
		if (appEvent.type == SDL_EventType::SDL_QUIT)
			running = false;
		if (appScene)
		{
			switch (appEvent.type)
			{
				// Обработка нажатия мыши
			case SDL_EventType::SDL_MOUSEBUTTONDOWN:
				appScene->OnMouseClick(appEvent.button);
				break;
				// Обработка движения мыши
			case SDL_EventType::SDL_MOUSEMOTION:
				appScene->OnMouseMotion(appEvent.motion);
				break;
			}
		}
	}
}

void App::RenderObjects()
{
	// Очистка поверхности
	SDL_RenderClear(appRenderer);
	// Отображение объектов на поверхности
	std::vector<Object*> displayedObjects = appScene->GetDisplayedObjects();
	for (int i = 0; i < displayedObjects.size(); i++)
	{
		displayedObjects[i]->RenderObject(appRenderer);
	}
	// Отображение поверхности
	SDL_RenderPresent(appRenderer);
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
	appScene = new Game(appRenderer);
	// Выполнение приложения
	this->Execution();
}

App::~App()
{
	SDL_DestroyRenderer(appRenderer);
	SDL_DestroyWindow(appWindow);
	delete appScene;
}
