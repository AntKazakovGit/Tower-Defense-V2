#pragma once

#include <SDL.h>
#include <vector>
#include "Object.h"


class Scene
{
protected:
	SDL_Renderer * renderer;
	std::vector<Object*> displayedObject;
public:
	Scene(SDL_Renderer * renderer);
	~Scene();
	// Возвращает список ссылок на отображаемые объекты
	std::vector<Object*> GetDisplayedObjects();
	// Выполнение сцены		
	virtual void Execution();

	// Обработка нажатия мыши
	virtual void OnMouseClick(SDL_MouseButtonEvent buttonEvent);
	// Обработка движения мыши
	virtual void OnMouseMotion(SDL_MouseMotionEvent motionEvent);
};