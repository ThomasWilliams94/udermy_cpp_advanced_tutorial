//============================================================================
// Name        : 034_UsingFunctionPointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string test) {
	//return test == "two";
	return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*func)(string text)) {
	int count = 0;

	// could also use index loop
	for (vector<string>::iterator it = texts.begin(); it != texts.end(); it++) {
		if (match(*it)) {
			count++;
		}
	}

	return count;

}

int main() {

	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");

	for (vector<string>::iterator it = texts.begin(); it != texts.end(); it++) {
		cout << match(*it) << endl;
	}

	cout << endl;

	cout << count_if(texts.begin(), texts.end(), match) << endl;

	cout << endl;

	cout << "My function counts: " << countStrings(texts, match) << endl;

	return 0;
}
