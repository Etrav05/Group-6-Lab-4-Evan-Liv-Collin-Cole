#include "Shapes.h"

/// @brief Function to get the total area of an array of shapes
///
/// This function iterates through the array of shape objects, given the inputted amount, and calls their area methods, adding each area value to a "total" variable 
/// This funtion then printings this total area along with a message
/// 
/// @param "shape[]" Pointer to an array of shape objects
/// @param "amount" Number of shapes in parameter "shape[]" array
void getTotalArea(Shape* shapes[], int amount) {
	double total = 0;

	for (int i = 0; i < amount; i++) {
		total = total + shapes[i]->area();
	}

	cout << "Total area of these shapes = " << total << endl;
}