
-----

### 📝 Day 14: Quick Sort Notes

#### \#\# The "Divide and Conquer" In-Place Sort

Like Merge Sort, Quick Sort is a **divide and conquer** algorithm. However, its strategy is different. Instead of doing the work during the "combine" step, Quick Sort does its heavy lifting upfront in the "divide" step, which is called **partitioning**. A key advantage is that it sorts **in-place**, meaning it doesn't require the `O(n)` extra space that Merge Sort does.

**Analogy: Sorting a Line of People by a "Pivot" Height** 🚶‍♀️🚶‍♂️

1.  **Pick a Pivot:** You choose one person from an unsorted line and call them the "pivot."
2.  **Partition:** Your goal is to rearrange the line so that everyone shorter than the pivot stands to their left, and everyone taller stands to their right. You walk down the line, moving shorter people to the left side of the room and taller people to the right.
3.  **Place the Pivot:** Once everyone has been moved, you place the pivot person in the one empty spot between the "shorter" group and the "taller" group. The pivot is now in their final, sorted position\!
4.  **Conquer:** You now have two smaller, unsorted groups. You recursively apply the exact same process (pick a pivot, partition, place) to the "shorter" group and then separately to the "taller" group until everyone is sorted.

#### \#\# The Two Key Functions

1.  **`partition(arr, low, high)` - The "Worker"**
    This function is the core of the algorithm. It takes a sub-array and a pivot, then rearranges the sub-array so that all elements smaller than the pivot are on its left, and all elements larger are on its right. The function returns the final index of the pivot. There are many ways to implement this; a common one is the **Lomuto partition scheme**:

      * Choose the last element (`arr[high]`) as the pivot.
      * Keep track of the "wall" or boundary for the smaller elements, let's call it `i`, which starts just before the array (`i = low - 1`).
      * Iterate through the array from `low` to `high - 1` with a pointer `j`.
      * If you find an element `arr[j]` that is smaller than or equal to the pivot, you swap it with the element just after the wall (at `arr[i+1]`) and move the wall one step forward (`i++`).
      * After the loop, the pivot (at `arr[high]`) is swapped with the element at `arr[i+1]`, placing it correctly.

2.  **`quickSort(arr, low, high)` - The Recursive "Manager"**

      * This function orchestrates the sorting process.
      * **Base Case:** If the sub-array has 0 or 1 element (`low >= high`), it's already sorted.
      * **Partition Step:** It calls `partition()` to do the real work of rearranging the array. The `partition()` function returns the final index of the pivot, `pi`.
      * **Conquer Step:** It makes two recursive calls:
        1.  `quickSort()` for the sub-array to the left of the pivot (`low` to `pi - 1`).
        2.  `quickSort()` for the sub-array to the right of the pivot (`pi + 1` to `high`).

#### \#\# Complexity Analysis

  * **Time Complexity:**
      * **Average Case: `O(n log n)`** — This occurs when the pivot consistently divides the array into reasonably balanced sub-arrays.
      * **Worst Case: `O(n²)`** — This occurs when the pivot is consistently the smallest or largest element (e.g., in a pre-sorted array if you always pick the last element as the pivot). This leads to very unbalanced partitions, and the recursion depth becomes `n` instead of `log n`.
  * **Space Complexity: `O(log n)`**
    This is the space used by the recursion call stack in the average case. Because Quick Sort is in-place, it doesn't need the large auxiliary array that Merge Sort does.

-----
