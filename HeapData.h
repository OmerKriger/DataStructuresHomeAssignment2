#ifndef __HEAP_DATA_H
#define __HEAP_DATA_H
#include "List.h"

#define NO_BRIDGES -1
class HeapData
{
	ListBridges* const bridges;
	double lowestBridgeHeight;
	bool noBridges;
public:
	HeapData(const HeapData&) = delete;
	HeapData(const ListBridges* bridges);
	double getLowestBridgeHeight() const;
	const ListBridges* const getListBridges() const;
	bool operator< (const HeapData& other) const;
	bool operator> (const HeapData& other) const;
};

#endif 