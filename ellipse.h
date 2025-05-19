//
// Created by Arias Arevalo, Carlos on 5/19/25.
//

#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "point.h"

class Ellipse {
protected: // These members are accessible to the class and its subclasses
		   // BUT not to the clients (outsiders)
	double _a, _b;
	Point _center;
public:
	Ellipse(double a, double b, Point center);
	Ellipse(double a, double b);
	string ToString() const;
	double GetArea()const;
	double GetPerimeter()const;
};




#endif //ELLIPSE_H
