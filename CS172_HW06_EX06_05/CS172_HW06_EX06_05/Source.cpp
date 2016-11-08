//////////////////////
// Ian Fisher
// CS 172
// 11/6/16
//////////////////////

#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

int main() {
	double a_input;
	double b_input;
	double c_input;
	double d_input;

	// overload operator functions!!
	// overload +
	// overload -
	// overload *
	// overload /
	// overload [] so that [0] returns a and [1] returns b
	
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
	// output subraction:
	// output multiplication:
	// output division:
	// output absolute value (distance from origin)

	cout << "Have a nice day!" << endl;
}