#include <iostream>
#define PI		3.14159

using namespace std;

class Displayable {
public:
	virtual void display() = 0;
};

class Shape :public Displayable {
public:
	virtual void area() = 0;
};

class Rectangle :public Shape{
	int length;
	int height;

public:

	Rectangle() {
		length = 0;
		height = 0;
	}

	Rectangle(int l, int h) {
		length = l;
		height = h;
	}

	void display() {
		cout << "  -----------------------" << endl;
		cout << "  -                     -" << endl;
		cout << "  -      rectangle      -" << endl;
		cout << "  -                     -" << endl;
		cout << "  -----------------------" << endl;


	}

	void area() {
		cout << "The area of the rectangle is = " << (length * height) << endl;
	}
};

class Circle :public Shape {
	int radius;

public:

	Circle() {
		radius = 0;
	}

	Circle(int r) {
		radius = r;
	}

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

	void area() {
		cout << "The area of the circle is = " << (PI * (radius * radius)) << endl;
	}
};

class Vehicle :public Displayable {
public:
	virtual void driving() = 0;
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
		cout << "    |  Mazda                         }o}" << endl;
		cout << "    |                                }}} " << endl;
		cout << "    '..../'###'|............|'###'|.../ " << endl;
		cout << "          ##O##              ##O## " << endl;
		cout << "           ###                ### " << endl;
	}

	void driving() {
		cout << "The Mazda is driving" << endl;
	}
};

void draw(Displayable& o) {
	o.display();
	cout << "" << endl;
}

int main() {

	Rectangle rectangle1(10, 5);
	Circle circle1(5);
	BMW bmw1;
	Mazda mazda1;

	draw(rectangle1);
	rectangle1.area();

	draw(circle1);
	circle1.area();

	draw(bmw1);
	bmw1.driving();

	draw(mazda1);
	mazda1.driving();

	return 0;
}