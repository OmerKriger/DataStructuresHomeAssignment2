#ifndef __HEAP_DATA_H
#define __HEAP_DATA_H
#include "List.h"

#define NO_BRIDGES -1
class ListBridges;
class HeapData
{
	ListBridges* const bridges;
	double lowestBridgeHeight;
	bool noBridges;
	int indexInHeap;
public:
	HeapData(const HeapData&) = delete;
	HeapData(ListBridges* bridges);
	double getLowestBridgeHeight() const;
	double& getLowestBridgeHeight();
	const ListBridges* const getListBridges() const;
	bool operator< (const HeapData& other) const;
	bool operator> (const HeapData& other) const;
	int getIndexInHeap() const { return indexInHeap; }
	int& getIndexInHeap() { return indexInHeap; }
	bool areNoBridges() const { return noBridges; }
	bool& areNoBridges() { return noBridges; }
};

#endif 