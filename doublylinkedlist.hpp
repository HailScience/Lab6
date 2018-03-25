/*********************************************************************
** Program name: doublylinkedlist.hpp
** Author: Alexandra Carper
** Date: 02/14/2018
** Description: This DoublyLinkedList class implementation file
 *              contains functions for adding to beginning of a
 *              linked list, adding to the end of a linked list,
 *              deleting elements from the beginning of a linked
 *              list, deleting elements from the end of a linked
 *              list, traversing the list, traversing the list
 *              reversely, returning the head of ths linked list,
 *              returning the tail of the linked list, and checking
 *              for if the list is empty.
*********************************************************************/

#include <iostream>
#include "node.hpp"

using std::cout;
using std::endl;

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;
public:
    //Constructor
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    //Destructor
    ~DoublyLinkedList()
    {
        while(head != NULL)
        {
            destroyList();
        }
    }

    //Adds to value to head of list
    void addHead(int val)
    {
        //Make new node with given data
        Node *n = new Node(val);
        //Make previous point to NULL to indicate beginning of list
        n->prev = NULL;
        //If list is empty
        if(head == NULL)
        {
            //Set head to node
            head = n;
            //Set tail to node
            tail = n;
            //Set node's next to NULL
            n->next = NULL;
        }
        else
        {
            //Set head's prev to node
            head->prev = n;
            //Set node's next to head
            n->next = head;
            //Set head to node
            head = n;
        }
    }

    //Adds value to tail of list
    void addTail(int val)
    {
        //Make the new node with given data
        Node *n = new Node(val);
        //Make next point to NULL to indicate end of list
        n->next = NULL;
        //If the list is empty
        if(tail == NULL)
        {
            //Set head to node
            head = n;
            //Set tail to node
            tail = n;
            //Set node's prev to NULL
            n->prev = NULL;
        }
        else
        {
            //Set tail's next to node
            tail->next = n;
            //Set node's prev to tail
            n->prev = tail;
            //Set tail to node
            tail = n;
        }
    }

    //Deletes from head
    void deleteFirst()
    {
        //Create temp pointer to point to head
        Node *first = head;
        if(head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            //Move head to next node
            head = head->next;
            //Set previous node to NULL
            head->prev = NULL;
        }
        //Delete temp pointer
        delete first;
    }

    //Deletes from tail
    void deleteLast()
    {
        //Create a temp pointer to point to tail
        Node *last = tail;
        if(head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            //Move tail to previous node
            tail = tail->prev;
            //Set next node to NULL
            tail->next = NULL;
        }
        //Delete temp pointer
        delete last;
    }

    //Traverses list
    void traverse()
    {
        Node *temp = head;
        cout << "Your linked list is: ";
        while(temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
        cout << endl;
    }

    //Traverses list in reverse
    void traverseReverse()
    {
        Node *temp = tail;
        cout << "Your linked list is: ";
        while(temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
        cout << endl;
    }

    //Called by constructor to destroy each node in list
    void destroyList()
    {
        //Create pointer to head of list
        Node *current = head;
        while(current != NULL)
        {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = NULL;
    }

    //Checks if list is empty
    bool checkHeadEmpty()
    {
        if(head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //Checks if list is empty
    bool checkTailEmpty()
    {
        if(tail == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //Returns head of list
    int getHead()
    {
        return head->val;
    }

    //Returns tail of list
    int getTail()
    {
        return tail->val;
    }
};