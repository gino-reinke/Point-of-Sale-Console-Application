#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "Menu.h"
#include "Product.h"
using namespace std;

class POS_System {
private:
    map<string, Product*> inventory;
    Menu menu;

public:
    // Load the inventory
    void loadInventory(const map<string, Product*>& products);
    // Search the inventory
    Product* searchInventory(const string& productID);
    // Sell a product
    void sellProduct(const string& productID);
    // Add new inventory
    void addInventory(Product* product);
    // Remove inventory
    void removeInventory(const string& productID);
    // Display the menu
    void displayMenu();


    // Constructor
    POS_System(const Menu& menu);
};