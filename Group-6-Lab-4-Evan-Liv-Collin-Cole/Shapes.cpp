#include "Displayable.h"
#include "Shapes.h"

#define PI		3.14159

using namespace std;

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
	cout << "  -                     -" << endl;
	cout << "  -      rectangle      -" << endl;
	cout << "  -                     -" << endl;
	cout << "  -----------------------" << endl;
}

double Rectangle::area() { // find, print and return the area of a rectangle
	double area = (length * height);
	cout << "The area of the rectangle is = " << area << endl;
	return area;
}


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
