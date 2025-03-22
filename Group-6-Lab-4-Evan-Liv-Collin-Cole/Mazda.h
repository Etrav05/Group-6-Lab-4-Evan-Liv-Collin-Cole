#pragma once

/// @file Mazda.h
/// 
/// @brief Header file defining the Mazda interface
/// 
/// Defines the behaviours of Mazdas

#include "Vehicles.h"
#include "Displayable.h"

/// @brief Mazda Class defining the Mazda functions
/// 
/// Defines the behaviours display and driving

class Mazda :public Vehicle, public Displayable {
public:

	/// @brief This function is used to display a Mazda
	///
	/// This display function is called within the Displayable classes draw function given a "displayable" object
	void display();

	/// @brief This function is used to display the Mazda's driving function
	/// 
	/// This driving function is called within the Vehicle classes drive function given a "Vehicle" object
	void driving();
};