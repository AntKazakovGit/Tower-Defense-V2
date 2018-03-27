#include "Scene.h"

Scene::Scene(SDL_Renderer * renderer)
{

}

Scene::~Scene()
{
}

void Scene::RenderObjects()
{
	for (int i = 0; i < displayedObjects.size(); i++)
	{
		displayedObjects[i]->RenderObject(renderer);
	}
}

void Scene::Execution()
{
	// virtual
}
