#pragma once

#include "Object.h"


class Enemy :
	public Object
{
	// Здоровье противника
	int health;
public:
	Enemy(SDL_Texture * enemyTexture, int x, int y);
	~Enemy();
};