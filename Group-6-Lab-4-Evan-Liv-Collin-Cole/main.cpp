#include <iostream>

using namespace std;

class Displayable {
public:
	virtual void draw() = 0;
};

class Shape :public Displayable {
};

class Rectangle :public Shape{
public:
	void draw() {
		cout << "-----------------------" << endl;
		cout << "-                     -" << endl;
		cout << "-      rectangle      -" << endl;
		cout << "-                     -" << endl;
		cout << "-----------------------" << endl;


	}
};

class Circle :public Shape {
public:
	void draw() {
		cout << "        ..------..         " << endl;
		cout << "      .+          +.       " << endl;
		cout << "     +              +      " << endl;
		cout << "     +    circle    +      " << endl;
		cout << "     +              +      " << endl;
		cout << "     +              +      " << endl;
		cout << "      '+          +'       " << endl;
		cout << "        ''------''         " << endl;
	}
};

class Vehicle :public Displayable {
};

class BMW :public Vehicle {
public:
	void draw() {
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
};

void display(Displayable& o) {
	o.draw();
	cout << "" << endl;
}

int main() {

	Circle c1;
	BMW bmw;

	display(c1);
	display(bmw);

}