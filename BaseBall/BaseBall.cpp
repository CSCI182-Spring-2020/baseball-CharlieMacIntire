// BaseBall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Player.h"
#include <iostream>
#include <iomanip>
#include <fstream>


#define MAX_PLAYER_COUNT 15

using namespace std;

int main()
{
	

	ifstream inFile;

	inFile.open("Text.txt");
	if (!inFile) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}

	Player team [MAX_PLAYER_COUNT];
	
		char tempName[80];
		int hit;
		int walk;
		int out;
		float battingAvg;
	
	int importCount = 0;

	while (!inFile.eof() && importCount < MAX_PLAYER_COUNT) {
		// Read in line
		
		inFile >> tempName >> hit >> walk >> out;

		// Write to team's Structure here
		team [importCount]._name = tempName;
		team [importCount]._hit = hit;
		team [importCount]._walk = walk;
		team [importCount]._out = out;
		
		
		importCount++;
	}
	
	// Close the input file
	inFile.close();

	for (int i = 0; i < MAX_PLAYER_COUNT; i++)
	{
		std::cout << team[i]._name << " " << team[i]._hit << " " << team[i]._walk << " " << team[i]._out << " " << (float)team[i]._hit / (float)(team[i]._walk + hit) << endl; 
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
