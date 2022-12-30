#include "RoadsSystem.h"
#include <iostream>

using namespace std;

int main()
{
	int roads, actions;

	cin >> roads >> actions;
	if (roads <= 0 || actions <= 0)
	{
		cout << "wrong input.";
		return 0;
	}
	RoadsSystem roadsSystem(roads);
	for (int i = 0; i < actions; i++)
	{
		if (roadsSystem.processCommand() == false)
		{
			cout << "wrong input.";
			return 0;
		}
	}
}


