
-----

### 📝 Day 20: Advanced Heap Problems Notes

#### \#\# Leveraging the Power of Heaps

Remember, a `priority_queue` is a data structure that allows you to efficiently get the "top" element (either the max or min) even as you add and remove elements. This makes it perfect for any problem where you constantly need to know the next smallest/largest item among a changing collection.

  * **Max-Heap (default):** `priority_queue<int>`
  * **Min-Heap (custom syntax):** `priority_queue<int, vector<int>, greater<int>>`

-----

#### \#\# Problem 1: Merge `k` Sorted Arrays

**The Problem:** You are given `k` sorted arrays. Your task is to merge them into a single, final sorted array.

**The Heap-based Approach:**
The most efficient way to solve this is with a **min-heap**. We only need to keep track of the smallest current element from each of the `k` arrays. The min-heap is perfect for telling us which of those `k` elements is the absolute smallest.

**Analogy: A Tournament of Champions** 🏆
Imagine a tournament with `k` champions, where each champion represents one of the sorted arrays.

1.  To start, each champion brings their smallest soldier (the first element of their array) to the arena. All `k` soldiers enter the arena (the **min-heap**).
2.  The soldier with the lowest strength (the smallest value) is declared the winner of the round. They leave the arena and are placed in the final sorted army (the result vector).
3.  The champion whose soldier just won sends their *next* smallest soldier into the arena to take their place.
4.  This process repeats: the weakest soldier in the arena wins the round, leaves, and is replaced by the next one from their own army, until all soldiers from all armies have passed through the arena.

**Algorithm:**

1.  Create a min-heap that will store a `tuple` or `struct` containing `{value, array_index, element_index}`.
2.  Push the first element from each of the `k` arrays into the heap.
3.  While the heap is not empty:
    a. Pop the top element (the current overall minimum). Add its `value` to your result list.
    b. Check which array it came from. If that array still has more elements, push the next element from that array into the heap.

**Complexity:** This approach has a time complexity of **`O(N log k)`** where `N` is the *total* number of elements and `k` is the number of arrays. The space complexity is **`O(k)`** to store one element from each array in the heap.

-----

#### \#\# Problem 2: Find Median from a Data Stream

**The Problem:** You are given a stream of numbers arriving one at a time. After each new number, you need to provide the median of all numbers seen so far.

**The Two-Heap Approach (The "Balancing Act"):**
The median is the middle value of a sorted dataset. We can efficiently find it by dividing the stream of numbers into two balanced halves.

1.  A **max-heap** (`lower_half`) to store the smaller half of the numbers. Its top will always be the largest element in the small half.
2.  A **min-heap** (`upper_half`) to store the larger half of the numbers. Its top will always be the smallest element in the large half.

**The Balancing Rule:** We will always keep the heaps balanced such that their sizes are either equal, or the `lower_half` (max-heap) has exactly one more element than the `upper_half`.

**Algorithm (for each new number):**

1.  Add the new number to the `lower_half` (max-heap).
2.  To maintain the property that all numbers in `upper_half` are greater than those in `lower_half`, move the largest element from `lower_half` (its top) to `upper_half`.
3.  Rebalance the sizes. If `upper_half` now has more elements than `lower_half`, move the smallest element from `upper_half` (its top) back to `lower_half`.
4.  After these steps, the heaps are balanced and all elements are in the correct half.

**Finding the Median:**

  * If the total number of elements is odd, the median is simply the top of the `lower_half` max-heap.
  * If the total number of elements is even, the median is the average of the tops of both heaps.

-----
