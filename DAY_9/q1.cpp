//  Traverse and Print an Array Using a Pointer

// This program demonstrates iterating through an array using only pointer arithmetic.




#include <iostream>

using namespace std;

int main() {
    int numbers[] = {11, 22, 33, 44, 55};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // The array name 'numbers' decays to a pointer to the first element.
    int* ptr = numbers;

    cout << "Printing array using pointer arithmetic *(ptr + i):" << endl;
    for (int i = 0; i < size; ++i) {
        // Access the element at the i-th offset from the base pointer
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
