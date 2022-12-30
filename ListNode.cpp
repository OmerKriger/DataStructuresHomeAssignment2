#include "ListNode.h"

ListNodeBridges::ListNodeBridges(double bridgeHeight) 
{
    this->bridgeHeight = bridgeHeight;
    this->next = this->prev = nullptr;
}

const ListNodeBridges* ListNodeBridges::getNext() const
{
    return this->next;
}

ListNodeBridges* ListNodeBridges::getNext()
{
    return this->next;
}

const ListNodeBridges* ListNodeBridges::getPrev() const
{
    return this->prev;
}

ListNodeBridges* ListNodeBridges::getPrev()
{
    return this->prev;
}

void ListNodeBridges::setPrev(ListNodeBridges* newPrev)
{
    this->prev = newPrev;
}

void ListNodeBridges::setNext(ListNodeBridges* newNext)
{
    this->next = newNext;

}

double ListNodeBridges::getBridgeHeight() const
{
    return this->bridgeHeight;
}
