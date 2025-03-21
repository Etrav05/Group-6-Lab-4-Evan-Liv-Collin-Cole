#include "Shapes.h"

void getTotalArea(Shape* shapes[], int amount) { // input an arrayof shape objects (rectangle or circle) as well as the amount inputted
	double total = 0;

	for (int i = 0; i < amount; i++) { // for the amount of shapes inputted
		total = total + shapes[i]->area(); // add up the areas
	}

	cout << "Total area of these shapes = " << total << endl; // print total area
}