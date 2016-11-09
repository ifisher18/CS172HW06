//////////////////////
// Ian Fisher
// CS 172
// 11/6/16
//////////////////////

#include <iostream>
#include <string>
#include "Complex.h" // include the header file "Complex.h"

using namespace std;

int main() {

	// create four double variables that hold the inputed user values
	double a_input;
	double b_input;
	double c_input;
	double d_input;

	// overload operator functions!! (as nonmember functions)
	// overload +
	double operator+(Complex& that) {
		return that.add();
	}
	// overload -
	double operator-(Complex& that) {
		return that.subtract();
	}
	// overload *
	double operator*(Complex& that) {
		return that.multiply();
	}
	// overload /
	double operator/(Complex& that) {
		return that.divide();
	}
	// overload [] so that [0] returns a and [1] returns b
	double Complex::operator[](Complex& that) {
		if ([that] == [0]) { // if the memory location of that equals 0, then return a
			return a;
		}
		else if ([that] == [1]) { // if the memory location of that equals 1, then return b
			return b;
		}

	// Test program that implements class with 2 sample inputed complex numbers
	cout << "Welcome! This program displays the results of adding, subtracting, multiplying, dividing, and finding the absolute value of complex numbers." << endl;
	cout << endl;

	// prompt user for first complex number
	cout << "This first complex numbers will be of the form a + bi" << endl;
	cout << "Enter the first complex number by entering values for a and b seperated with a space: ";
	cin >> a_input >> " " >> b_input;

	// prompt user for second complex number
	cout << "The second complex numbers will be of the form c + di" << endl;
	cout << "Enter the second complex number by entering values for c and d seperated with a space: ";
	cin >> c_input >> " " >> d_input;

	// output addition:
	cout << "(" << a_input << " + " << b_input << "i)";
	cout << " + (" << c_input << " + " << d_input << "i) = " << add(a_input, c_input) << " + " << add(b_input, c_input) << "i" << endl;
	cout << endl;

	// output subraction:
	cout << "(" << a_input << " + " << b_input << "i)";
	cout << " - (" << c_input << " + " << d_input << "i) = " << subtract(a_input, c_input) << " + " << subtract(b_input, c_input) << "i" << endl;
	cout << endl;

	// output multiplication:
	cout << "(" << a_input << " + " << b_input << "i)";
	cout << " * (" << c_input << " + " << d_input << "i) = " << multiply(a_input, c_input) << " + " << multiply(b_input, c_input) << "i" << endl;
	cout << endl;

	// output division:
	cout << "(" << a_input << " + " << b_input << "i)";
	cout << " / (" << c_input << " + " << d_input << "i) = " << divide(a_input, c_input) << " + " << divide(b_input, c_input) << "i" << endl;
	cout << endl;

	// output absolute value (distance from origin)
	cout << "|" << a_input << " + " << b_input << "| = " << abs(a_input, b_input) << endl;
	cout << endl;

	cout << "Have a nice day!" << endl;
}