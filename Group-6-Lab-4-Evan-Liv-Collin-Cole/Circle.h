#pragma once

/// @file Circle.h
/// 
/// @brief Header file defining the Circle interface
/// 
/// Defines the attribute and behaviours of Circle

#include "Shapes.h"
#include "Displayable.h"

#define PI		3.14159

/// @brief Circle Class defining the Circle attribute and behaviours
/// 
/// Defines the attribute of radius as an integer and the behaviours of default/parameterized constructors, display function, and area function
class Circle :public Shape, public Displayable {
	int radius;

public:

	/// @brief Default constructor for a circle object
	/// 
	/// This function will be the default call for creating a circle
	Circle();

	/// @brief Parameterized constructor for a circle object
	/// 
	/// This function will assign values to a circle attributes, radius set to "r"
	/// 
	/// @param "r" an int value
	Circle(int r);

	/// <summary>
	/// @brief Function to display a circle
	/// 
	/// This function will print a set shape of a circle when called
	void display();

	/// @brief Function to calculate the area of a circle
	/// 
	/// This function will calculate the area of a circle given its attribute, radius
	double area();
};