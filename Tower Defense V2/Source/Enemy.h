#pragma once

#include "Object.h"
#include <vector>
#include <iostream>

struct Path
{
	enum Directions
	{
		Top,
		Right,
		Bottom,
		Left
	};
	Directions direction;
	int distance;
};

class Enemy :
	public Object
{
	// Здоровье противника
	int health;
	int resX, resY;
	int speed = 100;
	Uint32 lastMove = SDL_GetTicks();
	std::vector<Path> path;
	int currentPath = 0;
	int pathPassed = 0;
public:
	Enemy(SDL_Texture * enemyTexture, int x, int y, std::vector<Path> path);
	~Enemy();
	void Move();
	bool Complete();
	SDL_Rect GetCurrentPosition();
	void Damaged(int damage);
};