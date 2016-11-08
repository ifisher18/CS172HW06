#pragma once
// header file for Complex class
#include <iostream>
#include <string>

using namespace std;

class Complex {
public:
	// data field
	double a;
	double b;
	double c;
	double d;

	// other functions
	double add();
	double subtract();
	double multiply(double, double, double, double);
	double divide(double, double, double, double);
	double abs(double, double);
	double subtract(double, double, double, double);
	string toString(int);
	double getRealPart();
	double getImaginaryPart();

	//Constructors
	Complex(double a, double b);
	Complex(double a);
	Complex();

	// overload operator functions!!
	// overload +
	double operator+(Complex& that);
	// overload -
	double operator-(Complex& that);
	// overload *
	double operator*(Complex& that);
	// overload /
	double operator/(Complex& that);
	// overload +=
	double operator+=(Complex& that);
	// overload -=
	double operator-=(Complex& that);
	// overload *=
	double operator*=(Complex& that);
	// overload /=
	double operator/=(Complex& that);
	// overload []
	double operator[](Complex& that);
	// overload unary +
	double operator+(Complex& that);
	// overload unary -
	double operator+(Complex& that);
	// overload prefix ++

	// having issues with these
	double operator++(Complex& that);
	// overload prefix --
	double operator--(Complex& that);
	// overload postfix ++
	double operator++(Complex& that);
	// overload postfix --
	double operator--(Complex& that);

	// overload <<
	double operator<<(Complex& that);
	// overload >>
	double operator>>(Complex& that);
};