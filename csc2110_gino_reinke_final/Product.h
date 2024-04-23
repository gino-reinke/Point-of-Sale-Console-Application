#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	string ID, category, name, expDate;
	float price;

public:
	void setPrice(float p);
	float getPrice();

	void setID(string id1);
	string getID();

	void getCategory(string id1);
	string setCategory();

	void setName(string n);
	string getName();

	virtual float computePrice();

	void PrintInfo();


	Product(string id1, string c, string n, string e, float p);
};

