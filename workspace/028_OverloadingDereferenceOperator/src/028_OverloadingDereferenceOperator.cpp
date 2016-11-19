//============================================================================
// Name        : 028_OverloadingDereferenceOperator.cpp
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

	Complex c1(2, 4);

	cout << c1 << endl;

	cout << *c1 + c1 << endl;

	return 0;
}
