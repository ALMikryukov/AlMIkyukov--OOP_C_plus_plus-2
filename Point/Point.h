#pragma once
class Point
{
	int x, y, z;

public:
	Point();
	Point(int x, int y, int z);
	Point(const char* file);
	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setZ(int z) { this->z = z; }
	void print();
	void print(const char* file);
};

#pragma once
