#pragma once

#include "Object.h"


class Tower :
	public Object
{
	// Урон башни
	int damage;
public:
	Tower(SDL_Texture * towerTexture, int x, int y);
	~Tower();
};