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
	void makeOut();
	void sortVector();
private:
	std::vector<Team> teamVector;
};