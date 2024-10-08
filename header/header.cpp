// header.cpp : This file contains the 'main' function. Program execution begins and en

#include<iostream>
#include "linear_search.hpp"
using namespace std;
int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int found = 7;

    int result = linear_search(arr, size, found);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}


