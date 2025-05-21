#include "point.h"
#include "ellipse.h"
#include "circle.h"

#include <iostream>

using std::cout;
using std::endl;

void PrintPretty(const Ellipse& ellipse);

int main() {
	// Ellipse e1(2, 3);
	// Ellipse e2(1,1);
	// Ellipse e3(2,2, Point(2, 3));
	// Point p1(1.5, -2.1);
	// Ellipse e4(1, 1, p1);
	//
	//
	// Circle c1(5, Point(3, 4));
	// Circle c2(3, Point(4, 5));
	// Circle c3(1, Point());
	//
	//
	// PrintPretty(e1);
	// PrintPretty(c1);


	Ellipse* p[4];

	p[0] = new Circle(10,Point(10,10));
	p[1] = new Ellipse(1,2,Point(0,-1));
	p[2] = new Circle(1,Point(0,10));
	p[3] = new Ellipse(4,3,Point(10,0));

	for (int i = 0; i < 4; i++) {
		cout << p[i]->ToString() << endl;
	}

	for (int i = 0; i < 4; i++) {
		delete p[i];
	}
	return 0;
}

void PrintPretty(const Ellipse& x) {
	cout << x.ToString() << endl;
	cout << "\t" << x.GetArea() << endl;
	cout << "\t" << x.GetPerimeter() << endl;

}

