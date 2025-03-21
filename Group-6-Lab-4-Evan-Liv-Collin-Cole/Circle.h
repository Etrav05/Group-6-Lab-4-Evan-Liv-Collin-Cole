#pragma once
#include "Shapes.h"
#include "Displayable.h"

#define PI		3.14159

class Circle :public Shape, public Displayable {
	int radius;

public:
	Circle();
	Circle(int r);

	void display();

	double area();
};