#include <iostream>
#include"Square.h"
#include"Circle.h"
#include"Shape.h"
using namespace std;

int main()
{
    Color red = { 255,0,0 };
    Point a{ 10,20 };
    {

        Square S1(4, a, red);
        Square S2(30, Point{ -3,5 }, red);
        S1.move(Point{ 0,0 });
        Color blue{ 0,0,255 };
        S2.setColor(blue);
    }
    Circle c(a, 7, red);
    c.move(Point{ -1,-2 });
    /*a.x = -123;
    a.y = 67;
    red.r = 100;
    red.g = 20;
    red.b = 15;*/


}
