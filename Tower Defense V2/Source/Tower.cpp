#include "Tower.h"

Tower::Tower(SDL_Texture * towerTexture, SDL_Texture * bulletTexture, int x, int y, TileType tile) :
	Object(towerTexture, x, y),
	tile(tile)
{
	objPosition = { x, y, 50, 50 };
	srcRect = new SDL_Rect({ tile * 50, 0, 50, 50 });
}

Tower::~Tower()
{
}

TileType Tower::GetTileType()
{
	return tile;
}

void Tower::Upgrade(int * gold)
{
	if (*gold >= 50)
	{
		if (tile == TileType::EmptyTile)
		{
			tile = TileType::TowerTile;
			srcRect->x = tile * 50;
			damage = 20;
			*gold -= 50;
			std::cout << "Tower is built, gold remaining: " << *gold << std::endl;
		}
	}
}

void Tower::Shoot(std::vector<Enemy*> enemies)
{
	if (tile == TileType::TowerTile)
	{
		for (int i = 0; i < enemies.size(); i++)
		{
			if (sqrt(pow(enemies[i]->GetCurrentPosition().x - objPosition.x, 2) + pow(enemies[i]->GetCurrentPosition().y - objPosition.y, 2)) <= range)
			{
//				return new Bullet();
			}
		}
	}
}
