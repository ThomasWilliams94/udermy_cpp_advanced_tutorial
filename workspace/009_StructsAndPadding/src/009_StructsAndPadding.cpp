//============================================================================
// Name        : 009_StructsAndPadding.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)

struct Person {
	char name[50];
	int age;
	double height;
};

#pragma pack(pop)

int main() {

	Person someone = { "Frodo", 220, 0.8 };

	const char *filePath = "output/test.bin";

	/// Write binary file ////////////////////////
	ofstream outputFile;

	outputFile.open(filePath, ios::binary);

	if (outputFile.is_open()) {

		//outputFile.write((char *)&someone, sizeof(Person)); // Old way of casting point to char pointer
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();

	} else {
		cout << "Could not create file: " << filePath << endl;
	}

	// Read binary file /////////////

	Person someoneElse = {};

	ifstream inputFile;

	inputFile.open(filePath, ios::binary);

	if (inputFile.is_open()) {

		//inputFile.write((char *)&someone, sizeof(Person)); // Old way of casting point to char pointer
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

		inputFile.close();

	} else {
		cout << "Could not read file: " << filePath << endl;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;
	return 0;
}
