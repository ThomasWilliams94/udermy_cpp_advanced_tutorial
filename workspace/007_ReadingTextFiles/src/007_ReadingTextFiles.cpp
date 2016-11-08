//============================================================================
// Name        : 007_ReadingTextFiles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	const char *inFilePath = "input/test.txt";

	ifstream inFile;

	inFile.open(inFilePath);

	if (inFile.is_open()) {
		string line;

//		while (!inFile.eof()) {
//			getline(inFile, line);
//			cout << line << endl;
//		}

		// This invokes code to see if inFile still has input
		// to be read (inFile bool operator is overloaded?)
		while (inFile) {
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	} else {
		cout << "Cannot open file: " << inFilePath << endl;
	}

	return 0;
}
