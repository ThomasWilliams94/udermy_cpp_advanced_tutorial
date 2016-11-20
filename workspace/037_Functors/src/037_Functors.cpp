//============================================================================
// Name        : 037_Functors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Test {
	virtual bool operator()(string &text)=0;
	virtual ~Test(){};
};

// a functor is a class that overloads () operator
struct MatchTest : public Test {
	virtual bool operator()(string &text) {
		return text == "lion";
	}
};

void check(string text, Test &test) {
	if(test(text)) {
		cout << "Text matches!" << endl;
	} else {
		cout << "No match." << endl;
	}
}

int main() {

	MatchTest pred;

	string value = "lidon";

	cout << pred(value) << endl;

	MatchTest m;
	check("lifon", m);

	return 0;
}
