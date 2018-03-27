#pragma once

#include <SDL.h>
#include "Scene.h"


class App
{
	// Окно приложения
	SDL_Window * appWindow;
	// Поверхность окна
	SDL_Renderer * appRenderer;
	// Работает ли приложение
	bool running = true;
	// Сценарий (действия которые будут происходить в приложении) приложения
	Scene * appScene;

	// Выполнение работы приложения
	void Execution();
	// Обработка SDL событий
	void SDL_EventHandling();
	// Отображение объектов
	void RenderObjects();

public:
	App();
	~App();

};