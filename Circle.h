#pragma once

class Circle {

public:
	double radius;
	float PI = 3.14;

	//constructor
	Circle(double radius);
	
	//setter methods
	void setRadius(double r);

	//getter methods
	double getRadius() const;
	double getArea() const;
	double getCircumference() const;

};