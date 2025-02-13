#include <iostream>
#define PI		3.14159

using namespace std;

class Displayable {
public:
	virtual void display() = 0;
};

class Shape :public Displayable {
public:
	virtual double area() = 0;
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

	double area() {
		double area = (length * height);
		cout << "The area of the rectangle is = " << area << endl;
		return area;
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

	double area() {
		double area = (PI * (radius * radius));
		cout << "The area of the circle is = " << area << endl;
		return area;
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
	cout << endl;
}

void drive(Vehicle& v) {
	v.driving();
	cout << endl;
}

void getTotalArea(Shape* shapes[], int amount) {
	double total = 0;

	for (int i = 0; i < amount; i++) {
		total = total + shapes[i]->area();
	}

	cout << "Total area of these shapes = " << total << endl;
}

int main() {

	// Total area function
	Rectangle rect1(6, 11), rect2(13, 2);
	Circle circ1(4), circ2(3);

	Shape* shapes[] = { &rect1, &rect2, &circ1, &circ2 };

	getTotalArea(shapes, 4);
	
	cout << endl;

	// Displaying Shapes and Vehicles + Drive function
	Rectangle rectangle1(10, 5);
	Circle circle1(5);
	BMW bmw1;
	Mazda mazda1;

	draw(rectangle1);
	rectangle1.area();

	draw(circle1);
	circle1.area();

	draw(bmw1);
	drive(bmw1);

	draw(mazda1);
	drive(mazda1);

	return 0;
}