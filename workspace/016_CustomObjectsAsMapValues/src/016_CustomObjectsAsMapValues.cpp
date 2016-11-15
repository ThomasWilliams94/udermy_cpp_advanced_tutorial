//============================================================================
// Name        : 016_CustomObjectsAsMapValues.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	// must provide a default constructor if you want to use your
	// custom object with maps
	Person() : name(""), age(0) {

	}

	Person(const Person &other) {
		cout << "Copy constructor running." << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) :
			name(name), age(age) {
	}

	void print() {
		cout << name << ": " << age << endl;
	}
};

int main() {

	map<int, Person> people;

	people[2] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[5] = Person("Raj", 20);

	for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->first << ": " << flush;
		it->second.print();
	}

	return 0;
}
