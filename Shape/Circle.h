#pragma once
#include "Figure.h"
#include<cmath>
class Circle :public Figure
{
	double r;
public:
	Circle(double r) :r{ r }
	{}

	double area() const override {
		return 3.14 * r * r;
	}
};

