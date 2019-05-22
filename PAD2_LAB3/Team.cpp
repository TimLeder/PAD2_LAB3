#include "Team.h"

Team::Team(const std::string& nameIn, int a, int b, int c, int d, int e) : matchesPlayed(a), gamesWon(b), gamesLost(c), pointsWon(d), pointsLost(e)
{
	setTeamName(nameIn);
}

std::string Team::getTeamName()
{
	return teamname;
}

void Team::setTeamName(const std::string& input)
{
	size_t length = input.size();
	length = (length < 16 ? length : 15);
	input.copy(teamname, length);
	teamname[length] = '\0';
}

int Team::getMatchesPlayed()
{
	return matchesPlayed;
}

void Team::setMatchesPlayed(int in)
{
	matchesPlayed = in;
}

int Team::getGamesWon()
{
	return gamesWon;
}

void Team::setGamesWon(int in)
{
	gamesWon = in;
}

int Team::getGamesLost()
{
	return gamesLost;
}

void Team::setGamesLost(int in)
{
	gamesLost = in;
}

int Team::getPointsWon()
{
	return pointsWon;
}

void Team::setPointsWon(int in)
{
	pointsWon = in;
}

int Team::getPointsLost()
{
	return pointsLost;
}

void Team::setPointsLost(int in)
{
	pointsLost = in;
}
