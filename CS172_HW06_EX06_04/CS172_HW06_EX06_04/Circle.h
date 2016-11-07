#pragma once
// Circle.h code below

#include <iostream>
using namespace std;

class Circle {
public:
	// Constructor
	Circle();
	// Constructor
	Circle(double);
	double getArea();
	double getRadius();
	void setRadius(double);
	static int GetNumberOfObjects();

	// Implementation of < operator
	bool operator<(Circle& that);

	// Implementation of <= operator
	bool operator<=(Circle& that);

	// Implementation of == operator
	bool operator==(Circle& that);

	// Implementation of != operator
	bool operator!=(Circle& that);

	// Implementation of > operator
	bool operator>(Circle& that);

	// Implmentation of >= operator
	bool operator>=(Circle& that);

private:
	// data field
	double radius;
	static int numberOfObjects;
};