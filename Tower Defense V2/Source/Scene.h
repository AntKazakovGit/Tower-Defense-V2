#pragma once

#include <SDL.h>
#include <vector>
#include "Object.h"


class Scene
{
protected:
	SDL_Renderer * renderer;
	std::vector<Object*> displayedObjects;
public:
	Scene(SDL_Renderer * renderer);
	~Scene();
	// ����� �������� �� �����
	void RenderObjects();
	// ���������� �����		
	virtual void Execution();
/*
	// ��������� ����� ���
	virtual void OnLButtonClick();
	// ��������� �������� ����� ���
	virtual void OnLButtonDoubleClick();
	// ��������� ����� ���
	virtual void OnRButtonClick();
	// ��������� �������� ����� ���
	virtual void OnRButtonDoubleClick();
	// ��������� ����� ���
	virtual void OnMButtonClick();
	// ��������� �������� ����� ���
	virtual void OnMButtonDoubleClick();
	// ��������� �������� ����
	virtual void OnMouseMotion();
*/
};