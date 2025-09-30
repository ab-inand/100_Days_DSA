
-----

### 📝 Day 23: Introduction to Linked Lists Notes

#### \#\# What is a Linked List?

A linked list is a linear data structure, but unlike an array, its elements are not stored in contiguous memory locations. Instead, elements are linked using pointers.

**Analogy: A Treasure Hunt** 🗺️

  * An **array** is like a row of houses on a street (101, 102, 103...). To find the 5th house, you just go to the 5th spot.
  * A **linked list** is like a treasure hunt.
    1.  You start at the first location (the **`head`** node).
    2.  At this location, you find some treasure (the **`data`**) and a clue that tells you the address of the *next* location (the **`next`** pointer).
    3.  You follow the clue to the second location, find more treasure, and get the next clue.
    4.  This continues until you find a clue that says "The End\!" (a `nullptr`).

The fundamental building block of a linked list is the **`Node`**. Each node contains at least two things:

1.  **`data`**: The value you want to store (an `int`, `string`, etc.).
2.  **`next`**: A **pointer** to the next `Node` in the sequence. The `next` pointer of the last node is `nullptr`.

#### \#\# Head-to-Head: Arrays vs. Linked Lists

Understanding the difference between these two is critical.

| Feature                      | Array / `std::vector`                                       | Linked List                                                                  |
| :--------------------------- | :---------------------------------------------------------- | :--------------------------------------------------------------------------- |
| **Memory Allocation** | **Contiguous**. Elements are stored side-by-side in memory. | **Non-contiguous**. Nodes can be scattered anywhere in memory.               |
| **Accessing an Element (Read)** | **`O(1)`**. You can jump directly to any index (`arr[i]`).    | **`O(n)`**. You must start at the `head` and traverse the list to find the n-th element. |
| **Insertion / Deletion** | **`O(n)`**. Inserting or deleting in the middle or at the start requires shifting all subsequent elements. | **`O(1)`**. If you have a pointer to the node, you just need to change a few pointers. This is the main advantage. |
| **Size** | Can be wasteful if you allocate a large fixed size but use little of it. `vector` handles this but may reallocate and copy the entire array. | **Dynamic**. Grows and shrinks one node at a time, using only the memory it needs. |

-----
