#pragma once

#include "Scene.h"


class Game :
	public Scene
{
	int castleHealth;
public:
	Game(SDL_Renderer * renderer);
	~Game();
	// 
	std::vector<Object*> GetDisplayedObjects();
	// 
	void Execution();
	// Переопределение Scene::OnMouseClick
	void OnMouseClick(SDL_MouseButtonEvent buttonEvent);
};