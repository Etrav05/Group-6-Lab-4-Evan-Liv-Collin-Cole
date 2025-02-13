#include <iostream>
#include "Displayable.h"
#pragma once

// Shapes interface
class Shape :public Displayable {
public:
	virtual double area() = 0;
};

class Rectangle :public Shape {
	int length;
	int height;

public:
	Rectangle();
	Rectangle(int l, int h);

	void display();

	double area();
};

class Circle :public Shape {
	int radius;

public:
	Circle();
	Circle(int r);

	void display();

	double area();
};