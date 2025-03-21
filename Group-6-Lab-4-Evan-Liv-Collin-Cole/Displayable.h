#pragma once
#include <iostream>

using namespace std;

/// <summary>
/// @file Displayable.h
/// 
/// @brief Header file defining the Displayable interface and related functions
/// 
/// Defines the behaviour of Displayable, specifically the display function, as well as the draw function of Displayable objects
/// </summary>

class Displayable {
public:
	virtual void display() = 0;
};

void draw(Displayable& o);