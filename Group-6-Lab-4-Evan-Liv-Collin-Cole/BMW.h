#pragma once
#include "Vehicles.h"
#include "Displayable.h"

/// <summary>
/// @file BMW.h
/// 
/// @brief Header file defining the BMW interface and related functions
/// 
/// Defines the behaviours of BMWs, specifically the display and driving functions
/// </summary>

class BMW :public Vehicle, public Displayable {
public:

	/// </summary>
	///@brief This function is used to display a BMW
	///
	/// This display function is called within the Displayable classes draw function given a "displayable" object
	/// </summary>

	void display();

	/// </summary>
	///@brief This function is used to display the BMW's driving function
	/// 
	/// This driving function is called within the Vehicle classes drive function given a "Vehicle" object
	/// </summary>

	void driving();
};