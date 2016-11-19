//============================================================================
// Name        : 026_OverloadingPlus.cpp
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

	Complex c1(3, 4);
	Complex c2(5, 1);

	cout << c1 << endl;
	cout << c2 << endl;
	cout << c1 + c2 << endl;

	cout << c2 + 8.2 << endl;

	cout << 8.2 + c2 << endl;

	return 0;
}
