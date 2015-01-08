#pragma once
#include <math.h>

class Vec3 {
public:
	Vec3();
	Vec3(float x, float y, float z);

	float length();
	void normalize();

	float x;
	float y;
	float z;
};