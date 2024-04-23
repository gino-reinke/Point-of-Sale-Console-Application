#include "Product.h"

void Product::setPrice(float p)
{
	price = p;
}

float Product::getPrice()
{
	return price;
}

void Product::setID(string id1)
{
	ID = id1;
}

string Product::getID()
{
	return ID;
}

void Product::getCategory(string c)
{
	category = c;
}

string Product::setCategory()
{
	return category;
}

void Product::setName(string n)
{
	name = n;
}

string Product::getName()
{
	return name;
}

float Product::computePrice()
{
	return price;
}


void Product::PrintInfo()
{
	cout << "Price: " << getPrice() << endl;
}

Product::Product(string id1, string c, string n, string e, float p) : ID(id1), category(c), name(n), expDate(e), price(p) 
{
}



