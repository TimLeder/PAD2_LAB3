#pragma once
#include <string>

class Team
{
public:
	explicit Team(const std::string & = "", int = 0, int = 0, int = 0, int = 0, int = 0);

	std::string getTeamName();
	void setTeamName(const std::string&);

	int getMatchesPlayed();
	void setMatchesPlayed(int);

	int getGamesWon();
	void setGamesWon(int);

	int getGamesLost();
	void setGamesLost(int);

	int getPointsWon();
	void setPointsWon(int);

	int getPointsLost();
	void setPointsLost(int);

private:
	char teamname[20];
	int matchesPlayed;
	int gamesWon;
	int gamesLost;
	int pointsWon;
	int pointsLost;
};