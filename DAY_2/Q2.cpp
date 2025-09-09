//Reverse an Array


#include <iostream>
#include <utility> // For std::swap

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Original array: ";
    printArray(numbers, size);

    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap the elements at the start and end pointers
        std::swap(numbers[start], numbers[end]);

        // Move the pointers towards the center
        start++;
        end--;
    }

    std::cout << "Reversed array: ";
    printArray(numbers, size);

    return 0;
}
