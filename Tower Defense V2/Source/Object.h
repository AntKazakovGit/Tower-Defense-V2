#pragma once

#include <SDL.h>


class Object
{
protected:
	SDL_Texture * objTexture;
	SDL_Rect objPosition;
public:
	// �������� �������� � ����������������� ��������
	Object(SDL_Texture * objTexture, SDL_Rect objStartPosition);
	// �������� �������� ��� ��������������� ��������
	Object(SDL_Texture * objTexture, int x = 0, int y = 0);
	~Object();
	// ����������� ������� �� �����������
	void RenderObject(SDL_Renderer * renderer);
};