


#include <iostream>
#include "Square.h"
using namespace std;
int main()
{
	Square g;
	g.Read();
	g.Display();
	cout << "Length = " << g.Length() << endl;
	cout << "Area = " << g.Area() << endl;
	cout << "Perimetr = " << g.Perimetr();

	return 0;
}
