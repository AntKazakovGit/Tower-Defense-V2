#include "Scene.h"

Scene::Scene(SDL_Renderer * renderer)
{

}

Scene::~Scene()
{

}

std::vector<Object*> Scene::GetDisplayedObjects()
{
	// virtual
	return std::vector<Object*>();
}

void Scene::Execution()
{
	// virtual
}

void Scene::OnMouseClick(SDL_MouseButtonEvent buttonEvent)
{
	// virtual
}

void Scene::OnMouseMotion(SDL_MouseMotionEvent motionEvent)
{
	// virtual
}
