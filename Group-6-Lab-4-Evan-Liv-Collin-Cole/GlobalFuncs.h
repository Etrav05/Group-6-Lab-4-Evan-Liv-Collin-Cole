#pragma once
#include <iostream>
#include "Shapes.h"
#include "Displayable.h"
#include "Vehicles.h"

void draw(Displayable& o);

void drive(Vehicle& v);

void getTotalArea(Shape* shapes[], int amount);
