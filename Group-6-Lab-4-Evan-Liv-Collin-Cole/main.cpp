#include <iostream>

using namespace std;

class Displayable {
public:
	virtual void display() = 0;
};

class Shape :public Displayable {
};

class Rectangle :public Shape{
public:
	void display() {
		cout << "  -----------------------" << endl;
		cout << "  -                     -" << endl;
		cout << "  -      rectangle      -" << endl;
		cout << "  -                     -" << endl;
		cout << "  -----------------------" << endl;


	}
};

class Circle :public Shape {
public:
	void display() {
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
public:
	virtual void driving();
};

class BMW :public Vehicle {
public:
	void display() {
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

	void driving() {
		cout << "The BMW is driving" << endl;
	}
};

class Mazda : public Vehicle {
public:
	void display() {
		cout << "      ..------------------.." << endl;
		cout << "     /                   |  '." << endl;
		cout << "    |                     |    '., " << endl;
		cout << "    |                      '''''''''''." << endl;
		cout << "    |                                }o}" << endl;
		cout << "    |                                }}} " << endl;
		cout << "    '..../'###'|............|'###'|.../ " << endl;
		cout << "          ##O##              ##O## " << endl;
		cout << "           ###                ### " << endl;
	}
};

void draw(Displayable& o) {
	o.display();
	cout << "" << endl;
}

int main() {

	Rectangle rectangle1;
	Circle circle1;
	BMW bmw1;
	Mazda mazda1;

	draw(rectangle1);
	draw(circle1);
	draw(bmw1);
	draw(mazda1);
}