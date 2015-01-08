#include "Vec3.h"

Vec3::Vec3() : x(0.0f), y(0.0f), z(0.0f) {}

Vec3::Vec3(float x, float y, float z) : x(x), y(y), z(z) {}

float Vec3::length() {
	return sqrt(x * x + y * y + z * z);
}

void Vec3::normalize() {
	float theLength = length();
	x = x / theLength;
	y = y / theLength;
	z = z / theLength;
}