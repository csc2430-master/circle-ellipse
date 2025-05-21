//
// Created by Arias Arevalo, Carlos on 5/19/25.
//

#include "circle.h"
#include "ellipse.h"
#include "point.h"

#include <sstream>
using std::stringstream;

Circle::Circle(double radius, Point center) : Ellipse(radius, radius, center) {
}

string Circle::ToString() const {
	stringstream ss;
	ss << "Circle" ; // Call my parent ToString
	return ss.str();
}

double Circle::GetPerimeter() const {
	// 2 * PI * r
	return 2 * 3.1415926535 * _a;
}
