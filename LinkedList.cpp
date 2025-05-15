#include <iostream>

class Node
{
public:
    int value;
    Node* next;

    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList
{
    Node* head;
public:
    LinkedList()
    {
        this->head = nullptr;
    }

    void addNode(int value)
    {
        Node* newNode = new Node(value);
        if (this->head == nullptr)
        {
            this->head = newNode;
        } else 
        {
            if (newNode->value < head->value)
            {
                newNode->next=head;
                head=newNode;
            }
            else
            {
                Node* currentNode = this->head;
                while (currentNode->next != nullptr)
                {
                    if (value > currentNode->value && value < currentNode->next->value)
                    {
                        newNode->next = currentNode->next;
                        currentNode->next = newNode;

                    }
                    currentNode = currentNode->next;
                    break;
                }
                if (currentNode->next==nullptr)
                {
                    currentNode->next = newNode;
                }
                
            }
            
        }
        
    }
};