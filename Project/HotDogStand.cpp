#include "HotDogStand.h"

int HotDogStand::total = 0;

HotDogStand::HotDogStand()
{
	numSold = 0;
	id = 0;
}

void HotDogStand::setID(int id)
{
	this->id = id;
}

int HotDogStand::getID() const
{
	return id;
}

int HotDogStand::getStandSales() const
{
	return numSold;
}

void HotDogStand::justSold()
{
	++numSold;
	++total;
}

int HotDogStand::getAllSales()
{
	return total;
}

HotDogStand::~HotDogStand()
{
	total -= numSold;
	numSold = 0;
}
