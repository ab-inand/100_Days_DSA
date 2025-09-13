//Bubble Sort 2 (Medium): Optimized Implementation

//This version adds a boolean flag to check if any swaps were made in a pass. If not, the array is sorted, and the function exits early.


#include <iostream>
#include <vector>
#include <utility>

void optimizedBubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (!swapped) {
            break;
        }
    }
}

// ... (main and printVector functions are the same as above)
