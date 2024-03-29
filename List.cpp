#include "List.h"
using namespace std;

int ListBridges::counter = 0; // Set first number of the road zero

ListBridges::ListBridges()
{
	this->numberOfTheRoad = ++(this->counter);
	this->head = this->tail = nullptr;
}

ListBridges::~ListBridges()
{
	makeEmptyList();
}

void ListBridges::insetToHead(ListNodeBridges* node)
{
	if (node == nullptr)
		return;
	if (this->isEmpty())
		this->head = this->tail = node;
	else
	{
		this->head->setPrev(node);
		node->setNext(this->head);
		this->head = node;
	}
}

void ListBridges::inserToTail(ListNodeBridges* node)
{
	if (node == nullptr)
		return;
	if (this->isEmpty())
		this->head = this->tail = node;
	else
	{
		this->head->setNext(node);
		node->setPrev(this->tail);
		this->tail = node;
	}
}

void ListBridges::makeEmptyList()
{
	ListNodeBridges* curr = this->getHead() , * temp;
	while (curr != nullptr)
	{
		temp = curr;
		curr = curr->getNext();
		delete temp;
	}
}

const ListNodeBridges* ListBridges::getHead() const
{
	return this->head;
}

ListNodeBridges* ListBridges::getHead()
{
	return this->head;
}

const ListNodeBridges* ListBridges::getTail() const
{
	return this->tail;
}

ListNodeBridges* ListBridges::getTail()
{
	return this->tail;
}

void ListBridges::addBridge(double bridgeHeight)
{
	if (this->roadHeapData->areNoBridges()) // if there are no bridges till now change it because we adding the first
		this->roadHeapData->areNoBridges() = false;
	if (!(this->isEmpty()))
	{
		if (bridgeHeight > head->getBridgeHeight())
		{
			addBridgeToEnd(bridgeHeight);
			return;
		}
	}
	addBridgeToStart(bridgeHeight);
	this->roadHeapData->getLowestBridgeHeight() = bridgeHeight;
}

void ListBridges::addBridgeToStart(double bridgeHeight)
{
	ListNodeBridges* newNode = new ListNodeBridges(bridgeHeight);
	insetToHead(newNode);
}

void ListBridges::addBridgeToEnd(double bridgeHeight)
{
	ListNodeBridges* newNode = new ListNodeBridges(bridgeHeight);
	inserToTail(newNode);
}

void ListBridges::printList() const
{
	const ListNodeBridges* curr = this->getHead();
	cout << "Bridges: ";
	while (curr != nullptr)
	{
		cout << curr->getBridgeHeight() << " ";
		curr = curr->getNext();
	}
	cout << endl;
}

bool ListBridges::isEmpty() const
{
	if (this->getTail() == nullptr && this->getHead() == nullptr)
		return true;
	else
		return false;
}

void ListBridges::linkHeapData(HeapData* heapData)
{
	if (roadHeapData != nullptr)
		roadHeapData = heapData;
}

int ListBridges::getHeapDataIndex() const
{
	return roadHeapData->getIndexInHeap();
}

