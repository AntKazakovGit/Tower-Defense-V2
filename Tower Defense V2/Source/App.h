#pragma once

#include <SDL.h>


class App
{
	// Окно приложения
	SDL_Window * appWindow;
	// Поверхность окна
	SDL_Renderer * appRenderer;
	// Работает ли приложение
	bool running = true;
	// Выполнение работы приложения
	void Execution();
	// Обработка SDL событий
	void SDL_EventHandling();
public:
	App();
	~App();
};