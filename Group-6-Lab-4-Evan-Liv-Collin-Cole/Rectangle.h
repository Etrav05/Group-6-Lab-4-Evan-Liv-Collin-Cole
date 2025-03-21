#pragma once
#include "Shapes.h"
#include "Displayable.h"

class Rectangle :public Shape, public Displayable {
	int length;
	int height;

public:
	Rectangle();
	Rectangle(int l, int h);

	void display();

	double area();
};