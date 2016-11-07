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
	if (!iofile) {
		cout << "Error: can't open file" << endl;
	}

	else
	{
		string character;
		while (iofile >> character) {
			count++;
		}
		iofile.clear();
		iofile.seekg(0, ios::end);
		// Displays the number characters in the file
		iofile << "\n\nThis file has " << count << " characters." << endl;
	}





	

	
}