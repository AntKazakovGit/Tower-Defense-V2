#pragma once

#include <iostream>
#include <SDL_image.h>
#include "Scene.h"
#include "Tower.h"
#include "Enemy.h"


class Game :
	public Scene
{
	// Текстуры используемые в работе приложения
	std::vector<SDL_Texture*> gameTextures;
	// Здоровье крепости
	int castleHealth;
	// Золото героя
	int gold = 100;
	// Карта уровня
	Object * topPanel;
	// Список врагов
	std::vector<Enemy*> enemies;
	// Список башен
	std::vector<std::vector<Tower*>> towers;
public:
	Game(SDL_Renderer * renderer);
	~Game();
	// Выполнение сцены
	void Execution();
	// Обработка нажатия мыши
	void OnMouseClick(SDL_MouseButtonEvent buttonEvent);
};