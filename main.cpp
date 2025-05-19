#include "point.h"
#include "ellipse.h"
#include "circle.h"

#include <iostream>

using std::cout;
using std::endl;

void PrintPretty(const Ellipse& ellipse);

int main() {
	Ellipse e1(2, 3);
	Ellipse e2(1,1);
	Ellipse e3(2,2, Point(2, 3));
	Point p1(1.5, -2.1);
	Ellipse e4(1, 1, p1);

	cout  << e1.ToString() << endl;
	cout  << e2.ToString() << endl;
	cout  << e3.ToString() << endl;
	cout  << e4.ToString() << endl;

	cout << e1.GetArea() << endl;
	cout << e2.GetArea() << endl;
	cout << e3.GetArea() << endl;
	cout << e4.GetArea() << endl;

	cout << e1.GetPerimeter() << endl;
	cout << e2.GetPerimeter() << endl;
	cout << e3.GetPerimeter() << endl;
	cout << e4.GetPerimeter() << endl;

	Circle c1(5, Point(3, 4));
	Circle c2(3, Point(4, 5));
	Circle c3(1, Point());

	cout << c1.ToString() << endl;
	cout << c2.ToString() << endl;
	cout << c3.ToString() << endl;

	cout << c1.GetArea() << endl;
	cout << c2.GetArea() << endl;
	cout << c3.GetArea() << endl;

	cout << c1.GetPerimeter() << endl;
	cout << c2.GetPerimeter() << endl;
	cout << c3.GetPerimeter() << endl;

	cout << "-------------------" << endl;

	PrintPretty(e1);
	PrintPretty(c1);



	return 0;
}

// github.com/csc2430-master/

void PrintPretty(const Ellipse& ellipse) {
	cout << ellipse.ToString() << endl;
	cout << "\t" << ellipse.GetArea() << endl;
	cout << "\t" << ellipse.GetPerimeter() << endl;

}

