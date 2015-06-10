#include "stdafx.h"
#include "Vector2.h"

#include <math.h>

Vector2::Vector2()
{
}

Vector2::Vector2(float _x, float _y) :
x(_x),
y(_y)
{

}

Vector2::~Vector2()
{
}

float Vector2::Magnitude() const
{
	return sqrtf(x*x + y*y);
}

float Vector2::MagnitudeSquared() const
{
	return x*x + y*y;
}
