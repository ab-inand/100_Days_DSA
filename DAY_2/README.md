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

