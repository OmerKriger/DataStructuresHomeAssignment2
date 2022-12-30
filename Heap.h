#ifndef __HEAP_H
#define __HEAP_H
#include "HeapData.h"
class HeapRoads
{
	HeapData** roads;
	int heapSize, maxSize;
	int Left(int node);
	int Right(int node);
	int Parent(int node);
	bool isInHeap(int index);
public:
	HeapRoads(int size);
	~HeapRoads();
	void FixHeap(int node);
    double getMaxValue() const;
	int getMaxRoadNumber() const;
	void insert(ListBridges* listRoad);
};

#endif

