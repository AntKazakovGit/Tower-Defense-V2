#include "Game.h"

Game::Game(SDL_Renderer * renderer) :
	Scene(renderer)
{
	// Загрузка текстуры карты
	gameTextures.push_back(IMG_LoadTexture(renderer, "Resources/TopPanel.png"));
	// Загрузка текстуры башен
	gameTextures.push_back(IMG_LoadTexture(renderer, "Resources/TowerTileSet.png"));
	// Загрузка текстуры врагов
	gameTextures.push_back(IMG_LoadTexture(renderer, "Resources/"));
	topPanel = new Object(gameTextures[0]);
	// Типы тайлов на карте
	char map[11][17] =
	{
		"0000000000000000",
		"0000000000000000",
		"0000000000000000",
		"1111111100000000",
		"0000000100000000",
		"0000000100000000",
		"0000000100000000",
		"0000000111111111",
		"0000000000000000",
		"0000000000000000",
		"0000000000000000",
	};
	for (int i = 0; i < 16; i++)
	{
		towers.push_back(std::vector<Tower*>());
		for (int j = 0; j < 11; j++)
		{
			if (map[j][i] == '0')
				towers[i].push_back(new Tower(gameTextures[1], i * 50, j * 50 + 50, TileType::EmptyTile));
			if (map[j][i] == '1')
				towers[i].push_back(new Tower(gameTextures[1], i * 50, j * 50 + 50, TileType::RoadTile));

		}
		std::cout << std::endl;
	}
}

Game::~Game()
{
}

void Game::Execution()
{
	displayedObject.clear();
	if (topPanel)
	{
		displayedObject.push_back(topPanel);
	}
	for (int i = 0; i < 16; i++)
	{
		towers.push_back(std::vector<Tower*>());
		for (int j = 0; j < 11; j++)
		{
			displayedObject.push_back(towers[i][j]);
		}
	}
	for (int i = 0; i < enemies.size(); i++)
	{
		displayedObject.push_back(enemies[i]);
	}
}

void Game::OnMouseClick(SDL_MouseButtonEvent buttonEvent)
{
	if (buttonEvent.y > 50)
			towers[buttonEvent.x / 50][buttonEvent.y / 50 - 1]->Upgrade(&gold);
}