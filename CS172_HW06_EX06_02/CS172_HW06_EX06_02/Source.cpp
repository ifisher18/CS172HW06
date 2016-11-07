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
    cout << "Hello! Please enter a file name: ";
    getline(cin, input);
    
    // create a file
    /*ofstream fout;
    fout.open("Testing123.txt");
    
    fout << "hi\n";
    
    fout.close();*/
    
    
    //
    int count = 0;
    fstream iofile(input, ios::in | ios::out); // opens file, etc.
    if (!iofile) { // if the file can't be opened
        cout << "Error: can't open file" << endl;
    }
    
    else
    {
        // for some reason it is counting the number of words??
        char character;
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
