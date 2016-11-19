//============================================================================
// Name        : 024_OverloadingLeftBitShift.cpp
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

		*this = other; //(when assignement operator is overloaded)

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

	friend ostream &operator<<(ostream &out, const Test &test) {
		out << test.id << ": " << test.name;
		return out;
	}
};

int main() {

	Test test1(10, "Mike");

	cout << test1 << endl;

	return 0;
}
