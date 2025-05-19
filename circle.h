//
// Created by Arias Arevalo, Carlos on 5/19/25.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "ellipse.h"

class Circle : public Ellipse {
public:
	Circle(double radius, Point center);
	string ToString()const;
	double GetPerimeter()const;

};



#endif //CIRCLE_H
