
-----

### 📝 Day 16: C++ STL: `vector` Notes

#### \#\# What is the STL?

The **Standard Template Library (STL)** is a collection of powerful, pre-built, and highly optimized template classes and functions in C++. It provides common data structures (like vectors, maps, lists) and algorithms (like sort, find, reverse) so you don't have to write them from scratch. Using the STL is the standard, modern way to write C++ code.

#### \#\# `std::vector`: The Dynamic Array You've Been Waiting For

A `std::vector` is the STL's implementation of a dynamic array. It gives you all the benefits of a dynamic array without any of the manual memory management headaches of `new` and `delete[]`.

**Analogy: Manual Memory vs. `vector`** 🏨

  * Using `new` and `delete[]` is like being your own landlord. You have to find the plot of land (memory), build on it, and remember to tear it down (`delete`) when you're done. If you forget, it just sits there, wasted (a memory leak).
  * Using `std::vector` is like staying in a hotel. You ask for a room. If you need more space for friends, the hotel automatically finds you a bigger room (`push_back`). When you're done and leave (the vector goes out of scope), the hotel staff cleans everything up for you automatically. It's safer, easier, and much more convenient.

To use `vector`, you must `#include <vector>`. Since it's a template, you can create a vector of any data type: `vector<int>`, `vector<string>`, `vector<double>`, etc.

#### \#\# Common `vector` Member Functions

  * **`push_back(value)`:** Adds an element to the **end** of the vector. If the vector runs out of allocated space, it will automatically reallocate a larger block of memory and move the elements.
  * **`pop_back()`:** Removes the **last** element from the vector.
  * **`size()`:** Returns the current number of elements in the vector.
  * **`[index]`:** Accesses an element at a specific index, just like a regular array.
  * **`begin()` and `end()` (Iterators):** Iterators are like smart pointers that can be used to traverse a container.
      * `vec.begin()` returns an iterator pointing to the first element.
      * `vec.end()` returns an iterator pointing to the theoretical element *after* the last one. This is used to know when to stop iterating. The easiest way to use them is with a **range-based for loop**, which is the preferred way to traverse a vector.

-----
