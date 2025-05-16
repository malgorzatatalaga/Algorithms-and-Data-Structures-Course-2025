#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList linkedList;
    vector<int> values = {7, 3, 10, 5, 8, 1};
    
    for(int v: values)
    {
        linkedList.addNode(v);
    }
    
    linkedList.printList();
}
