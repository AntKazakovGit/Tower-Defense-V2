#include "Tower.h"

Tower::Tower(SDL_Texture * towerTexture, int x, int y, TileType tile) :
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
