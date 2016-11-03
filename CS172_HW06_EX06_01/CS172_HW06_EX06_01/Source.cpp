//////////////////
// Ian Fisher
// CS 172
// 11/3/16
//////////////////

#include <iostream>
#include <string>
#include <fstream> // library to use ofstream
#include <cstdlib>
#include <ctime>

using namespace std;

// program that creates a file, appends new data (100 ints), puts data into file using text I/O
int main() {
	ofstream fout; // declare ofstream object
	fout.open("Exercise13_1.txt"); // opens file

	// if statement that checks if open successful
	if (fout.fail()) {
		cout << "can't open file" << endl;
		return 0;
	}

	// code that generates 100 random integers sep. by a space
	srand((unsigned)time(0));
	int j;
	for (int i = 0; i < 100; i++) {
		
		j = (rand() % 100) + 1; // rand num generator
		fout << j << " "; // fout random number generated for each loop
	}

	fout.close(); // close the file

}