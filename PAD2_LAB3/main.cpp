#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Table.h"
#include "Team.h"
using namespace std;

int main()
{
	ifstream binaryIn("tabletennis.dta", ios::in | ios::binary);
	if (!binaryIn)
	{
		cerr << "Error: Couldn't open file." << endl;
		exit(EXIT_FAILURE);
	}

}