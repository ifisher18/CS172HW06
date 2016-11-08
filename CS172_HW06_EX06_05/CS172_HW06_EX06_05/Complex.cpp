// .cpp file for Complex

#include <iostream>
#include <string>
#include "Complex.h"
#include <cmath>

using namespace std;

// Constructors
Complex (a, b) {}
Complex::Complex(a) {}
Complex::Complex() {}

// function that returns the addition of two complex numbers
double Complex::add(double a_Add, double b_Add, double c_Add, double d_Add) {
	return ((a_Add + c_Add) + (b_Add + d_Add));
}

// function that returns the subtraction of two complex numbers
double Complex::subtract(double a_sub, double b_sub, double c_sub, double d_sub) {
	return ((a_sub - c_sub) + (b_sub - d_sub));
}

// function that returns the multiplication of two complex numbers
double Complex::multiply(double a_mult, double b_mult, double c_mult, double d_mult) {
	return (((a_mult * c_mult) - (b_mult * d_mult)) + ((b_mult * c_mult) - (a_mult * d_mult)));
}

// function that returns the division of two complex numbers
double Complex::divide(double a_div, double b_div, double c_div, double d_div) {
	return (((a_div * c_div) + (b_div * d_div)) / ((div_c) * (div_c)+(div_d * div_d))) + (((b_div * c_div) - (a_div * d_div)) / ((div_c) * (div_c)+(div_d * div_d)));
}

// function that returns the absolute value of a complex number
double Complex::abs(double a_abs, double b_abs) {
	return sqrt((a_abs * a_abs) + (b_abs * b_abs));
}

// function that returns a + bi as a string
string Complex::toString(int toStringVal) {
	char *intStr = itoa(toStringVal);
	string str = string(intStr);
}

// function that returns the real part of a complex number
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