//============================================================================
// Name        : 020_StacksAndQueues.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
	string name;

public:
	Test(string name) :
			name(name) {

	}

	~Test() {
		//cout << "Object destroyed." << endl;
	}

	void print() {
		cout << name << endl;
	}
};

int main() {

	////// STACK //////
	// last in, first out (LIFO)
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

	/*
	 * This is invalid code! Object is destroyed.
	 Test &test1 = testStack.top();
	 testStack.pop();
	 test1.print(); // Reference refers to destroyed object. Remove & to use a copy that will persist

	 */

	// A sort of way to iterate through stacks, but actually involves
	// removing all objects on the stack, in reverse order.
	while (testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();

		testStack.pop();
	}

	////// END STACK //////

	cout << endl;

	////// QUEUE //////

	// first in, first out (FIFO)
	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	/*
	 * This is invalid code! Object is destroyed.
	 Test &test1 = testStack.top();
	 testStack.pop();
	 test1.print(); // Reference refers to destroyed object. Remove & to use a copy that will persist

	 */

	cout << "Back of queue is: " << flush;
	testQueue.back().print();

	// A sort of way to iterate through stacks, but actually involves
	// removing all objects on the stack, in reverse order.
	while (testQueue.size() > 0) {
		Test &test = testQueue.front();
		test.print();

		testQueue.pop();
	}

	////// END QUEUE //////

	return 0;
}
