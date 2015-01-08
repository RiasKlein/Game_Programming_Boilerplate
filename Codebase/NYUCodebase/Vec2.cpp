#include "Vec2.h"

Vec2::Vec2() : x(0.0f), y(0.0f) {}

Vec2::Vec2(float x, float y) : x(x), y(y) {}

float Vec2::length() {
	return sqrt(x * x + y * y);
}

void Vec2::normalize() {
	float theLength = length();
	x = x / theLength;
	y = y / theLength;
}