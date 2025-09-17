
-----

### 📝 Day 10: Dynamic Memory Allocation Notes

#### \#\# Stack vs. Heap Memory

To understand dynamic memory, you first need to know about the two primary places your program stores data: the Stack and the Heap.

  * **The Stack:** 🥞 Think of a stack of plates. It's very fast, organized, and automatically managed. When a function is called, its local variables (like `int x = 5;` or `int arr[10];`) are "pushed" onto the stack. When the function ends, they are automatically "popped" off and destroyed. The key limitation is that the size of all stack variables must be known at compile time.

  * **The Heap:** warehouse of memory. It's a large, less organized pool of memory available to your program. It's more flexible because you can request blocks of any size at any time (**runtime**). However, this memory is **not** managed automatically. You are responsible for both requesting it and giving it back when you're done.

#### \#\# The `new` and `delete` Keywords

To manage heap memory, C++ gives us two essential keywords:

  * **`new`:** This keyword **allocates** (requests) memory from the heap. It returns a pointer to the beginning of that allocated memory block.

      * **For a single variable:** `int* ptr = new int;`
      * **For an array:** `int* arr_ptr = new int[size];` (Here, `size` can be a variable determined at runtime).

  * **`delete`:** This keyword **deallocates** (releases) memory that you previously allocated, returning it to the heap so it can be reused.

      * **For a single variable:** `delete ptr;`
      * **For an array:** You **must** use the special array form, `delete[]`.
        `delete[] arr_ptr;`
        Using `delete` on an array pointer or `delete[]` on a single variable pointer leads to undefined behavior.

#### \#\# What is a Memory Leak?

A memory leak is what happens when you allocate memory on the heap with `new` but forget to free it with `delete` or `delete[]`.

**Analogy:** It's like renting a storage locker, putting your things in it, and then losing the key and the rental agreement. The locker is still marked as "in use," but nobody—not even you—can ever access it or free it up for someone else to use. For your program, this means the memory is consumed but inaccessible, wasting resources until the program terminates.

-----
