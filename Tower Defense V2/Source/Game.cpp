#include "Game.h"

Game::Game(SDL_Renderer * renderer) :
	Scene(renderer)
{

}

Game::~Game()
{
}

std::vector<Object*> Game::GetDisplayedObjects()
{
	std::vector<Object*> displayedObjects;
	return displayedObjects;
}

void Game::Execution()
{
}

void Game::OnMouseClick(SDL_MouseButtonEvent buttonEvent)
{
}
