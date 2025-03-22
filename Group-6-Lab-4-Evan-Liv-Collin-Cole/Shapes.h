#pragma once

/// @file Shapes.h
/// 
/// @brief Header file defining the Shape interface and related functions
/// 
/// Defines the behaviour of Shapes, specifically the area function, as well as the getTotalArea function of Shape objects

#include <iostream>
using namespace std;

/// @brief Shape Abstract Class
/// 
/// Defines area behaviour
class Shape  {
public:

	/// @brief Pure virtual function for a shapes area
	/// 
	/// This function must be implemented by any class that inherits from Shape
	/// It represents the area of that given shape
	virtual double area() = 0;
};

/// @brief Function to get the total area of an array of shapes
///
/// This function takes an array of shape objects and calls their area methods
/// This is polymorphism by working with any object that implements the Vehicle interface
///
/// @param "shape[]" Pointer to an array of shape objects
/// @param "amount" Number of shapes in parameter "shape[]" array
void getTotalArea(Shape* shapes[], int amount);
