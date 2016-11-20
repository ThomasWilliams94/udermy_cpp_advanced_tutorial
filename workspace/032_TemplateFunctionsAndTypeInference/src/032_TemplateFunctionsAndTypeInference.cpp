//============================================================================
// Name        : 032_TemplateFunctionsAndTypeInference.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
void print(T n) {
	cout << "Template version: " << n << endl;
}

void print(int value) {
	cout << "Non-template version: " << value << endl;
}

template<class T>
void show() {
	cout << "Second template version: " << T() << endl;
}

int main() {


	print<int>(5);
	print<string>("Alright?");


	print("He there");

	print(10);
	print<>(10);

	show<int>();
	show<string>();
	show<double>();

	return 0;
}
