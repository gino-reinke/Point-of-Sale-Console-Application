#include "LotteryTickets.h"

void LotteryTickets::setCityTax(float ci)
{
	cityTax = ci;
}

float LotteryTickets::getCityTax()
{
	return cityTax;
}

void LotteryTickets::setCountyTax(float co)
{
	countyTax = co;
}

float LotteryTickets::getCountyTax()
{
	return countyTax;
}

float LotteryTickets::computePrice()
{
	return 0.0f;
}

LotteryTickets::LotteryTickets(string id1, string c, string n, string e, float p, float ci, float co) : Product(id1, c, n, e, p), cityTax(ci), countyTax(co)
{}

