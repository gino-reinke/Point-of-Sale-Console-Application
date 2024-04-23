#pragma once
#include "Product.h"
class Tobacco : public Product
{
private:
	float specialTax;

public:
	void setSpecialTax(float s);
	float getSpecialTax();

	float computePrice() override;


	Tobacco(string id1, string c, string n, string e, float p, float t);
};

