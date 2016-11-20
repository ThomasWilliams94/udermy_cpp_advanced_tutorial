//============================================================================
// Name        : 038_DecltypeTypeidAndNameMangling.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

	string value;

	cout << typeid(value).name() << endl;

	// C++11 specific
	decltype(value) name = "bob";

	cout << typeid(value).name() << endl;

	cout << name << endl;

	return 0;
}
