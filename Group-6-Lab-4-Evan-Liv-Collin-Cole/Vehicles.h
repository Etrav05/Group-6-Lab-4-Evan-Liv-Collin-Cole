#pragma once
#include <iostream>

using namespace std;

// Vehicles interface
class Vehicle {
public:
	virtual void driving() = 0;
};

void drive(Vehicle& v);