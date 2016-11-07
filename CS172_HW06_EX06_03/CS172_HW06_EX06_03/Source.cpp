////////////////////
// Ian Fisher
// CS 172
// 11/6/16
///////////////////

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	int year;
	char gender;
	string name;
	// Prompts the user to enter year, gender, followed by a name
	// year, gender, and name are entered
	cout << "Enter the year: ";
	cin >> year;

	cout << "Enter the gender: ";
	cin >> gender;

	cout << "Enter the name: ";
	cin >> name;

	// files are opened
	ofstream fout2010;
	ofstream fout2011;
	ofstream fout2012;
	ofstream fout2013;
	ofstream fout2014;
	fout2010.open("Babynameranking2010.txt");
	if (fout2010.fail()) {
		cout << "can't open Babynameranking2010.txt file" << endl;
	}

	fout2011.open("Babynameranking2011.txt");
	if (fout2011.fail()) {
		cout << "can't open Babynameranking2011.txt file" << endl;
	}

	fout2012.open("Babynameranking2012.txt");
	if (fout2012.fail()) {
		cout << "can't open Babynameranking2012.txt file" << endl;
	}

	fout2013.open("Babynameranking2013.txt");
	if (fout2013.fail()) {
		cout << "can't open Babynameranking2013.txt file" << endl;
	}

	fout2014.open("Babynameranking2014.txt");
	if (fout2014.fail()) {
		cout << "can't open Babynameranking2014.txt file" << endl;
	}
	//Test
	cout << "Files correctly opened" << endl;


	// displays the ranking of the name for the year
}