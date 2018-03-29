#include "Bullet.h"

Bullet::Bullet(Enemy * targetEnemy, int damage, SDL_Texture * texture, int x, int y) :
	Object(texture, x, y),
	target(targetEnemy),
	damage(damage)
{
	objPosition.x -= objPosition.w / 2;
	objPosition.y -= objPosition.h / 2;
}

Bullet::~Bullet()
{
}

bool Bullet::Hit()
{
	if (!target)
	{
		std::cout << "Hello";
	}
	if (sqrt(pow(target->GetCurrentPosition().x - objPosition.x, 2) + pow(target->GetCurrentPosition().y - objPosition.y, 2)) <= objPosition.w / 2)
	{
		target->Damaged(damage);
		return true;
	}
	else
		return false;
}

void Bullet::Move()
{
	int pathPass = ((SDL_GetTicks() - lastMove) * ((double)speed / 1000));
	double distance = sqrt(pow(target->GetCurrentPosition().x - objPosition.x, 2) + pow(target->GetCurrentPosition().y - objPosition.y, 2));
	int passed = pathPass / (distance / 100);
	
	if (abs(target->GetCurrentPosition().x - objPosition.x / 100) * passed >= 1 || abs(target->GetCurrentPosition().y - objPosition.y) / 100 * passed >= 1)
	{
		objPosition.x += (double)(target->GetCurrentPosition().x - objPosition.x) / 100 * passed;
		objPosition.y += (double)(target->GetCurrentPosition().y - objPosition.y) / 100 * passed;
		lastMove = SDL_GetTicks();
	}
}

bool Bullet::EnemyExisting()
{
	if (target->Dead())
		return false;
	else
		return true;
}

