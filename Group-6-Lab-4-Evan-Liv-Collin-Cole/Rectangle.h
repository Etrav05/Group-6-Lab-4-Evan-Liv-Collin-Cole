#pragma once

/// @file Rectangle.h
/// 
/// @brief Header file defining the Rectangle interface
/// 
/// Defines the attributes and behaviours of Rectangles

#include "Shapes.h"
#include "Displayable.h"

/// @brief Rectangle Class defining the Rectangle attributes and behaviours
/// 
/// Defines the attributes of length and width as integers and the behaviours of default/parameterized constructors, display function, and area function

class Rectangle :public Shape, public Displayable {
	int length;
	int height;

public:

	/// @brief Default constructor for a rectangle object
	/// 
	/// This function will be the default call for creating a rectangle
	Rectangle();

	/// @brief Parameterized constructor for a rectangle object
	/// 
	/// This function will assign values to a rectangles attributes, length set to "l" and height set to "h"
	/// 
	/// @param "l" an int value
	/// @param "h" an int value
	Rectangle(int l, int h);

	/// @brief Function to display a rectangle
	/// 
	/// This function will print a set shape of a rectangle when called
	void display();

	/// @brief Function to calculate the area of a rectangle
	/// 
	/// This function will calculate the area of a rectangle given its attributes, length and width
	double area();
};