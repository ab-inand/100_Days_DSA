
-----

### 📝 Day 22: Week 3 Review Notes

#### \#\# Week 3 Recap: The Power of the C++ STL

This week was a significant step forward, moving from manual memory management and algorithms to leveraging the power of the C++ Standard Template Library. You've learned how to use the STL's most common containers to write cleaner, safer, and more efficient code. The central theme was using **hashing** via `unordered_map` and `unordered_set` to achieve `O(1)` average time complexity for lookups.

#### \#\# Choosing the Right Tool: `vector` vs. `unordered_set` vs. `unordered_map`

Knowing which container to use is a critical skill. Here’s a quick comparison to guide your decision:

| Feature          | `std::vector`                                       | `std::unordered_set`                                     | `std::unordered_map`                                         |
| :--------------- | :-------------------------------------------------- | :------------------------------------------------------- | :----------------------------------------------------------- |
| **Stores** | A sequence of elements.                             | A collection of **unique** elements.                     | A collection of **key-value pairs**.                         |
| **Order** | **Ordered** (maintains insertion order).            | **Unordered**.                                           | **Unordered**.                                               |
| **Duplicates?** | **Yes**, duplicates are allowed.                    | **No**, all elements are unique.                         | **Keys** must be unique.                                     |
| **Access (Avg)** | `O(1)` by index (`vec[i]`).                         | `O(1)` to check for existence (`.count()`).             | `O(1)` to look up a value by its key (`map[key]`).          |
| **Primary Use** | A flexible, dynamic array. Use when order matters.  | Fast lookups to check for the **existence** of unique items. | Fast lookups to **associate a value with a unique key**.     |
| **Example** | Storing a sequence of user actions.                 | Removing duplicates from a list; checking for subsets.   | Counting the frequency of items; storing user profiles by ID.|

-----
