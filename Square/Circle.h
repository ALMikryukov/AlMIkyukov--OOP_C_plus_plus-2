#pragma once
#include"Shape.h"

class Circle:public Shape
{
	int radius;
public:
	Circle()
	{}
	Circle(Point center, int radius, Color& color)
		: Shape(center,color),radius{radius}
	{}

};

