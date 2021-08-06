#include <iostream>
#include "Point.h"
using namespace std;
int main()
{
	Point p1(1, 34, -23);
	p1.print();
	p1.print("input.txt");
	Point p2;
	p2.setX(123);
	p2.setY(-345);
	p2.print();
	Point p3("input.txt");
	p3.print();
	Point p4 = p2; // копирование 
	p4.setZ(555);

}
