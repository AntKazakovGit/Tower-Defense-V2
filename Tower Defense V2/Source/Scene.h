#pragma once

#include <SDL.h>
#include <vector>
#include "Object.h"


class Scene
{
protected:
	SDL_Renderer * renderer;
public:
	Scene(SDL_Renderer * renderer);
	~Scene();
	// ���������� ������ ������ �� ������������ �������
	std::vector<Object*> GetDisplayedObjects();
	// ���������� �����		
	virtual void Execution();

	// ��������� ������� ����
	virtual void OnMouseClick(SDL_MouseButtonEvent buttonEvent);
	// ��������� �������� ����
	virtual void OnMouseMotion(SDL_MouseMotionEvent motionEvent);
};