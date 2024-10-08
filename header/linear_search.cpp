#include "linear_search.hpp"


int linear_search(int arr[], int size, int found) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == found) {
            return i;
        }
    }
    return -1;
}
