#pragma once
#include "Vehicles.h"
#include "Displayable.h"

class Mazda : public Vehicle, public Displayable {
public:
	void display();
	void driving();
};