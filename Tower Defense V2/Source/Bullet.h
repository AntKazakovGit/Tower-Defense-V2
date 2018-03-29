#pragma once

#include "Object.h"
#include "Enemy.h"
#include <math.h>


class Bullet :
	public Object
{
	Enemy * target;
	int damage;
	int speed = 200;
	Uint32 lastMove = SDL_GetTicks();

public:
	Bullet(Enemy * targetEnemy, int damage, SDL_Texture * texture, int x, int y);
	~Bullet();
	bool Hit();	
	void Move();
	bool EnemyExisting();
};