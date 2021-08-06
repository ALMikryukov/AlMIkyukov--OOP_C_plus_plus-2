#pragma once
#include "Figure.h"
class Rect :
    public Figure
{
    int a, b;
    public:
        Rect(int a,int b): a{a},b{b}
        {}
        double   area()  const override {
            return a * b;
        }
};

