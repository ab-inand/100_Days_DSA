// Selection Sort (Easy): Implementation

//As this was part of the Day 4 review, this is a great chance to solidify your understanding of it.

#include <iostream>
#include <vector>
#include <utility>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

// ... (main and printVector functions are the same as above)
