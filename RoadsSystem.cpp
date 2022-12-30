#include "RoadsSystem.h"
using namespace std;

RoadsSystem::~RoadsSystem()
{
	delete this->roadsBridges;
}

void RoadsSystem::__Init__()
{
	this->roadsBridges = new ListBridges[numOfRoads];
	for (int i = 0; i < this->numOfRoads; i++)
		this->heapOfRoads.insert(&roadsBridges[i]);
}

void RoadsSystem::AddBridge(double height, int roadNum)
{
	roadsBridges[roadNum].addBridge(height);
	heapOfRoads.FixHeap(roadNum);
}

void RoadsSystem::WhichRoad(double height)
{
	cout << heapOfRoads.getMax();
}

void RoadsSystem::printBridgesHeights(int roadNum)
{
	roadsBridges[roadNum].printList();
}

bool RoadsSystem::processCommand()
{
	int roadNum;
	double height;
	char command;
	cin >> command;
	switch (command)
	{
	case Menu::Init:
		this->__Init__();
		break;
	case Menu::AddBridge:
		cin >> height >> roadNum;
		if (checkInput(height, roadNum) == false)
			return false;
		else
			AddBridge(height, roadNum);
		break;
	case Menu::WhichRoad:
		cin >> height;
		if (checkInput(height) == false)
			return false;
		else
			WhichRoad(height);
		break;
	case Menu::Print:
		cin >> roadNum;
		if (checkInput(roadNum) == false)
			return false;
		else
			printBridgesHeights(roadNum);
		break;
	default:
		return false;
		break;
	}
	return true;
}

bool RoadsSystem::checkInput(double height, int roadNum)
{
	if (height <= 0 || (roadNum <= 0 && this->numOfRoads < roadNum))
		return false;
	else
		return true;
}

bool RoadsSystem::checkInput(double height)
{
	if (height <= 0)
		return false;
	else
		return true;
}

bool RoadsSystem::checkInput(int roadNum)
{
	if (roadNum <= 0 && this->numOfRoads < roadNum)
		return false;
	else
		return true;
}
