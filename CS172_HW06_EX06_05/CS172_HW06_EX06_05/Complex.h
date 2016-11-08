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
	double multiply(double a_mult, double b_mult, double c_mult, double d_mult);
	double divide(double a_div, double b_div, double c_div, double d_div);
	double abs(double a_abs, double b_abs);
	double subtract(double a_sub, double b_sub, double c_sub, double d_sub);
	string toString(int toStringVal);
	double getRealPart();
	double getImaginaryPart();

	//Constructors
	Complex(double a, double b);
	Complex(double a);
	Complex();

	// overload operator functions!!
	// overload +
	// overload -
	// overload *
	// overload /
	// overload +=
	// overload -=
	// overload *=
	// overload /=
	// overload []
	// overload unary +
	// overload unary -
	// overload prefix ++
	// overload prefix --
	// overload postfix ++
	// overload postfix --
	// overload <<
	// overload >>
};