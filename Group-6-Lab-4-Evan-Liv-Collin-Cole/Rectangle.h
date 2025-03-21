#pragma once
#include "Shapes.h"
#include "Displayable.h"

/// <summary>
/// @file Rectangle.h
/// 
/// @brief Header file defining the Rectangle interface and related functions
/// 
/// Defines the attributes and behaviours of Rectangles. The attributes being length and width integers and the behaviours being default/parameterized constructors, display function, and area function
/// </summary>

class Rectangle :public Shape, public Displayable {
	int length;
	int height;

public:
	Rectangle();
	Rectangle(int l, int h);

	void display();

	double area();
};