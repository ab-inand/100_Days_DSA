### 📝 Day 8: Week 1 Review Notes

-----

#### \#\# Week 1 Recap: Algorithm Comparison

This week, we moved from basic syntax to analyzing and implementing fundamental algorithms. The most important concept is understanding the **trade-offs** between them, primarily in terms of time and space complexity.

Here's a summary table of the algorithms you've learned:

| Algorithm        | Type      | Best Case Time | Avg/Worst Case Time | Space Complexity | Key Idea / When to Use                                  |
| :--------------- | :-------- | :------------- | :------------------ | :--------------- | :------------------------------------------------------ |
| **Linear Search** | Searching | `O(1)`         | `O(n)`              | `O(1)`           | Simple and effective for **unsorted** or small arrays.    |
| **Binary Search** | Searching | `O(1)`         | `O(log n)`          | `O(1)`           | Highly efficient, but requires the array to be **sorted**. |
| **Bubble Sort** | Sorting   | `O(n)` (Opt.)  | `O(n²)`             | `O(1)`           | Simple to understand; swaps adjacent elements. Educational. |
| **Selection Sort** | Sorting   | `O(n²)`        | `O(n²)`             | `O(1)`           | Makes the minimum number of swaps.                      |
| **Insertion Sort** | Sorting   | `O(n)`         | `O(n²)`             | `O(1)`           | Efficient for **nearly-sorted** or small datasets.      |

-----

#### \#\# The Two-Pointer Technique

The problem for today introduces a new and extremely useful pattern: the **two-pointer technique**. It's an efficient way to parse a **sorted array** by having pointers at both ends that move towards each other.

**Analogy:** Imagine a line of people sorted by height. You need to find two people whose heights add up to a specific number.

1.  You place one person (the `left` pointer) at the shortest person and another (the `right` pointer) at the tallest.
2.  You add their heights.
3.  If the sum is **too small**, you need a taller person. Since the `right` pointer is already at the max, you move the `left` pointer one step to the right to get a slightly taller person.
4.  If the sum is **too large**, you need a shorter person. You move the `right` pointer one step to the left.
5.  You repeat this, closing the gap between them, until you find the perfect pair or they cross paths.

This technique avoids a brute-force `O(n²)` approach (checking every possible pair) and solves the problem in `O(n)` time.

