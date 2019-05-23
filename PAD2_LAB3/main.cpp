#include "Table.h"
#include "Team.h"

using namespace std;

int main()
{
	Table test;
	test.readToVector();
	cout << test.makeString();
	test.sortVector();
	cout << endl << test.makeString();
	test.makeOut();
}
