#pragma once

// TO OPEN THE DOXYGEN HTML YOU MUST GO TO THE REPO -> GO THROUGH REPO NAME -> HTML -> class_b_m_w.html

/// @file Vehicles.h
/// 
/// @brief Header file defining the Vehicle interface and related functions
/// 
/// Defines the behaviour of Vehicles, specifically the driving function, as well as the drive function of Vehicle objects

#include <iostream>
using namespace std;

/// @brief Vehicle Abstract Class
/// 
/// Defines driving behaviour
class Vehicle {
public:

	/// @brief Pure virtual function for a vehicles driving behaviour
	/// 
	/// This function must be implemented by any class that inherits from Vehicle
    /// It represents the action of driving the vehicle
	virtual void driving() = 0;
};

/// @brief Function to "drive" a vehicle (Print "Object" is driving)
///
/// This function takes a Vehicle object and calls its driving method
/// This is polymorphism by working with any object that implements the Vehicle interface
///
/// @param "v" Reference to a Vehicle object.
void drive(Vehicle& v);