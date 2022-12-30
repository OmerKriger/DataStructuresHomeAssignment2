#ifndef __LIST_NODE_H
#define __LIST_NODE_H

#include "HeapData.h"

class ListNodeBridges
{
    double bridgeHeight;
    ListNodeBridges* next;
    ListNodeBridges* prev;
public:
    ListNodeBridges(const ListNodeBridges&) = delete;
    ListNodeBridges(double bridgeHeight);
    double getBridgeHeight() const;
    const ListNodeBridges* getNext() const;
    ListNodeBridges* getNext();
    const ListNodeBridges* getPrev() const;
    ListNodeBridges* getPrev();
    void setPrev(ListNodeBridges* newPrev);
    void setNext(ListNodeBridges* newNext);
};

#endif // !__LIST_NODE_H



