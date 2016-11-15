//============================================================================
// Name        : 013_TwoDimensionalVectors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

	vector<vector<int> > grid(3, vector<int>(4, 7));

	grid[1].push_back(8);

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {
			cout << grid[row][col] << " " << flush;
		}
		cout << endl;
	}

	cout << endl;

	// Create and display the 12 times tables
	vector<vector<int> > timesTable(12, vector<int>(12, 0));

	for (int row = 0; row < timesTable.size(); row++) {
		for (int col = 0; col < timesTable[row].size(); col++) {
			timesTable[row][col] = (row + 1) * (col + 1);
		}
	}

	for (int row = 0; row < timesTable.size(); row++) {
		for (int col = 0; col < timesTable[row].size(); col++) {

			// There must be a better way of doing this formatting... :)
			cout << setw(3);
			cout.fill(' ');
			cout << left;

			cout << timesTable[row][col] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
