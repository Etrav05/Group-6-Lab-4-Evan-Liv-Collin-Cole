#include "Rectangle.h"

/// @brief Default constructor for the Rectangle class
///
/// Initializes the length and width to 0
Rectangle::Rectangle() {
	length = 0;
	height = 0;
}

/// @brief Parameterized constructor for the Rectangle class
///
/// Initializes the length to "l" and the height to "h" parameters
Rectangle::Rectangle(int l, int h) {
	length = l;
	height = h;
}

/// @brief Displays a rectangle in ASCII art
///
/// This function outputs a representation of a rectangle using text characters to the console
void Rectangle::display() {
	cout << "  -----------------------" << endl;
	cout << "  =                     =" << endl;
	cout << "  =      rectangle      =" << endl;
	cout << "  =                     =" << endl;
	cout << "  -----------------------" << endl;
}

/// @brief Calculates the area of a rectangle object
///
/// This function calculates the formula of a rectangles area (length * width) given a rectangle objects length and height attributes
/// This function then outputs a message of this calculated area
/// 
/// @return The calculated area of the rectangle
double Rectangle::area() {
	double area = (length * height);
	cout << "The area of the rectangle is = " << area << endl;
	return area;
}