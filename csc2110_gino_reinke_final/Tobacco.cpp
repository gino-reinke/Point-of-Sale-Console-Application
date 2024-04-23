#include "Tobacco.h"

void Tobacco::setSpecialTax(float s)
{
	specialTax = s;
}

float Tobacco::getSpecialTax()
{
	return specialTax;
}

float Tobacco::computePrice() 
{
	return getPrice() * specialTax;
}

Tobacco::Tobacco(string id1, string c, string n, string e, float p, float s) : Product(id1, c, n, e, p), specialTax(s) 
{}



