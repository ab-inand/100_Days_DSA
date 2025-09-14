
//Implement Insertion Sort

//This code directly follows the logic of picking a key, shifting larger elements to the right, and inserting the key into its correct position.





#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    // Start from the second element (index 1)
    for (int i = 1; i < n; ++i) {
        int key = arr[i]; // The element to be inserted
        int j = i - 1;    // The last element of the sorted sub-array

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Place the key in its correct sorted position
    }
}

void printVector(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {12, 11, 13, 5, 6};
    std::cout << "Unsorted array: ";
    printVector(numbers);
    
    insertionSort(numbers);
    
    std::cout << "Sorted array:   ";
    printVector(numbers);
    
    return 0;
}
