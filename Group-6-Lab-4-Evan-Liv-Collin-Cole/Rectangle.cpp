#include "Rectangle.h"

Rectangle::Rectangle() { // rectangle() constructor 
	length = 0;
	height = 0;
}

Rectangle::Rectangle(int l, int h) { // rectangle(int l, int h) constructor 
	length = l;
	height = h;
}

void Rectangle::display() { // display a rectangle
	cout << "  -----------------------" << endl;
	cout << "  =                     =" << endl;
	cout << "  =      rectangle      =" << endl;
	cout << "  =                     =" << endl;
	cout << "  -----------------------" << endl;
}

double Rectangle::area() { // find, print and return the area of a rectangle
	double area = (length * height);
	cout << "The area of the rectangle is = " << area << endl;
	return area;
}