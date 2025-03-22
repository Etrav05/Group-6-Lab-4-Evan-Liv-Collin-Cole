#include "Displayable.h"


/// @brief Function to draw a Displayable object
///
/// This function will call the display behaviour of a given Displayable object "o"
/// Then adds an extra line for formatting reasons with "cout << endl;"
/// 
/// @param "o" Reference to a Displayable object
void draw(Displayable& o) {
	o.display();
	cout << endl;
}