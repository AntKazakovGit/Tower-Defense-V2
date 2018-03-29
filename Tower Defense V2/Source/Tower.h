#pragma once

#include "Object.h"
#include <iostream>

enum TileType
{
	EmptyTile = 0,
	RoadTile = 1,
	TowerTile = 2
};

class Tower :
	public Object
{
	TileType tile;
	// Урон башни
	int damage = 0;
public:
	Tower(SDL_Texture * towerTexture, int x, int y, TileType tile);
	~Tower();
	TileType GetTileType();
	void Upgrade(int * gold);
};