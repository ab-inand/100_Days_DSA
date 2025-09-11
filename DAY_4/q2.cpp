//Sort an Array (Selection Sort)


#include <iostream>
#include <utility> // For std::swap

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Assume the first element of the unsorted part is the minimum
        int min_idx = i;
        // Iterate through the rest of the array to find the true minimum
        for (int j = i + 1; j < n; j++) {
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

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int n = sizeof(data) / sizeof(data[0]);
    
    std::cout << "Unsorted array: ";
    printArray(data, n);
    
    selectionSort(data, n);
    
    std::cout << "Sorted array: ";
    printArray(data, n);
    
    return 0;
}
