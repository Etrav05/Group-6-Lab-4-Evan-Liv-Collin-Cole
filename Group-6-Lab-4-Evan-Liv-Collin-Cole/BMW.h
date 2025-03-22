#pragma once

/// @file BMW.h
/// 
/// @brief Header file defining the BMW interface
/// 
/// Defines the behaviours of BMWs

#include "Vehicles.h"
#include "Displayable.h"

/// @brief BMW Class defining the BMW functions
/// 
/// Defines the behaviours display and driving

class BMW :public Vehicle, public Displayable {
public:

	/// @brief This function is used to display a BMW
	///
	/// This display function is called within the Displayable classes draw function given a "displayable" object
	void display();

	/// @brief This function is used to display the BMW's driving function
	/// 
	/// This driving function is called within the Vehicle classes drive function given a "Vehicle" object
	void driving();
};