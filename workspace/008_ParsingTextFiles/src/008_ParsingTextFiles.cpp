//============================================================================
// Name        : 008_ParsingTextFiles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	const char *filepath = "input/stats.txt";
	ifstream input;

	input.open(filepath);

	if(!input.is_open()) {
		return 1;
	}

	string line;
	int population;

	while(input) {
		getline(input, line, ':');

		int popultion;
		input >> population;

		//input.get();
		input >> ws; // C++11, ws = read white space;

		if(!input) {
			break;
		}

		cout << "'" << line << "'" << " -- " << "'" << population << "'" << endl;
	}

	input.close();


	return 0;
}
