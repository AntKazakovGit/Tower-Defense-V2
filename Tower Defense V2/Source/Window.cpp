#include "Window.h"

Window::Window(std::string title, int width, int height, Uint32 windowMode, bool VSync)
{
	SDL_CreateWindowAndRenderer(width, height, windowMode, &window, &windowRenderer);
	SetWindowSettings(width, height, windowMode, VSync);
}

Window::~Window()
{
}

void Window::SetWindowSettings(int width, int height, Uint32 windowMode, bool VSync)
{
	// Изменение настроек окна
}

SDL_Renderer * Window::GetWindowRenderer()
{
	return windowRenderer;
}
