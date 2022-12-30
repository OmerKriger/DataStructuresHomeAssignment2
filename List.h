#ifndef __LIST_H
#define __LIST_H

#include "ListNode.h"
#include "HeapData.h"
#include <iostream>

class HeapData;
class ListNodeBridges;

class ListBridges
{
	static int numberOfTheRoad;
	ListNodeBridges* head;
	ListNodeBridges* tail;
	HeapData* roadHeapData;
	void insetToHead(ListNodeBridges* node);
	void inserToTail(ListNodeBridges* node);
	void addBridgeToStart(double bridgeHeight);
	void addBridgeToEnd(double bridgeHeight);
	void makeEmptyList();
public:
	ListBridges();
	~ListBridges();
	const ListNodeBridges* getHead() const;
	ListNodeBridges* getHead();
	const ListNodeBridges* getTail() const;
	ListNodeBridges* getTail();
	void addBridge(double bridgeHeight);
	void printList() const;
	bool isEmpty() const;
	void linkHeapData(HeapData* heapData);
	int getHeapDataIndex() const;
	int getRoadNumber() const { return numberOfTheRoad; }
};

#endif // !__LIST_H




