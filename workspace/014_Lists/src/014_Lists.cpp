//============================================================================
// Name        : 014_Lists.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	numbers.push_front(0);

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	list<int>::iterator it = numbers.begin();
	cout << "Element: " << *it << endl;

	it++;
	cout << "Element: " << *it << endl;

	numbers.insert(it, 100);
	cout << "Element: " << *it << endl;

	cout << endl;

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;

	cout << "Element: " << *eraseIt << endl;

	eraseIt = numbers.erase(eraseIt);
	cout << "Element: " << *eraseIt << endl;

	cout << endl;

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	for (list<int>::iterator it = numbers.begin(); it != numbers.end();) {
		if (*it == 2) {
			numbers.insert(it, 1234);
		}

		if (*it == 1) {
			it = numbers.erase(it);
		} else {
			it++;
		}
	}

	cout << endl;

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}
