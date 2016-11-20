//============================================================================
// Name        : 033_FunctionPointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

void test() {
	cout << "Hello" << endl;
}

void test2(int value) {
	cout << "Hello: " << value << endl;
}

string test3(int value) {
	// Converting the int to a string was much more complicated than I thought!
	// to_string() doesn't work before C++11.... could rework the below code
	// into your own "intToString" method
	stringstream ss;

	ss << "The value given was: ";
	ss << value;

	return ss.str();
}

int main() {

	test();

	void (*pTest)(); // void (*pTest)() = test; also works

	//pTest = &test;
	pTest = test;

	//(*pTest)();
	pTest();

	cout << endl;

	test2(10);

	void (*pTest2)(int) = test2;

	pTest2(8);

	cout << endl;

	cout << test3(10) << endl;

	string (*pTest3)(int) = test3;

	string myString = pTest3(8);

	cout << myString << endl;


	return 0;
}
