#include "Circle.h"
#include <cmath>

Circle::Circle(double r) : radius(r) {}

void Circle::setRadius(double r) {
	radius = r;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	return PI * radius * radius;
}

double Circle::getCircumference() const {
	return 2 * PI * radius;
}