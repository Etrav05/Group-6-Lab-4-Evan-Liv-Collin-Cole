#pragma once
#include <iostream>

using namespace std;

/// <summary>
/// @file Shapes.h
/// 
/// @brief Header file defining the Shape interface and related functions
/// 
/// Defines the behaviour of Shapes, specifically the area function, as well as the getTotalArea function of Shape objects
/// </summary>

class Shape  {
public:
	virtual double area() = 0;
};

void getTotalArea(Shape* shapes[], int amount);
