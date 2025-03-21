#pragma once
#include "Shapes.h"
#include "Displayable.h"

#define PI		3.14159

/// <summary>
/// @file Circle.h
/// 
/// @brief Header file defining the Circle interface and related functions
/// 
/// Defines the attribute and behaviours of Circle. The attribute being radius and the behaviours being default/parameterized constructors, display function, and area function
/// </summary>

class Circle :public Shape, public Displayable {
	int radius;

public:
	Circle();
	Circle(int r);

	void display();

	double area();
};