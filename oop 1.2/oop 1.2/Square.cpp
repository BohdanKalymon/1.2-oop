#include "Square.h"
#include <iostream>
using namespace std;


void Square::Read()
{
	double x1;
	double y1;
	double x2;
	double y2;
	cout << "Input data:" << endl;
	cout << " x1 =  "; cin >> x1;
	do
	{
		cout << " y1 =  "; cin >> y1;
		cout << " x2 =  "; cin >> x2;
		cout << " y2=  "; cin >> y2;
	} while (!Init(x1, y1, x2, y2));
}

bool Square::Init(double x1, double y1, double x2, double y2)
{
	{
		first = x1;
		second = y1;

		third = x2;
		fourth = y2;

		return true;
	}
}

double Square::Length() const
{
	double d;
	double a;
	d = (sqrt(((third - first) * (third - first)) + ((fourth - second) * (fourth - second))));
	a = d / sqrt(2);
	return(a);

}
double Square::Area() const {
	double d;
	double a;
	d = (sqrt(((third - first) * (third - first)) + ((fourth - second) * (fourth - second))));
	a = d / sqrt(2);
	return(a * a);
}
double Square::Perimetr() const { //як завжди гівно не робить

	double d;
	double a;
	d = (sqrt(((third - first) * (third - first)) + ((fourth - second) * (fourth - second))));
	a = d / sqrt(2);
	return(a * 4);
}
void Square::Display() const
{
	cout << "Contained data" << endl;
	cout << " x1 = " << first << endl;
	cout << " y1 = " << second << endl;
	cout << " x2 = " << third << endl;
	cout << " y2= " << fourth << endl;
}

