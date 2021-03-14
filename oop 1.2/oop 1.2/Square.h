#pragma once
#include <string>
using namespace std;
class Square
{
private:
	double x1;
	double y1;
	double x2;
	double y2;
	double first;
	double second;
	double third;
	double fourth;
	double d;
	double a;

public:
	double Length() const;
	double Perimetr() const;
	bool Init(double x1, double y1, double x2, double y2);
	void Read();
	void Display() const;
	double Area() const;
};
