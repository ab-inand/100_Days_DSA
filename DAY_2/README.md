Here are your notes and resources for Day 2.

Today's lesson is on **arrays**, the most fundamental data structure for storing a collection of items.

### 📝 C++ Arrays: Notes

-----

#### \#\# What are Arrays?

An array is a data structure that stores a fixed-size, sequential collection of elements of the **same data type**.

Think of it like a row of numbered mailboxes. Each mailbox holds one item (the element), and you can find any item by knowing its box number (the index). The key features are:

  * **Same Data Type:** An array of integers can *only* hold integers.
  * **Fixed Size:** The size of the array is decided when you create it and cannot be changed later.
  * **Contiguous Memory:** All elements are stored right next to each other in memory, which makes accessing them very fast.

-----

#### \#\# Declaration and Traversal

You declare an array by specifying the type, name, and size. You can traverse (or iterate over) an array using a `for` loop.

```cpp
#include <iostream>

int main() {
    // Declare an array of 5 integers.
    int scores[5] = {88, 92, 77, 100, 95}; 

    // The size of the array is 5.
    int size = 5;

    std::cout << "The scores are: ";
    // Traverse the array using a for loop.
    // We loop from index 0 to index 4 (size - 1).
    for (int i = 0; i < size; ++i) {
        // Access each element using its index: scores[i]
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

-----

#### \#\# Indexing and Bounds

In C++, array indexing is **0-based**. This means the first element is at index `0`, the second at index `1`, and the last element is at index `size - 1`.

  * For an array of size 5, the valid indices are `0, 1, 2, 3, 4`.

**Be careful with array bounds\!** Accessing an element outside of this range (e.g., `scores[5]`) results in **undefined behavior**. Your program might crash or produce incorrect results.

### 💻 Implementation Tasks: Code Solutions

-----

#### \#\# Easy: Find the Largest and Smallest Element

This program initializes `min` and `max` to the first element, then iterates through the rest of the array to find any smaller or larger values.

```cpp
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
```

-----

#### \#\# Medium: Reverse an Array

The most efficient way to reverse an array is using the **two-pointer technique**. One pointer starts at the beginning (`start`), and one starts at the end (`end`). We swap their elements and move the pointers towards the center until they meet.

```cpp
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
```
