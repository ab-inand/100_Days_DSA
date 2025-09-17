// Easy: Create and Manage a Dynamic Array

// This program asks the user for a size, creates an array of that size on the heap, uses it, and then correctly frees the memory to prevent a leak.




#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the desired size for the dynamic array: ";
    cin >> size;

    // 1. Allocate memory on the heap for an array of 'size' integers.
    // 'dynamicArray' is a pointer that holds the address of the first element.
    int* dynamicArray = new int[size];
    cout << "Memory for " << size << " integers allocated on the heap." << endl;

    // 2. Fill the array with values.
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = (i + 1) * 10;
    }

    // 3. Print the values to show it works.
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // 4. Deallocate the memory to prevent a memory leak.
    // We use delete[] because we allocated an array with new int[size].
    delete[] dynamicArray;
    cout << "Memory on the heap has been deallocated." << endl;
    
    // After deletion, the pointer should not be used. It's good practice
    // to set it to nullptr to avoid dangling pointer issues.
    dynamicArray = nullptr;

    return 0;
}
