#include "Game.h"

Game::Game(SDL_Renderer * renderer) :
	Scene(renderer)
{
	gameTextures.push_back(IMG_LoadTexture(renderer, "Resources/Map.png"));
	gameMap = new Object(gameTextures[0]);
}

Game::~Game()
{
}

void Game::Execution()
{
	displayedObject.clear();
	if (gameMap)
	{
		displayedObject.push_back(gameMap);
	}
}

void Game::OnMouseClick(SDL_MouseButtonEvent buttonEvent)
{

}
