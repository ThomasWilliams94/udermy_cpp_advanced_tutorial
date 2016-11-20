//============================================================================
// Name        : 036_AbstractClassesAndPureVirtualFunctions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// classes containing only pure virtaul functions are called
// abstract classes
class Animal {
public:
	virtual void run() = 0;
	virtual void speak() = 0; // this is a pure virtual function

	virtual ~Animal() {
	}
};

// This class is still abstract, because it does not implement
// the pure virtual function run(). Therefore, cannot instantiate
// a dog in main() below.
class Dog: public Animal {
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
};

// Since Labrador inherits the implementation of speak() from the
// Dog class, and implements the run() method, Labrador classes
// can now be instantiated in main()
class Labrador: public Dog {
public:
	Labrador() {
		cout << "new labrador" << endl;
	}

	virtual void run() {
		cout << "Labrador running..." << endl;
	}
};

void test(Animal &a) {
	a.run();
}

int main() {

	Labrador lab;
	lab.speak();
	lab.run();

	Labrador labs[5];

	// So, the below code is useful if you have many different subclasses
	// derived from the same super class... you can then create arrays of
	// pointers to the super class and can put all kinds of subclasses
	// in that single array
	Animal *animals[5];

	animals[0] = &lab;

	animals[0]->speak();

	test(lab);

	return 0;
}
