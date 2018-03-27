#include "App.h"

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
}

App::~App()
{
	SDL_DestroyRenderer(appRenderer);
	SDL_DestroyWindow(appWindow);
}
