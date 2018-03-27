#pragma once

#include <SDL.h>
#include <vector>


class Scene
{
protected:
	SDL_Renderer * renderer;
public:
	Scene(SDL_Renderer * renderer);
	~Scene();
	// ���������� ������ ������ �� ������� ������� ��������� ������� �� �����
	//virtual std::vector<Object*> GetDisplayedObjects;
	// ���������� �����		
	virtual void Execution();

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
}