////////////////////
// Ian Fisher
// CS 172
// 11/6/16
////////////////////

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	string input = "";
	// prompts the user to enter a file name
	// string FileName;
	cout << "Hello! Please enter a file name: ";
	getline(cin, input);

	//
	int count = 0;
	fstream iofile(input, ios::in | ios::out); // opens file, etc.
	if (!iofile) { // if the file can't be opened
		cout << "Error: can't open file" << endl;
	}

	else
	{
		// for some reason it is counting the number of words??
		string character;
		while (iofile >> character) {
			count++;
		}
		iofile.clear();
		iofile.seekg(0, ios::end);
		// Displays the number characters in the file
		cout << "\n\nThis file has " << count << " characters." << endl;
	}
	return 0;
}