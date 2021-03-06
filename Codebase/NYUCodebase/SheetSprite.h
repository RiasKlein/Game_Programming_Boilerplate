#pragma once
#include <SDL.h>
#include <SDL_opengl.h>
#include <SDL_image.h>
#include "Vec2.h"

/*	The SheetSprite class is used to manage textures for objects.
*/
class SheetSprite {
public:
	SheetSprite();
	SheetSprite(GLuint textureID, float u, float v, float width, float height);

	void Draw(Vec2 position, Vec2 scale, float rotation, bool flipped);

	GLuint textureID;

	float u;
	float v;
	float width;
	float height;
};
