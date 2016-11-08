/////////////////////////
// Ian Fisher
// CS 172
// 11/7/16
/////////////////////////

#include <iostream>
#include "Circle.h"
using namespace std;

// I interpretted the end of this problem to mean to write a test of some of the operator overload functions in class Circle:
// Testing
int main() {
	Circle circle1; // create object circle1
	Circle circle2(6.0); // create object circle2 with radius 6
	Circle circle3(10.0); // create object circle3 with radius 10.0
	Circle circle4; // creates object circle4
	Circle circle5(10.0); // create object circle5 of radius 10

	// cout what is being tested
	cout << "Testing:" << endl;
	cout << "Circle circle1" << endl;
	cout << "Circle circle2(6.0)" << endl;
	cout << "Circle circle3(10.0)" << endl;
	cout << "Circle circle4" << endl;
	cout << "Circle circle5(10.0)" << endl;
	cout << endl;
	cout << endl;

	// Testing < operator function
	if (circle1 < circle2) {
		cout << "circle2 is larger than circle1" << endl;
		cout << "The area of the circle of radius " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
		cout << "The area of the circle of radius " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl << endl;
	}
	else cout << "circle2 is smaller than circle1" << endl;
	cout << endl;

	// Testing <= operator function
	if (circle1 <= circle4) {
		cout << "circle1 is less than or equal to circle4" << endl;
		cout << "The area of the circle of radius " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
		cout << "The area of the circle of radius " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl << endl;
	}
	else cout << "circle1 is greater than circle4" << endl;
	cout << endl;

	// Testing == operator function
	if (circle3 == circle4) {
		cout << "circle3 is equal to circle4" << endl;
		cout << "The area of the circle of radius " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
		cout << "The area of the circle of radius " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl << endl;
	}
	else cout << "circle3 is not equal to circle4" << endl;
	cout << endl;

	// Testing != operator function
	if (circle1 != circle2) {
		cout << "circle1 is not equal to circle2" << endl;
		cout << "The area of the circle of radius " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
		cout << "The area of the circle of radius " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl << endl;
	}
	else cout << "circle1 is equal to circle2" << endl;
	cout << endl;

	// Testing > operator function
	if (circle3 > circle4) {
		cout << "circle3 is greater than circle4" << endl;
		cout << "The area of the circle of radius " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
		cout << "The area of the circle of radius " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl << endl;
	}
	else cout << "circle3 is not greater than circle4" << endl;
	cout << endl;

	// Testing >= operator function
	if (circle4 >= circle1) {
		cout << "circle4 is greater than or equal to circle1" << endl;
		cout << "The area of the circle of radius " << circle1.getRadius() << " is "
			<< circle1.getArea() << endl;
		cout << "The area of the circle of radius " << circle2.getRadius() << " is "
			<< circle2.getArea() << endl << endl;
	}
	else cout << "circle4 is less than circle1" << endl;
	cout << endl;
	

}