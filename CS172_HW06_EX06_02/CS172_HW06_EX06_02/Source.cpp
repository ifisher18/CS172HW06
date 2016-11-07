//
//  main.cpp
//  Fun Fun Fun
//
//  Created by Ian J. Fisher on 11/6/16.
//  Copyright © 2016 Ian J. Fisher. All rights reserved.
//

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
    cout << "Hello! Please enter a file name (test file is Test.txt): ";
    getline(cin, input);
    
    int count = 0;
    fstream iofile(input, ios::in | ios::out); // opens file, etc.
    if (!iofile) { // if the file can't be opened
        cout << "Error: can't open file" << endl;
    }
    
    else
    {
        char character; // char variable created
        while (iofile >> character) {
            count++; // increments count every time a character is recorded
        }

		// end of file operations
        iofile.clear();
        iofile.seekg(0, ios::end);

        // Displays the number characters in the file
        cout << "\n\nThis file has " << count << " characters." << endl;
    }
    return 0;
}
