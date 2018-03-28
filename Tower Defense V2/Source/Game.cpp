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
	for (int i = 0; i < 16; i++)
	{
		towers.push_back(std::vector<Tower*>());
		for (int j = 0; j < 11; j++)
		{
			towers[i].push_back(new Tower(gameTextures[1], i * 50, j * 50 + 50));
		}
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

}
