#pragma once
#include "Figure.h"
#include "Rect.h"
class Right_Triangle : public Figure
{
    int a, b;
public:

    Right_Triangle(int a,int b) : a{ a }, b{ b }
    {}
    double area()const override {
        return 0.5 * a * b;
    }

};

