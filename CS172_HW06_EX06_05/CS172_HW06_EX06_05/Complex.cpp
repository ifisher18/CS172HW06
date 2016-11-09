// .cpp file for Complex

#include <iostream>
#include <string>
#include "Complex.h"
#include <cmath>

using namespace std;

// I am a little confused on this part of the project-- I know that overload operators specify more than one definition for an operator in the same scope
// when the overload operator, the compiler determines the right definition by comparing the arguments of each
// I understand the general intuition behind this, but can't implement it in code

// Constructors
Complex::Complex () {
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

// Constructor for 
Complex::Complex(double a) {
	a = 0;
}
Complex::Complex() {
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

// function that returns the addition of two complex numbers DONE
// this function will be used to find the addition of complex numbers
double Complex::add(double a_Add, double b_Add, double c_Add, double d_Add) {
	return ((a_Add + c_Add) + (b_Add + d_Add));
}

// function that returns the subtraction of two complex numbers DONE
double Complex::subtract(double a_sub, double b_sub, double c_sub, double d_sub) {
	return ((a_sub - c_sub) + (b_sub - d_sub));
}

// function that returns the multiplication of two complex numbers DONE
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

// function that returns the Imaginary part of a complex number
double Complex::getImaginaryPart() {}

// overload operator functions!! (need to implement these
// overload +
double Complex::operator+(Complex& that) {
	return that.add();
}
// overload -
double Complex::operator-(Complex& that) {
	return that.subtract();
}
// overload *
double Complex::operator*(Complex& that) {
	return that.multiply();
}
// overload /
double Complex::operator/(Complex& that) {
	return that.divide();
}
// overload +=
double Complex::operator+=(Complex& that) {
	return += that.getRealPart;
}
// overload -=
double Complex::operator-=(Complex& that) {
	return -= that.getRealPart;
}
// overload *=
double Complex::operator*=(Complex& that) {
	return *= that.getRealPart;
}
// overload /=
double Complex::operator/=(Complex& that) {
	return /= that.getRealPart;
}
// overload []
double Complex::operator[](Complex& that) {
	return[that];
}

// not sure on this one how to define in header file
// overload unary +
double Complex::operator+(Complex& that) {
	return &that;
}
// overload unary -
double Complex::operator+(Complex& that) {
	return (-1 * that);
}
// overload prefix ++

// having issues with these
double Complex::operator++(Complex& that) {
	return ++that;
}
// overload prefix --
double Complex::operator--(Complex& that) {
	return --that;
}
// overload postfix ++
double Complex::operator++(Complex& that) {
	return that++;
}
// overload postfix --
double Complex::operator--(Complex& that) {
	return that--;
}

// overload <<
double Complex::operator<<(Complex& that) {
	return friend ostream that;
}
// overload >>
double Complex::operator>>(Complex& that) {
	return friend ostream that;
}