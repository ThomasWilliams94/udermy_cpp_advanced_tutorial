//============================================================================
// Name        : 019_Sets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
using namespace std;

class Test {
	int id;
	string name;

public:
	Test() :
			id(0), name("") {

	}

	Test(int id, string name) :
			id(id), name(name) {

	}

	void print() const {
		cout << id << ": " << name << endl;
	}

	bool operator<(const Test &other) const {
		return name < other.name;
	}
};

int main() {

	set<int> numbers;

	numbers.insert(50);
	numbers.insert(20);
	numbers.insert(10);
	numbers.insert(33);
	numbers.insert(20);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	set<int>::iterator itFind = numbers.find(33);

	if (itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	}

	if (numbers.count(20)) {
		cout << "Number found!" << endl;
	}

	cout << endl;

	set<Test> tests;

	tests.insert(Test(10, "Mike"));
	tests.insert(Test(30, "Joe"));
	tests.insert(Test(22, "Sue"));
	tests.insert(Test(12345, "Joe"));

	for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
		it->print();
	}

	return 0;
}
