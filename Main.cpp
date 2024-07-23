#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	double radius;

	//User input
	cout << "Enter the radius of the circle:" << endl;
	cin >> radius;

	//Create class

	Circle circ(radius);

	cout << "Circle details" << endl;
	cout << "Radius: " << circ.getRadius() << endl;
	cout << "Area: " << circ.getArea() << endl;
	cout << "Circumference: " << circ.getCircumference() << endl;

	return 0;
}