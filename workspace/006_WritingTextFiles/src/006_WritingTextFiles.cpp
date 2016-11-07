//============================================================================
// Name        : 006_WritingTextFiles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	const char *outputFileName = "output/text.txt";

	//ofstream outFile;
	//outFile.open(outputFileName);

	fstream outFile;
	outFile.open(outputFileName, ios::out);

	if (outFile.is_open()) {
		outFile << "Hello there." << endl;
		outFile << 123 << endl;
		outFile.close();
	} else {
		cout << "Could not create file: " << outputFileName << endl;
	}

	// Exercise - write the same line to a file x number of times, numbering
	// the rows

	const char *repeatedTextOutputFileName = "output/repeated_text_output.txt";
	string repeatedText = "repeat me!";

	ofstream repeatedOutFile;
	repeatedOutFile.open(repeatedTextOutputFileName);

	if (repeatedOutFile.is_open()) {
		for (int i = 0; i < 10; i++) {
			repeatedOutFile << i+1 << ". " << repeatedText << endl;
		}
		repeatedOutFile.close();
	} else {
		cout << "Could not create file: " << repeatedTextOutputFileName << endl;
	}

	return 0;
}
