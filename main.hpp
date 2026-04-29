#ifndef MAIN_HPP
#define MAIN_HPP

// Bubble sort internals:
//   bubble()      — one pass: compare adjacent pairs, swap if left > right
//   bubblesort()  — call bubble() N-1 times to fully sort

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int> &, int);
void printVector(vector<int>);
void bubble(vector<int> &);
void bubblesort(vector<int> &);

void bubble(vector<int> &number)
{
    // TODO: one bubble-sort pass — compare adjacent values and swap if left > right.
    if (number.size() < 2) return;
    for (size_t i = 0; i + 1 < number.size(); i++)
        if (number[i] > number[i + 1])
            swap(number[i], number[i + 1]);
}

void bubblesort(vector<int> &number)
{
    // TODO: call bubble() N-1 times to fully sort the vector (ascending).
    if (number.size() < 2) return;
    for (size_t i = 0; i + 1 < number.size(); i++)
        bubble(number);
}

void makeVector(vector<int> &number, int N)
{
    srand(time(NULL));
    number.clear();
    for (int i = 0; i < N; i++)
        number.push_back(rand() % 20);
}

void printVector(vector<int> number)
{
    for (auto iter = number.begin(); iter != number.end(); iter++)
        cout << setw(5) << *iter;
    cout << endl;
}

#endif
