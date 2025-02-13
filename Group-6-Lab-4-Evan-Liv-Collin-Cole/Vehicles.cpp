#include "Displayable.h"
#include "Vehicles.h"

using namespace std;

void BMW::display() { // display the logo of a BMW
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

void BMW::driving() { // drive the BMW
	cout << "The BMW is driving" << endl;
}


void Mazda::display() { // display art of a Mazda
	cout << "      ..------------------.." << endl;
	cout << "     /                   |  '." << endl;
	cout << "    |                     |    '., " << endl;
	cout << "    |                      '''''''''''." << endl;
	cout << "    |  Mazda                         }o}" << endl;
	cout << "    |                                }}} " << endl;
	cout << "    '..../'###'|............|'###'|.../ " << endl;
	cout << "          ##O##              ##O## " << endl;
	cout << "           ###                ### " << endl;
}

void Mazda::driving() { // drive the Mazda
	cout << "The Mazda is driving" << endl;
}
