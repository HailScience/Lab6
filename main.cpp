/*********************************************************************
** Program name: main.cpp
** Author: Alexandra Carper
** Date: 02/14/2018
** Description: The main function prints the menu, waits for user
 *              input, performs the linked list functions, and then
 *              prints the menu again while the user does not want
 *              to exit.
*********************************************************************/

#include <iostream>
#include "doublylinkedlist.hpp"
#include "menu.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Welcome!" << endl;
    int choice;
    DoublyLinkedList list;
    choice = menu();
    while(choice != 8)
    {
        //Add to beginning
        if(choice == 1)
        {
            cin.clear();
            cin.ignore();
            cout << "Please enter a positive integer: " << endl;
            cout << endl;
            int number;
            bool validData2 = false;
            while (!validData2)
            {
                cin >> number;
                cout << endl;
                if (cin.fail())
                {
                    cout << "Error! Please enter an integer!" << endl;
                    cout << endl;
                    cin.clear();
                    cin.ignore();
                }
                else
                {
                    //Add number to list
                    list.addHead(number);
                    //Print list
                    list.traverse();
                    //Don't return through loop
                    validData2 = true;
                }
            }
            choice = menu();
        }
        else if(choice == 2)
        {
            cin.clear();
            cin.ignore();
            cout << "Please enter a positive integer: " << endl;
            cout << endl;
            int number;
            bool validData2 = false;
            while (!validData2)
            {
                cin >> number;
                cout << endl;
                if (cin.fail())
                {
                    cout << "Error! Please enter an integer!" << endl;
                    cout << endl;
                    cin.clear();
                    cin.ignore();
                }
                else
                {
                    //Add number to list
                    list.addTail(number);
                    //Print list
                    list.traverse();
                    //Don't return through loop
                    validData2 = true;
                }
            }
            choice = menu();
        }
        else if(choice == 3)
        {
            cin.clear();
            cin.ignore();
            bool empty1;
            empty1 = list.checkHeadEmpty();
            if (empty1)
            {
                cout << "Warning! List is empty!" << endl;
                cout << endl;
            }
            else
            {
                list.deleteFirst();
                list.traverse();
            }
            choice = menu();
        }
        else if(choice == 4)
        {
            cin.clear();
            cin.ignore();
            bool empty2;
            empty2 = list.checkTailEmpty();
            if (empty2)
            {
                cout << "Warning! List is empty!" << endl;
                cout << endl;
            }
            else
            {
                list.deleteLast();
                list.traverse();
            }
            choice = menu();
        }
        else if(choice == 5)
        {
            cin.clear();
            cin.ignore();
            bool empty3;
            empty3 = list.checkTailEmpty();
            if (empty3)
            {
                cout << "List is empty!" << endl;
                cout << endl;
            }
            else
            {
                list.traverseReverse();
            }
            choice = menu();
        }
        else if(choice == 6)
        {
            cin.clear();
            cin.ignore();
            bool empty4;
            empty4 = list.checkHeadEmpty();
            if (empty4)
            {
                cout << "List is empty!" << endl;
                cout << endl;
            }
            else
            {
                cout << list.getHead() << endl;
                cout << endl;
            }
            choice = menu();
        }
        else if(choice == 7)
        {
            cin.clear();
            cin.ignore();
            bool empty5;
            empty5 = list.checkTailEmpty();
            if (empty5)
            {
                cout << "List is empty!" << endl;
                cout << endl;
            }
            else
            {
                cout << list.getTail() << endl;
                cout << endl;
            }
            choice = menu();
        }
    }
    if(choice == 8)
    {
        cin.clear();
        cin.ignore();
        cout << "Goodbye!" << endl;
    }

    return 0;
}