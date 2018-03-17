#pragma once

#include "Window.h"


class App
{
	// Окно приложения
	Window appWindow;
	// Работает ли приложение
	bool running = true;

	// Выполнение приложения
	void Execution();

public:
	App();
	~App();

};
