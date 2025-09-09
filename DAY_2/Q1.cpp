// Find the Largest and Smallest Element 



#include <iostream>

int main() {
    int numbers[] = {45, 12, 89, 23, 7, 101, 56};
    // To get the size of the array, we divide the total size of the array
    // in bytes by the size of one element in bytes.
    int size = sizeof(numbers) / sizeof(numbers[0]);

    if (size == 0) {
        std::cout << "Array is empty." << std::endl;
        return 0;
    }

    int smallest = numbers[0];
    int largest = numbers[0];

    // Start loop from the second element (index 1)
    for (int i = 1; i < size; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    std::cout << "Smallest element: " << smallest << std::endl;
    std::cout << "Largest element: " << largest << std::endl;

    return 0;
}
