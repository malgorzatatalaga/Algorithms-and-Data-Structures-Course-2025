#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "LinkedList.h"

using namespace std;
using namespace std::chrono;

int main()
{
    LinkedList linkedList;
    mt19937 gen(random_device{}());
    vector<int> sizes = {1'000, 2'000, 3'000, 4'000, 5'000, 6'000, 7'000, 8'000, 9'000, 10'000};

    for (int size : sizes)
    {
        vector<int> values(size);
        iota(values.begin(), values.end(), 1);
        shuffle(values.begin(), values.end(), gen);

        LinkedList linkedList;

        auto start = high_resolution_clock::now();

        for (int v : values)
        {
            linkedList.addNode(v);
        }

        auto end = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(end - start).count();

        cout << duration << endl;
    }
}
