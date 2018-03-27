#include "Object.h"

Object::Object(SDL_Texture * objTexture, SDL_Rect objStartPosition) :
	objTexture(objTexture),
	objPosition(objStartPosition)
{
	// Empty
}

Object::Object(SDL_Texture * objTexture, int x, int y) :
	objTexture(objTexture)
{
	objPosition.x = x;
	objPosition.y = y;
	SDL_QueryTexture
	(
		objTexture, 
		NULL, NULL, 
		&objPosition.w, 
		&objPosition.h
	);
}

Object::~Object()
{

}

void Object::RenderObject(SDL_Renderer * renderer)
{
	SDL_RenderCopy
	(
		renderer, 
		objTexture, 
		NULL, 
		&objPosition
	);
}
