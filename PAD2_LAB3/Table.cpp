#include "Table.h"

void Table::readToVector()
{
	ifstream readFile("tabletennis.dta", ios::in | ios::binary);
	if (!readFile)
	{
		cerr << "Error: Couldn't open file." << endl;
		exit(EXIT_FAILURE);
	}

	readFile.seekg(0);
	Team team;

	int i = 1;

	while (readFile.read(reinterpret_cast<char*>(&team), sizeof(Team))) {
		teamVector.push_back(team);
		i++;
	}
}
string Table::makeString()
{
	stringstream out;
	for (size_t i = 0; i < teamVector.size(); i++)
	{
		out << teamVector[i].makeString();
	}
	return out.str();
}

void Table::makeOut()
{
	ofstream outFile("outfile.txt", ios::out);

	if (!outFile) {
		cerr << "Error: Could not open/create outfile." << endl;
		exit(EXIT_FAILURE);
	}

	outFile << makeString();
	outFile.close();
	cout << endl << "Created an outfile.txt in your project directory." << endl;
}


void Table::sortVector()
{
	std::sort(teamVector.begin(), teamVector.end());
}