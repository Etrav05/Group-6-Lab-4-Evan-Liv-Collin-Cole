#pragma once
#include "Vehicles.h"
#include "Displayable.h"

/// <summary>
/// @file Mazda.h
/// 
/// @brief Header file defining the Mazda interface and related functions
/// 
/// Defines the behaviours of Mazdas, specifically the display and driving functions
/// </summary>

class Mazda : public Vehicle, public Displayable {
public:

	/// </summary>
	///@brief This function is used to display a Mazda
	///
	/// This display function is called within the Displayable classes draw function given a "displayable" object
	/// </summary>

	void display();

	/// </summary>
	///@brief This function is used to display the Mazda's driving function
	/// 
	/// This driving function is called within the Vehicle classes drive function given a "Vehicle" object
	/// </summary>

	void driving();
};