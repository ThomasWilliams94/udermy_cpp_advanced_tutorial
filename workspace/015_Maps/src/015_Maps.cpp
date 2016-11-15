//============================================================================
// Name        : 015_Maps.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main() {

	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	ages["Mike"] = 70;

	pair<string, int> addToMap("Peter", 100);
	ages.insert(addToMap); // could use pair constructor directly

	ages.insert(make_pair("Thomas", 22)); // handy way of quickly adding a new pair

	cout << ages["Mike"] << endl;

	cout << ages["Sue"] << endl; // This will actually add "Sue" to the map!

	if (ages.find("Vicky") != ages.end()) {
		cout << "Found Vicky!" << endl;
	} else {
		cout << "Key not found." << endl;
	}

	if (ages.find("Jemima") != ages.end()) {
		cout << "Found Jemima!" << endl;
	} else {
		cout << "Key not found." << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;

		cout << age.first << ": " << age.second << endl;
	}

	return 0;
}
