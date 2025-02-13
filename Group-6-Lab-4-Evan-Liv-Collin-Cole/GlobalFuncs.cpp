#include "GlobalFuncs.h"

using namespace std;

void draw(Displayable& o) { // draw function which displays any object under the displayable class
	o.display();
	cout << endl;
}

void drive(Vehicle& v) { // drive function which drives any object under the vehicle class
	v.driving();
	cout << endl;
}

void getTotalArea(Shape* shapes[], int amount) { // input an arrayof shape objects (rectangle or circle) as well as the amount inputted
	double total = 0;

	for (int i = 0; i < amount; i++) { // for the amount of shapes inputted
		total = total + shapes[i]->area(); // add up the areas
	}

	cout << "Total area of these shapes = " << total << endl; // print total area
}