#include <iostream>

using namespace std;

#include "Circle.h"
#include "Ellipse.h"

int main()
{
	//BaseEllipse baseObj; - can't do that, because BaseEllipse is abstract class

	Circle cir;

	Circle circ(1, 3, 12);
	cout << "circle area:" << circ.Area() << endl;

	Ellipse elp(2, 18, 1, 15);
	cout << "elipse area: " << elp.Area() << endl;

	BaseEllipse *elipses[2];

	elipses[0] = new Ellipse(0, 1, 15, 14);
	elipses[1] = new Circle(3, 4, 17);

	cout << "elipses[0] area: " << elipses[0]->Area() << endl;
	cout << "elipses[1] area: " << elipses[1]->Area() << endl;

	delete elipses[0]; //free used memory
	delete elipses[1];

	return 0;
}