#include "Circle.h"

/// @brief Default constructor for the Circle class
///
/// Initializes the radius to 0
Circle::Circle() {
	radius = 0;
}

/// @brief Parameterized constructor for the Circle class
///
/// Initializes the radius to "r" parameter
Circle::Circle(int r) {
	radius = r;
}

/// @brief Displays a circle in ASCII art
///
/// This function outputs a representation of a circle using text characters to the console
void Circle::display() {
	cout << "        ..------..         " << endl;
	cout << "      .+          +.       " << endl;
	cout << "     +              +      " << endl;
	cout << "     +    circle    +      " << endl;
	cout << "     +              +      " << endl;
	cout << "     +              +      " << endl;
	cout << "      '+          +'       " << endl;
	cout << "        ''------''         " << endl;
}

/// @brief Calculates the area of a circle object
///
/// This function calculates the formula of a circles area (Pi * (radius * radius)) given a circle objects radius attribute
/// This function then outputs a message of this calculated area
/// 
/// @return The calculated area of the circle
double Circle::area() {
	double area = (PI * (radius * radius));
	cout << "The area of the circle is = " << area << endl;
	return area;
}
