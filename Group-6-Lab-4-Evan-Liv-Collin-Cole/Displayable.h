#pragma once

/// @file Displayable.h
/// 
/// @brief Header file defining the Displayable interface and related functions
/// 
/// Defines the behaviour of Displayable, specifically the display function, as well as the draw function of Displayable objects

#include <iostream>
using namespace std;

/// @brief Displayable Abstract Class
/// 
/// Defines display behaviour

class Displayable {
public:

	/// @brief Pure virtual function for a displayables display behaviour
	/// 
	/// This function must be implemented by any class that inherits from Displayable
	/// It represents the action of displaying the object
	virtual void display() = 0;
};

/// @brief Function to draw a Displayable object
///
/// This function will call the display behaviour of a given Displayable object "o"
/// 
/// @param "o" Reference to a Displayable object
void draw(Displayable& o);