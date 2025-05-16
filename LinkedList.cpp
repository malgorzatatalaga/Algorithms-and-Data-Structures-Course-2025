#include <iostream>
#include "LinkedList.h"

using namespace std;

Node::Node(int value)
{
    this->value = value;
    this->next = nullptr;
};

LinkedList::LinkedList()
{
    this->head = nullptr;
}

void LinkedList::addNode(int value)
{
    Node* newNode = new Node(value);

    if (this->head == nullptr)
    {
        this->head = newNode;
    }
    else
    {
        if (value < head->value)
        {
            newNode->next = head;
            head = newNode;
            return;
        }
            
        Node* currentNode = head;
        while (currentNode->next != nullptr)
        {
            if (value > currentNode->value && value < currentNode->next->value)
            {
                newNode->next = currentNode->next;
                currentNode->next = newNode;
                return;
            }
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

void LinkedList::printList()
{
    Node* currentNode = head;
    while (currentNode != nullptr)
    {
        cout << currentNode->value << " -> ";
        currentNode = currentNode->next;
    }
    cout << "null" << endl;
}