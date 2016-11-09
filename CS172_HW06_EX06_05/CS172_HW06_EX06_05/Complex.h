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
	// 

	// other functions
	// function that adds two complex numbers together
	double add();
	// function that subtracts two complex numbers from each other
	double subtract();
	// function that multiplies two complex numbers together
	double multiply(double, double, double, double);
	// function that divides two complex numbers
	double divide(double, double, double, double);
	// function that takes the absolute value of a complex number (distance from the orgin)
	double abs(double, double);
	// function that subtracts two complex numbers of double type
	double subtract(double, double, double, double);
	// function that converts a complex number to a string
	string toString(int);
	// function that gets the real part of a complex number
	double getRealPart();
	// function that gets the imaginary part of a complex number
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
	

	// having issues with these
	// overload prefix ++
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