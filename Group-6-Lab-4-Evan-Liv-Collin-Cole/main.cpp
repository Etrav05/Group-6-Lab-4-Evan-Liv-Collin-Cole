#include <iostream>
#include "Displayable.h"
#include "Vehicles.h"
#include "BMW.h"
#include "Mazda.h"	
#include "Shapes.h"
#include "Rectangle.h"
#include "Circle.h"

// Evan
// Cole
// Liv

using namespace std;

int main() {

	// total area function
	Rectangle rect1(6, 11), rect2(13, 2);
	Circle circ1(4), circ2(3);

	Shape* shapes[] = { &rect1, &rect2, &circ1, &circ2 };

	getTotalArea(shapes, 4);
	
	cout << endl; // just here to add space

	// displaying Shapes and Vehicles + Drive function
	Rectangle rectangle1(10, 5);
	Circle circle1(5);
	
	BMW bmw1;
	Mazda mazda1;

	draw(rectangle1);
	rectangle1.area();

	draw(circle1);
	circle1.area();

	draw(bmw1);
	drive(bmw1);

	draw(mazda1);
	drive(mazda1);

	return 0;
}