#pragma once
#include <iostream>

using namespace std;

/// <summary>
/// @file Vehicles.h
/// 
/// @brief Header file defining the Vehicle interface and related functions
/// 
/// Defines the behaviour of Vehicles, specifically the driving function, as well as the drive function of Vehicle objects
/// </summary>

class Vehicle {
public:
	virtual void driving() = 0;
};

void drive(Vehicle& v);