// .cpp file for Complex

#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

// Constructors
Complex::Complex(a, b) {}
Complex::Complex(a) {}
Complex::Complex() {}

// function that returns the addition of a complex number
// wait it needs to return 2 values...hmmmm
double Complex::add(double a_Add, double b_Add, double c_Add, double d_Add) {
	return ((a_Add + c_Add) + (b_Add + d_Add));
}
double Complex::subtract() {}
double Complex::multiply() {}
double Complex::divide() {}
double Complex::abs() {}
string Complex::toString() {}
double Complex::getRealPart() {}
double Complex::getImaginaryPart() {}



/*public:
	// data field
	double a;
	double b;

	// other functions
	double add();
	double subtract();
	double multiply();
	double divide();
	double abs();
	string toString();
	getRealPart();
	getImaginaryPart();

	//Constructors
	Complex(double a, double b);
	Complex(double a);
	Complex();*/