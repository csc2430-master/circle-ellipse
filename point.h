//
// Created by Arias Arevalo, Carlos on 5/19/25.
//

#ifndef POINT_H
#define POINT_H

#include <string>
using std::string;

class Point {
private:
	double _x, _y;
public:
	Point(double x = 0, double y = 0);
	string ToString()const;
	double Distance(const Point &p)const;
	double GetX()const;
	double GetY()const;
};



#endif //POINT_H
