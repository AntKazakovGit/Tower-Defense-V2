#pragma once

#include "Object.h"
#include <iostream>
#include "Enemy.h"
#include "Bullet.h"
#include <math.h>

enum TileType
{
	EmptyTile = 0,
	RoadTile = 1,
	TowerTile = 2
};

class Tower :
	public Object
{
	// Текстура снаряда
	SDL_Texture * bulletTexture;
	// Тип тайла
	TileType tile;
	// Урон башни
	int damage = 0;
	// Дальность стрельбы башни
	int range = 100;
	// Время между выстрелами башни
	Uint32 shootCooldown = 1000;
	// Время последнего выстрела
	Uint32 lastShoot = 0;
public:
	Tower(SDL_Texture * towerTexture, SDL_Texture * bulletTexture, int x, int y, TileType tile);
	~Tower();
	TileType GetTileType();
	void Upgrade(int * gold);
	void Shoot(std::vector<Enemy*> enemies, std::vector<Bullet*> * bullets);
};