// Circle.cpp code below

#include <iostream>
#include "Circle.h"
using namespace std;

// Constructor: default circle object
Circle::Circle() {
	radius = 1;
}

// Constructor: creates a circle object that passes a double radius value
Circle::Circle(double Radius_New) {
	radius = Radius_New;
}

// Function that returns the area of the circle
double Circle::getArea() {
	return (radius * radius * 3.14159);
}

// Function that returns the radius of the circle
double Circle::getRadius() {
	return radius; // returns the specific radius
}

// Function that sets a new radius
void Circle::setRadius(double newRad) {
	radius = (newRad >= 0) ? newRad : 0;
}

// Implementation of < operator
bool Circle::operator<(Circle& that) {
	return getRadius() < that.getRadius();
}

// Implementation of <= operator
bool Circle::operator<=(Circle& that) {
	return getRadius() <= that.getRadius();
}

// Implementation of == operator
bool Circle::operator==(Circle& that) {
	return getRadius() == that.getRadius();
}

// Implementation of != operator
bool Circle::operator!=(Circle& that) {
	return getRadius() != that.getRadius();
}

// Implementation of > operator
bool Circle::operator>(Circle& that) {
	return getRadius() > that.getRadius();
}

// Implmentation of >= operator
bool Circle::operator>=(Circle& that) {
	return getRadius() >= that.getRadius();
}
