#pragma once

#include <SDL.h>
#include <vector>


class Scene
{
protected:
	SDL_Renderer * renderer;
public:
	Scene(SDL_Renderer * renderer);
	~Scene();
	// Возвращает список ссылок на объекты которые требуется вывести на экран
	//virtual std::vector<Object*> GetDisplayedObjects;
	// Выполнение сцены		
	virtual void Execution();

	// Обработка клика ЛКМ
	virtual void OnLButtonClick();
	// Обработка двойного клика ЛКМ
	virtual void OnLButtonDoubleClick();
	// Обработка клика ПКМ
	virtual void OnRButtonClick();
	// Обработка двойного клика ПКМ
	virtual void OnRButtonDoubleClick();
	// Обработка клика СКМ
	virtual void OnMButtonClick();
	// Обработка двойного клика СКМ
	virtual void OnMButtonDoubleClick();
	// Обработка движения мыши
	virtual void OnMouseMotion();
}