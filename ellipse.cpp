//
// Created by Arias Arevalo, Carlos on 5/19/25.
//

#include "ellipse.h"

#include <sstream>
#include <cmath>
using std::stringstream;

Ellipse::Ellipse(double a, double b, Point center): _a(a), _b(b), _center(center) {
}

Ellipse::Ellipse(double a, double b): _a(a), _b(b) {
}

string Ellipse::ToString() const {
	stringstream ss;
	ss << "Ellipse";
	return ss.str();
}

double Ellipse::GetArea() const {
	return _a * _b * 3.141592;
}

double Ellipse::GetPerimeter() const {
	return 2 * 3.141592 * sqrt((_a * _a + _b * _b) / 2.0) ;
}