//============================================================================
// Name        : 023_OverloadingTheAssignmentOperator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test() :
			id(0), name("") {

	}

	Test(int id, string name) :
			id(id), name(name) {

	}

	// Copy constructor
	Test(const Test &other) {
		cout << "Copy constructor running." << endl;
		id = other.id;
		name = other.name;

		// or use:
		// *this = other; (when assignement operator is overloaded)

	}

	void print() {
		cout << id << ": " << name << endl;
	}

	Test &operator=(const Test &other) {

		cout << "Assignment running." << endl;

		id = other.id;
		name = other.name;

		return *this;
	}
};

int main() {

	Test test1(10, "Mike");
	test1.print();

	Test test2(20, "Bob");

	test2 = test1; // shallow copy (default implementation) not good, for example, with pointers

	test2.print();

	Test test3;
//	test3 = test2 = test1;

	//test3 = test2
	test3.operator=(test2);
	test3.print();

	cout << endl;

	// Copy initiailisation
	Test test4 = test1;
	test4.print();
	return 0;
}
