#include "Point.h"
#include <iostream>
#include<fstream>
using namespace std;
Point::Point() : Point(0, 0, 0)                     //:x{},y{},z{} /// присваем нули при создании
{
}

Point::Point(int x, int y, int z) : x{ x }, y{ y }, z{ z }
{
}
Point::Point(const char* file)
{
	ifstream input(file);
	if (input.is_open()) {
		input >> x >> y >> z;
	}
}
void Point::print()
{
	cout << x << " " << y << " " << z << endl << endl;
}
void Point::print(const char* file) {
	ofstream output(file);
	if (output.is_open()) {
		output << x << " " << y << " " << z << endl << endl;
	}
}