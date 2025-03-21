#pragma once
#include <iostream>

using namespace std;

// Shapes interface
class Shape  {
public:
	virtual double area() = 0;
};

void getTotalArea(Shape* shapes[], int amount);
