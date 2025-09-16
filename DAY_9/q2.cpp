// Sum an Array with a Pointer Function

// This is a very common way to pass arrays to functions in C++. The function simply receives a pointer to the first element.


#include <iostream>
#include <vector> // Though we use a raw array, vector is good practice for main

using namespace std;

// The function accepts a pointer to the first element and the array's size.
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        // Use pointer arithmetic to access the element and add it to the sum.
        // This is equivalent to sum += arr[i];
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Pass the array (which decays to a pointer) to the function.
    int total = sumArray(numbers, size);

    cout << "The sum of the array elements is: " << total << endl;
    
    return 0;
}
