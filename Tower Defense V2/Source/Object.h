#pragma once

#include <SDL.h>


class Object
{
protected:
	SDL_Texture * objTexture;
	SDL_Rect objPosition;
public:
	// Создание текстуры с массштабированием размеров
	Object(SDL_Texture * objTexture, SDL_Rect objStartPosition);
	// Создание текстуры без масштабирования размеров
	Object(SDL_Texture * objTexture, int x = 0, int y = 0);
	~Object();
	// Отображение объекта на поверхности
	void RenderObject(SDL_Renderer * renderer);
};