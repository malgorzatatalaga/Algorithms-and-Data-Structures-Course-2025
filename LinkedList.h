#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
public:
    int value;
    Node* next;

    Node(int value);
};

class LinkedList
{
    Node* head;

public:
    LinkedList();              
    void addNode(int value);
    void printList();
};

#endif