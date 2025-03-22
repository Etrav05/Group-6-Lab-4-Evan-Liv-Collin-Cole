#include <iostream>
#include "Displayable.h"
#include "Vehicles.h"
#include "BMW.h"
#include "Mazda.h"	
#include "Shapes.h"
#include "Rectangle.h"
#include "Circle.h"

/// @file main.h
/// 
/// @brief This solution creates various objects with inherited functions from multiple classes then runs these funtions, given these objects, in main
///
/// This tests our knowledge and implementation of inheritance, function overriding, virtual function, pure virtual function, polymorphism, and abstract classes
/// @author Evan, Cole, Collin, Liv
/// @date 21/03/2025

using namespace std;

int main() {

	Rectangle rect1(6, 11), rect2(13, 2);
	Circle circ1(4), circ2(3);

	Shape* shapes[] = { &rect1, &rect2, &circ1, &circ2 };

	getTotalArea(shapes, 4);
	
	cout << endl;

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