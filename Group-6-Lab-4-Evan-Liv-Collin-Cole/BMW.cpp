#include "BMW.h"

/// @brief Displays the BMW logo in ASCII art
///
/// This function outputs a representation of the BMW logo using text characters to the console
void BMW::display() {
	cout << "        ..- BMW -..         " << endl;
	cout << "     .' ..------..  '.      " << endl;
	cout << "    ' .+=====|     +. '     " << endl;
	cout << "   . +=======|       + .    " << endl;
	cout << "   . +=======|       + .    " << endl;
	cout << "   . +       |=======+ .    " << endl;
	cout << "   . +       |=======+ .    " << endl;
	cout << "    . '+     |=====+' .     " << endl;
	cout << "      . ''-------'' .       " << endl;
	cout << "       ''---------''       " << endl;
}

/// @brief Displays the driving message of a BMW
///
/// This function outputs a message representing a BMW driving
void BMW::driving() {
	cout << "The BMW is driving" << endl;
}