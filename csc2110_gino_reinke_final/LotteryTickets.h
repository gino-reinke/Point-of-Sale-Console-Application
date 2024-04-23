#pragma once
#include "Product.h"
class LotteryTickets : public Product
{
private:
	float cityTax, countyTax;

public:
	void setCityTax(float ci);
	float getCityTax();

	void setCountyTax(float co);
	float getCountyTax();

	float computePrice() override;


	LotteryTickets(string id1, string c, string n, string e, float p, float ci, float co);
};

