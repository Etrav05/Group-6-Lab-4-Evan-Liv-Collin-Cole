#include <iostream>
#pragma once

// Vehicles interface
class Vehicle :public Displayable {
public:
	virtual void driving() = 0;
};

class BMW :public Vehicle {
public:
	void display();
	void driving();
};

class Mazda : public Vehicle {
public:
	void display();
	void driving();
};