//
//  main.cpp
//  Yoyoyoyo
//
//  Created by Ian J. Fisher on 11/6/16.
//  Copyright © 2016 Ian J. Fisher. All rights reserved.
//

////////////////////
// Ian Fisher
// CS 172
// 11/6/16
///////////////////

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

int main() {
    int year;
    char gender;
    string name;
    // Prompts the user to enter year, gender, followed by a name
    // year, gender, and name are entered
    cout << "Enter the year: ";
    cin >> year;
    
    cout << "Enter the gender (M/F): ";
    cin >> gender;
    
    cout << "Enter the name: ";
    cin >> name;
    
    // opening the files
    ifstream fin2010("Babynameranking2010.txt", ios::in | ios::out);
    ifstream fin2011("Babynameranking2011.txt", ios::in | ios::out);
    ifstream fin2012("Babynameranking2012.txt", ios::in | ios::out);
    ifstream fin2013("Babynameranking2013.txt", ios::in | ios::out);
    ifstream fin2014("Babynameranking2014.txt", ios::in | ios::out);
    // checking if valid or file exists
    if (!fin2010) {
        cout << "can't open Babynameranking2010.txt file" << endl;
    }
    if (!fin2011) {
        cout << "can't open Babynameranking2011.txt file" << endl;
    }
    if (!fin2012) {
        cout << "can't open Babynameranking2012.txt file" << endl;
    }
    if (!fin2013) {
        cout << "can't open Babynameranking2013.txt file" << endl;
    }
    if (!fin2014) {
        cout << "can't open Babynameranking2014.txt file" << endl;
    }
    
    //Test
    //cout << "Files correctly opened" << endl;
    
    // create map
    map<string, string> map_2010m; // 2010 males
    map<string, string> map_2010f; // 2010 females
    map<string, string> map_2011m; // 2011 males
    map<string, string> map_2011f; // 2011 females
    map<string, string> map_2012m; // 2012 males
    map<string, string> map_2012f; // 2012 females
    map<string, string> map_2013m; // 2013 males
    map<string, string> map_2013f; // 2013 females
    map<string, string> map_2014m; // 2014 males
    map<string, string> map_2014f; // 2014 females
    vector<int> Cat;
    
    
    string line;
    // Creates a vector for the split up line based on the tab for 2010 (loading maps)
    while (getline(fin2010, line)) {
        
        vector<string> vec = split(line, '\t');
        
        map_2010m[vec[1]] = vec[2];
        map_2010f[vec[3]] = vec[4];
    }
    
    // Creates a vector for the split up line based on the tab for 2011 (loading maps)
    while (getline(fin2011, line)) {
        
        vector<string> vec = split(line, '\t');
        
        map_2011m[vec[1]] = vec[2];
        map_2011f[vec[3]] = vec[4];
    }
    
    // Creates a vector for the split up line based on the tab for 2012 (loading maps)
    while (getline(fin2012, line)) {
        
        vector<string> vec = split(line, '\t');
        
        map_2012m[vec[1]] = vec[2];
        map_2012f[vec[3]] = vec[4];
    }
    
    // Creates a vector for the split up line based on the tab for 2013 (loading maps)
    while (getline(fin2013, line)) {
        
        vector<string> vec = split(line, '\t');
        
        map_2013m[vec[1]] = vec[2];
        map_2013f[vec[3]] = vec[4];
    }
    
    // Creates a vector for the split up line based on the tab for 2014 (loading maps)
    while (getline(fin2014, line)) {
        
        vector<string> vec = split(line, '\t');
        
        map_2014m[vec[1]] = vec[2];
        map_2014f[vec[3]] = vec[4];
    }
    
    
    
    // 2010: checking the year, gender, and name to determine the rank
    if (year == 2010) {
        if (gender == 'M') {
            for (const auto &pair : map_2010m) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2010" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2010" << endl;
        }
        else {
            for (const auto &pair : map_2010f) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2010" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2010" << endl;
        }
    }
    
    // 2011: checking the year, gender, and name to determine the rank
    else if (year == 2011) {
        if (gender == 'M') {
            for (const auto &pair : map_2011m) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2011" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2011" << endl;
        }
        else {
            for (const auto &pair : map_2011f) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2011" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2011" << endl;
        }
    }
    
    // 2012: checking the year, gender, and name to determine the rank
    else if (year == 2012) {
        if (gender == 'M') {
            for (const auto &pair : map_2012m) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2012" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2012" << endl;
        }
        else {
            for (const auto &pair : map_2012f) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2012" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2012" << endl;
        }
    }
    
    // 2013: checking the year, gender, and name to determine the rank
    if (year == 2013) {
        if (gender == 'M') {
            for (const auto &pair : map_2013m) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2013" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2013" << endl;
        }
        else {
            for (const auto &pair : map_2013f) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2013" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2013" << endl;
        }
    }
    
    // 2014: checking the year, gender, and name to determine the rank
    if (year == 2014) {
        if (gender == 'M') {
            for (const auto &pair : map_2014m) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2014" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2014" << endl;
        }
        else {
            for (const auto &pair : map_2014f) {
                if (pair.first == name) {
                    cout << pair.first << " is ranked #" << pair.second << " in year 2014" << endl;
                    break;
                }
            }
            cout << "The name " << name << " is not ranked in year 2014" << endl;
        }
    }
}
