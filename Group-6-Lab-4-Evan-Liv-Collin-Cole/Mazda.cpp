#include "Mazda.h"

/// @brief Displays a Mazda SUV in ASCII art.
///
/// This function outputs a representation of a Mazda SUV using text characters to the console
void Mazda::display() {
	cout << "      ..------------------.." << endl;
	cout << "     /                   |  '." << endl;
	cout << "    |                     |    '., " << endl;
	cout << "    |                      '''''''''''." << endl;
	cout << "    |  Mazda                         }o}" << endl;
	cout << "    |                                }}} " << endl;
	cout << "    '..../'###'\\............/'###'\\.../ " << endl;
	cout << "          ##O##              ##O## " << endl;
	cout << "           ###                ### " << endl;
}

/// @brief Displays the driving message of a Mazda
///
/// This function outputs a message representing a Mazda driving 
void Mazda::driving() {
	cout << "The Mazda is driving" << endl;
}