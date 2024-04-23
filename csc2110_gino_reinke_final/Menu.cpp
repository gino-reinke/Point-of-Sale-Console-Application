#include "Menu.h"


void Menu::setOptions(const vector<string> o)
{
    options = o;
}

vector<string> Menu::getOptions() const
{
    return options;
}

void Menu::displayOptions() const
{
    cout << "Menu Options:\n";
    for (size_t i = 0; i < options.size(); ++i) 
    {
        cout << i + 1 << ". " << options[i] << '\n';
    }
}

void Menu::selectOption(int option)
{
    if (option > 0 && option <= options.size()) 
    {
        cout << "You selected: " << options[option - 1] << "\n";
        // TODO: Add code here to handle the selected option
    }
    else 
    {
        cout << "Invalid option. Please select a valid option.\n";
    }
}

Menu::Menu(const vector<string>& options) : options(options)
{
}
