#include "Enemy.h"

Enemy::Enemy(SDL_Texture * enemyTexture, int x, int y, std::vector<Path> path) :
	Object(enemyTexture, x, y),
	resX(x),
	resY(y),
	path(path)
{
	
}

Enemy::~Enemy()
{

}

void Enemy::Move()
{
	int pathPass = ((SDL_GetTicks() - lastMove) * ((double)speed / 1000));
	while (pathPass >= 1 && currentPath < path.size())
	{
		int passed;
		if (pathPass >= path[currentPath].distance - pathPassed)
		{
			passed = path[currentPath].distance - pathPassed;
			pathPass -= path[currentPath].distance - pathPassed;
			pathPassed = path[currentPath].distance;
		}
		else
		{
			pathPassed += passed = pathPass;
			pathPass = 0;
		}
		switch (path[currentPath].direction)
		{
		case Path::Directions::Top:
			objPosition.y -= passed;
			break;
		case Path::Directions::Right:
			objPosition.x += passed;
			break;
		case Path::Directions::Bottom:
			objPosition.y += passed;
			break;
		case Path::Directions::Left:
			objPosition.x -= passed;
			break;
		}
		if (path[currentPath].distance == pathPassed)
		{
			currentPath += 1;
			pathPassed = 0;
		}
		lastMove = SDL_GetTicks();
	}
}

bool Enemy::Complete()
{
	if (currentPath < path.size())
		return false;
	else
		return true;
}

