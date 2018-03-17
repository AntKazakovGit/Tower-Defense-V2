#include "Window.h"

Window::Window(std::string title, int width, int height, Uint32 windowMode)
{
	window = SDL_CreateWindow
	(
		"Tower Defense", 
		SDL_WINDOWPOS_UNDEFINED, 
		SDL_WINDOWPOS_UNDEFINED, 
		width, 
		height, 
		windowMode
	);
}

Window::~Window()
{
}

void Window::SetWindowSettings(int width, int height, Uint32 windowMode)
{
	// Изменение настроек окна
}

SDL_Renderer * Window::CreateWindowRenderer(bool VSync)
{
	if(VSync)
		return SDL_CreateRenderer
		(
			window, 
			-1, 
			SDL_RendererFlags::SDL_RENDERER_ACCELERATED| 
			SDL_RendererFlags::SDL_RENDERER_PRESENTVSYNC
		);
	else
		return SDL_CreateRenderer
		(
			window, 
			-1, 
			SDL_RendererFlags::SDL_RENDERER_ACCELERATED
		);
}
