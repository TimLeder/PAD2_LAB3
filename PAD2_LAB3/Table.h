#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include "Team.h"

class Table
{
public:
	void readToVector();
	string makeString();
	void sortVector();
	std::vector<Team> teamVector;
private:

};