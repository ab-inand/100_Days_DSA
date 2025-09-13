//Bubble Sort 1 (Easy): Standard Implementation

#include <iostream>
#include <vector>
#include <utility> // For std::swap

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printVector(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    std::cout << "Unsorted array: ";
    printVector(numbers);
    bubbleSort(numbers);
    std::cout << "Sorted array:   ";
    printVector(numbers);
    return 0;
}
