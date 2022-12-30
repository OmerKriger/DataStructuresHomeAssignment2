#include "Heap.h"
#include <iostream>
using namespace std;
// Constractor

HeapRoads::HeapRoads(int HeapSize)
{
    this->roads = new HeapData * [heapSize];
    this->heapSize = 0;
    this->maxSize = heapSize;
}

HeapRoads::~HeapRoads()
{
    for (int i = 0; i < heapSize; i++)
        delete roads[i];
    delete[] this->roads;
}

// Find index of node
int HeapRoads::Left(int node)
{
    return (node*2 + 1);
}

int HeapRoads::Right(int node)
{
    return (node * 2 + 2);
}

int HeapRoads::Parent(int node)
{
    return (node-1)/2;
}

// heap methods

void HeapRoads::FixHeap(int node)
{
    int max;
    int left = Left(node), right = Right(node);
    if (isInHeap(left) && ( *(roads[left]) > *(roads[node]) ) ) 
        max = left;
    else if ( isInHeap(right) && ( *(roads[right]) > *(roads[node]) ) ) 
        max = right;
    else
        max = node;
    if (max != node)
    {
        swap(roads[node], roads[max]);
        FixHeap(max);
    }
}

bool HeapRoads::isInHeap(int index)
{
    if (index < heapSize)
        return true;
    else
        return false;
}

void HeapRoads::insert(const ListBridges* listRoad)
{
    if (this->heapSize >= this->maxSize)
        return;
    int index = heapSize, parent = Parent(index);
    HeapData* newData = new HeapData(listRoad);
    (this->heapSize)++;
    while ((index > 0) && (*(roads[parent]) < *newData) )
    {
        roads[index] = roads[parent];
        index = parent;
        parent = Parent(index);
    }
    roads[index] = newData;
}

// getter

int HeapRoads::getMax() const
{
    return roads[0]->getLowestBridgeHeight();
}
