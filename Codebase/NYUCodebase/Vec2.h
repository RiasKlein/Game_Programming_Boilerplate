#pragma once
#include <math.h>

class Vec2 {
public:
	Vec2();
	Vec2(float x, float y);

	float length();
	void normalize();

	float x;
	float y;
};