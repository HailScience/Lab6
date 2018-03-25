/*********************************************************************
** Program name: menu.cpp
** Author: Alexandra Carper
** Date: 02/14/2018
** Description: This implementation file defines the menu function,
 *              which prints the menu and then returns the user's
 *              choice to the main function.
*********************************************************************/
#include <iostream>
#include "menu.hpp"

using std::cin;
using std::cout;
using std::endl;

int menu()
{
    bool validData = false;
    int choice;
    //Menu
    cout << "Choose from following options: " << endl;
    cout << endl;
    cout << "1. Add a new node to the head\n";
    cout << "2. Add a new node to the tail\n";
    cout << "3. Delete from head\n";
    cout << "4. Delete from tail\n";
    cout << "5. Traverse the list reversely\n";
    cout << "6. *BONUS* Print the value of the node head is pointing to\n";
    cout << "7. *BONUS* Print the value of the node tail is pointing to\n";
    cout << "8. Quit\n";
    cout << endl;

    while(!validData)
    {
        cin >> choice;
        cout << endl;
        if(cin.fail())
        {
            cout << "Error! Please enter a valid option!" << endl;
            cout << endl;
            cin.clear();
            cin.ignore();
        }
        else if(choice < 1 || choice > 8)
        {
            cout << "Error! Please enter a valid option!" << endl;
            cout << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
            validData = true;
            return choice;
        }
    }
}