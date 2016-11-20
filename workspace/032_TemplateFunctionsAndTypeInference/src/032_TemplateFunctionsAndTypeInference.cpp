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
	cout << n << endl;
}

int main() {


	print<int>(5);
	print<string>("Alright?");


	print("He there");

	return 0;
}
