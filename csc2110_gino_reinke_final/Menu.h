#include <iostream>
#include <vector>
using namespace std;

class Menu {
private:
	vector <string> options;

public:
    void setOptions(const vector<string> o);
    vector<string> getOptions() const;

    // Display the menu options
    void displayOptions() const;
    // Handle the user's selection
    void selectOption(int option);


    Menu(const vector<string>& o);
};

