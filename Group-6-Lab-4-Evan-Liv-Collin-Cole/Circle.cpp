#include "Circle.h"

Circle::Circle() { // circle() constructor 
	radius = 0;
}

Circle::Circle(int r) { // circle(int r) constructor 
	radius = r;
}

void Circle::display() { // display a circle
	cout << "        ..------..         " << endl;
	cout << "      .+          +.       " << endl;
	cout << "     +              +      " << endl;
	cout << "     +    circle    +      " << endl;
	cout << "     +              +      " << endl;
	cout << "     +              +      " << endl;
	cout << "      '+          +'       " << endl;
	cout << "        ''------''         " << endl;
}

double Circle::area() { // find, print and return the area of a circle
	double area = (PI * (radius * radius));
	cout << "The area of the circle is = " << area << endl;
	return area;
}
