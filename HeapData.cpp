#include "HeapData.h"

HeapData::HeapData(const ListBridges* ) : bridges(bridges)
{
	bridges->linkHeapData(this);
	if (!bridges->isEmpty())
	{
		lowestBridgeHeight = bridges->getHead()->getBridgeHeight();
		this->noBridges = false;
	}
	else
	{
		lowestBridgeHeight = NO_BRIDGES;
		this->noBridges = true;
	}
}

double HeapData::getLowestBridgeHeight() const
{
	return this->lowestBridgeHeight;
}

const ListBridges* const HeapData::getListBridges() const
{
	return this->bridges;
}

bool HeapData::operator<(const HeapData& other) const
{
	if ((this->noBridges || other.noBridges) == false) // if they both have bridges
	{
		if (this->lowestBridgeHeight < other.lowestBridgeHeight) // check operator logic
			return true;
		else
			return false;
	} // if one of them dont have bridges
	else if (this->noBridges)
		return false;
	else
		return true;
}

bool HeapData::operator>(const HeapData& other) const
{
	if ((this->noBridges || other.noBridges) == false) // if they both have bridges
	{
		if (this->lowestBridgeHeight > other.lowestBridgeHeight) // check operator logic
			return true;
		else
			return false;
	} // if one of them dont have bridges
	else if (this->noBridges)
		return true;
	else
		return false;
}

