### 📝 Day 6: Basic Sorting Algorithms Notes

-----

#### \#\# Part 1: Bubble Sort

**Bubble Sort** is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted. The larger values "bubble" up to the end of the array.

**Analogy:** Imagine a line of people of different heights. You compare the first two people and swap them if the person on the left is taller. You do this for the second and third, third and fourth, and so on. After one full pass, the tallest person will have "bubbled up" to the end of the line. You repeat this entire process for the remaining people until no more swaps are needed.

**How It Works:**

1.  Use a nested loop. The outer loop controls the number of passes. After `i` passes, the last `i` elements of the array are guaranteed to be sorted.
2.  The inner loop iterates through the unsorted portion, comparing each element `arr[j]` with its neighbor `arr[j+1]` and swapping them if `arr[j] > arr[j+1]`.

**Optimization:**
The basic algorithm will complete all its passes even if the array is already sorted. We can optimize it by adding a flag. If a full pass of the inner loop completes without making any swaps, it means the array is sorted, and we can stop early.

**Complexity Analysis:**

  * **Time Complexity: `O(n²)`**
    In the worst and average cases, it requires nested loops to go through the array, resulting in quadratic time complexity.
  * **Space Complexity: `O(1)`**
    It's an in-place algorithm, meaning it sorts the array without needing any significant extra memory.

-----

#### \#\# Part 2: Selection Sort

**Selection Sort** is another simple, in-place sorting algorithm. Its strategy is to divide the array into two parts: a sorted part at the beginning and an unsorted part at the end. It then repeatedly finds the smallest element in the unsorted part and swaps it with the first element of that unsorted part.

**Analogy:** Think of a row of unsorted number cards on a table. You scan the entire row to find the card with the smallest number. You pick it up and place it at the very beginning of the row. Now, considering the first card sorted, you scan the *rest* of the cards, find the next-smallest, and place it in the second position. You repeat this until all the cards are in their correct, sorted positions.

**How It Works:**

1.  Use a nested loop. The outer loop `i` tracks the boundary of the sorted portion.
2.  The inner loop `j` scans the unsorted part of the array (from `i+1` to the end) to find the index of the minimum element (`min_idx`).
3.  After the inner loop finishes, swap the element at the boundary `arr[i]` with the minimum element found at `arr[min_idx]`.

**Complexity Analysis:**

  * **Time Complexity: `O(n²)`**
    The time complexity is `O(n²)` for the best, average, and worst cases because it must always iterate through the remaining items to find the minimum, regardless of whether the array is already sorted.
  * **Space Complexity: `O(1)`**
    It's also an in-place algorithm requiring no extra space. A key feature is that it performs at most `n-1` swaps, which can be useful if writing to memory is an expensive operation.

