#include "stdafx.h"
#include <vector>
#include <list>
#include <random>
#include <algorithm>
#include <iostream>

#include "Vector2.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//////////////////////////////////////////////////////////////////////////
	// Begin Reference Block

	{
		std::vector<Vector2> movementPath;

		// Setup a mersenne twister for generating our random numbers and store it's range
		std::mt19937 mersenneTwister;
		float mersenneTwisterRange = static_cast<float>(mersenneTwister.max() - mersenneTwister.min());

		// Generate 20 randomised vectors
		for (int index = 0; index < 20; ++index)
		{		
			movementPath.push_back(Vector2((mersenneTwister() / mersenneTwisterRange) - 0.5f, 
										   (mersenneTwister() / mersenneTwisterRange) - 0.5f));
		}

		// Define our lambda function for displaying the vector
		auto displayVectorLambda = [](const Vector2& vector) {
			std::cout << "(" << vector.x << ", " << vector.y << ") : " << std::endl;
			std::cout << "   Magnitude: " << vector.Magnitude() << std::endl;
		};

		// Display the vectors
		std::for_each(movementPath.begin(), movementPath.end(), displayVectorLambda);

		std::cout << std::endl;
	}

	// End Reference Block
	//////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////
	// Update this code block to match the style of the previous block

	{
		std::vector<Vector2> p;

		std::mt19937 mt;
		float mtr = static_cast<float>(mt.max() - mt.min());

		for (int i = 0; i < 10; ++i)
		{
			p.push_back(Vector2((mt() / mtr) - 0.5f, (mt() / mtr) - 0.5f));
		}

		bool a = true;
		while (a) 
		{
			a = false;

			for (std::vector<Vector2>::iterator i = p.begin(); i != p.end(); ++i) 
			{
				if ((i + 1) == p.end())
					continue;

				if ((*i).MagnitudeSquared() > (*(i + 1)).MagnitudeSquared())
				{
					std::iter_swap(i, i + 1);

					a = true;
				}
			}
		}

		std::for_each(p.begin(), p.end(), [](const Vector2& v) {
			std::cout << "(" << v.x << ", " << v.y << ") : " << std::endl;
			std::cout << "   Magnitude: " << v.Magnitude() << std::endl;
		});
	}

	// 
	//////////////////////////////////////////////////////////////////////////

	return 0;
}

