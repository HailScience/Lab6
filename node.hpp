/*********************************************************************
** Program name: node.hpp
** Author: Alexandra Carper
** Date: 02/14/2018
** Description: The Node class declares the class DoublyLinkedList
 *              as a friend class and declares the member variables
 *              val, next (a pointer to the next Node object), and
 *              prev (a pointer to the previous Node object).
*********************************************************************/

#include <iostream>

class DoublyLinkedList;

class Node
{
    friend class DoublyLinkedList;
public:
    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
private:
    int val;
    Node* next;
    Node* prev;
};