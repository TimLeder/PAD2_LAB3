#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>

#include "Table.h"
#include "Team.h"

using namespace std;

void printToConsole(ifstream&);
void outputLine(ostream&, Team&);

int main()
{
	ifstream binaryIn("tabletennis.dta", ios::in | ios::binary);
	if (!binaryIn)
	{
		cerr << "Error: Couldn't open file." << endl;
		exit(EXIT_FAILURE);
	}

	printToConsole(binaryIn);
}

void printToConsole(ifstream& readFile)
{
	readFile.seekg(0);
	Team team;

	while (readFile.read(reinterpret_cast<char*>(&team), sizeof(Team))) {
		outputLine(cout, team);
	}
}

void outputLine(ostream& output, Team& record)
{
	output << left << setw(22) << record.getTeamName()
		<< setw(8) << record.getMatchesPlayed()
		<< setw(3) << record.getGamesWon() << ":" << setw(8) << record.getGamesLost()
		<< setw(3) << record.getPointsWon() << ":" << record.getPointsLost() << endl;

		
}