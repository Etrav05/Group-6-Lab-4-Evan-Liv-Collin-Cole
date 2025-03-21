#pragma once
#include "Vehicles.h"
#include "Displayable.h"


class BMW :public Vehicle, public Displayable {
public:
	void display();
	void driving();
};