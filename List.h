#ifndef __LIST_H
#define __LIST_H
#include "HeapData.h"
#include "ListNode.h"
#include <iostream>
class ListBridges
{
	ListNodeBridges* head;
	ListNodeBridges* tail;
	const HeapData* roadHeapData;
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
	void linkHeapData(const HeapData* heapData);
};

#endif // !__LIST_H




