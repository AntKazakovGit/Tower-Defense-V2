#include "Scene.h"

Scene::Scene(SDL_Renderer * renderer) :
	renderer(renderer)
{

}

Scene::~Scene()
{

}

std::vector<Object*> Scene::GetDisplayedObjects()
{
	return displayedObject;
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
