#pragma once

#include "Scene.h"


class Game :
	public Scene
{
	// Текстуры используемые в работе приложения
	std::vector<SDL_Texture*> gameTextures;
	// Здоровье крепости
	int castleHealth;
	// Золото героя
	int gold;
	// Карта уровня
	Object * gameMap;
	// Список врагов

	// Список башен

public:
	Game(SDL_Renderer * renderer);
	~Game();
	// Возвращает список отоброжаемых объектов
	std::vector<Object*> GetDisplayedObjects();
	// Выполнение сцены
	void Execution();
	// Обработка нажатия мыши
	void OnMouseClick(SDL_MouseButtonEvent buttonEvent);
};