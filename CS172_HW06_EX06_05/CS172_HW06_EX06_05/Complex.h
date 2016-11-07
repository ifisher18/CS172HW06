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
	double add(double a_add, double b_add, double c_add, double d_add);
	double subtract();
	double multiply();
	double divide();
	double abs();
	string toString();
	double getRealPart();
	double getImaginaryPart();

	//Constructors
	Complex(double a, double b);
	Complex(double a);
	Complex();


};