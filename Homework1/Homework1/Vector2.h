#pragma once

class Vector2
{
public:
	Vector2();
	Vector2(float _x, float _y);

	~Vector2();

	float Magnitude() const;
	float MagnitudeSquared() const;

public:
	float x, y;
};

