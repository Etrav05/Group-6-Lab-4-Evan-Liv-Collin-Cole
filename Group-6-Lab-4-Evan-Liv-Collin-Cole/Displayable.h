#pragma once
#include <iostream>

using namespace std;

// Displayable interface
class Displayable {
public:
	virtual void display() = 0;
};

void draw(Displayable& o);