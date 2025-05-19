//
// Created by Arias Arevalo, Carlos on 5/19/25.
//

#include "point.h"

#include <sstream>
#include <cmath>
using std::stringstream;

Point::Point(double x, double y): _x(x), _y(y) {

}

string Point::ToString() const {
	stringstream ss;
	ss << "(" << _x << ", " << _y << ")";
	return ss.str();
}

double Point::Distance(const Point &p) const {
	return sqrt(pow(_x - p._x, 2) + pow(_y - p._y, 2));
}

double Point::GetX() const {
	return _x;
}

double Point::GetY() const {
	return _y;
}
