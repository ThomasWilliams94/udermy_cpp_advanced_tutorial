//============================================================================
// Name        : 025_ComplexNumberClass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace tjw;


int main() {

	Complex c1;
	Complex c2(5.7, 2.0);
	Complex c3 = c2;
	c1 = Complex(2, 3);

	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;

	return 0;
}
