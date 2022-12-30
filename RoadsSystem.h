#ifndef __ROADS_SYSTEM_H
#define __ROADS_SYSTEM_H
#include <iostream>
#include "List.h"
#include "Heap.h"

enum Menu {
	Init = 'a',
	AddBridge = 'b',
	WhichRoad = 'c',
	Print = 'd'
};

class RoadsSystem
{
	ListBridges* roadsBridges;
	HeapRoads heapOfRoads;
	int numOfRoads;
public:
	RoadsSystem(int numOfRoads) : numOfRoads(), roadsBridges(nullptr), heapOfRoads(numOfRoads) {}
	~RoadsSystem();
	void __Init__();
	void AddBridge(double height, int roadNum);
	void WhichRoad(double height);
	void printBridgesHeights(int roadNum);
	bool processCommand();
	bool checkInput(double height, int roadNum);
	bool checkInput(double height);
	bool checkInput(int roadNum);
};

#endif

