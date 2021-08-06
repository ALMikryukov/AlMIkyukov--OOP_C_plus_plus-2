

#include <iostream>
#include"Rect.h"
#include"Right_Triangle.h"
#include"Circle.h"
using namespace std;


int main()
{
    Figure* shapes[] = {
        new Circle(4), new Right_Triangle(3,4),new Rect(5,6)
    };


    for (Figure* s : shapes) {
        cout << s->area() << endl;
        delete s;
    }
}

