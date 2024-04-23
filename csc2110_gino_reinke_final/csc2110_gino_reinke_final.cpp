// csc2110_gino_reinke_final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "POS_System.h"
#include "Tobacco.h"
#include "LotteryTickets.h"

int main() {
    // Create menu options
    vector<string> options = { "Search Inventory", "Sell Products", "Add New Inventory", "Remove Inventory", "Exit" };
    Menu menu(options);

    // Create POS System
    POS_System pos_system(menu);

    // Load inventory
    map<string, Product*> products;
    products["1"] = new Tobacco("TOB_CS", "Cigarrettes", "Clipper Ship", "2024-12-31", 10.0, 1.20);
    //products["2"] = new LotteryTickets(50.0, 1.02, 1.03);
    pos_system.loadInventory(products);

    // Display menu and handle user's selection
    int option;
    do {
        pos_system.displayMenu();
        cout << "Enter your option: ";
        cin >> option;
        menu.selectOption(option);
    } while (option != 5);

    return 0;
}
