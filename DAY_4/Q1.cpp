// Sum of Array using Pointers


#include <iostream>

// The function accepts a pointer to the first element of the array and its size.
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        // arr[i] is syntactic sugar for *(arr + i)
        // It dereferences the pointer at the offset 'i'.
        sum += arr[i]; 
    }
    return sum;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // When passing an array to a function, you are actually passing a pointer
    // to its first element.
    int total = sumArray(numbers, size);

    std::cout << "The sum of the array elements is: " << total << std::endl;
    return 0;
}
