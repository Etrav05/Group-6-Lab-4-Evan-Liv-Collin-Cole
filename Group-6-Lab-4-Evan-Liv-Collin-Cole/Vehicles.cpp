#include "Vehicles.h"


/// @brief Function to "drive" a vehicle (Print "Object" is driving)
///
/// This function takes a Vehicle object and calls its driving method
/// Then adds an extra line for formatting reasons with "cout << endl;"
///
/// @param "v" Reference to a Vehicle object.
void drive(Vehicle& v) { // drive function which drives any object under the vehicle class
	v.driving();
	cout << endl;
}