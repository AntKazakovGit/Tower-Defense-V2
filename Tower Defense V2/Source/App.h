#pragma once

#include <SDL.h>


class App
{
	SDL_Window * appWindow;
	SDL_Renderer * appRenderer;
public:
	App();
	~App();
};