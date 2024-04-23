#include "POS_System.h"

void POS_System::loadInventory(const map<string, Product*>& products)
{
	inventory = products;
}

Product* POS_System::searchInventory(const string& productID)
{
    if (inventory.find(productID) != inventory.end())
    {
        return inventory[productID];
    }
    else 
    {
        cout << "Product not found.\n";
        return nullptr;
    }
}

void POS_System::sellProduct(const string& productID)
{
        Product* product = searchInventory(productID);
        if (product) {
            cout << "Sold product: " << product->getName() << '\n';
            // TODO: Add code here to handle the sale of the product
        }
}

void POS_System::addInventory(Product* product)
{
    inventory[product->getID()] = product;
}

void POS_System::removeInventory(const string& productID)
{
    inventory.erase(productID);
}

void POS_System::displayMenu()
{
    menu.displayOptions();
}

POS_System::POS_System(const Menu& menu) : menu(menu) {}
