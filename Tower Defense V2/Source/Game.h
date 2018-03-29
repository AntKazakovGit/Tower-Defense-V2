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
	int castleHealth = 30;
	// Золото героя
	int gold = 100;
	// Карта уровня
	Object * topPanel;
	// Номер волны
	int Wave = 0;
	// Осталось врагов в текущей волне
	int enemyRemains = 0;
	// Задержака между спавном врагов
	Uint32 respawnDelay = 2000;
	// Время последнего спавна
	Uint32 lastRespawnTime = respawnDelay;
	// Расположение точки спавна
	int spawnX = -45, 
		spawnY = 205;
	std::vector<Path> paths;
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