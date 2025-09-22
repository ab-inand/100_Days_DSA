
-----

### 📝 Day 15: Week 2 Review Notes

#### \#\# Week 2 Recap: Recursion and Advanced Sorting

This week was all about leveraging **recursion** to build highly efficient "divide and conquer" algorithms. You moved from the `O(n²)` sorting methods of Week 1 to the `O(n log n)` powerhouses: Merge Sort and Quick Sort. Understanding the fundamental differences between these two is key for any programmer.

#### \#\# Head-to-Head: Merge Sort vs. Quick Sort

Choosing between Merge Sort and Quick Sort depends on the specific requirements of your problem.

| Feature               | Merge Sort                                                              | Quick Sort                                                                  |
| :-------------------- | :---------------------------------------------------------------------- | :-------------------------------------------------------------------------- |
| **Time (Average)** | `O(n log n)`                                                            | `O(n log n)` (often with better constant factors, making it faster)         |
| **Time (Worst)** | `O(n log n)`                                                            | `O(n²)` (if pivot choices are consistently bad)                              |
| **Space Complexity** | `O(n)`                                                                  | `O(log n)` (for the recursion stack)                                        |
| **In-Place?** | No, requires an auxiliary array.                                        | Yes, it sorts the array in-place.                                           |
| **Stability?** | **Stable**. Elements with equal values maintain their original order.   | **Unstable**. The relative order of equal elements may change.              |
| **When to Use?** | When a worst-case guarantee is needed, when stability is required, or for external sorting where data doesn't fit in memory. | When speed is the priority and extra space is a concern. It's the default choice for most internal, general-purpose sorting. |

#### \#\# Introduction to QuickSelect

The problem for today, finding the k-th smallest element, can be solved by sorting the whole array and picking the element at index `k-1`. But that's `O(n log n)`, and we can do better\!

**QuickSelect** is a selection algorithm that modifies the Quick Sort algorithm to solve this problem in **average `O(n)` time**.

**The Key Idea:**
In Quick Sort, you partition the array and then recursively call on *both* sides of the pivot. In QuickSelect, you partition the array, and then you only need to make **one** recursive call on the specific side where the k-th element must be.

**How It Works:**

1.  Choose a pivot and partition the array. The pivot is now in its final sorted position at index `pi`.
2.  If `pi` is the index we are looking for (`pi == k-1`), we've found our element and can stop.
3.  If `k-1` is **less than** `pi`, we know the k-th smallest element must be in the left sub-array. We recursively search only on the left side.
4.  If `k-1` is **greater than** `pi`, we know it must be in the right sub-array. We recursively search only on the right side.

By discarding half of the array at each step, the total work done is `n + n/2 + n/4 + ...`, which mathematically converges to `2n`, giving us an average time complexity of `O(n)`.

-----
