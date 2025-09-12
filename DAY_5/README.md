### 📝 Day 5: Searching Algorithms Notes

-----

#### \#\# Part 1: Linear Search Algorithm

Linear Search is the most straightforward searching algorithm. It sequentially checks each element of a list until a match is found or the whole list has been searched.

**Analogy:** Imagine looking for a specific book on a messy, unsorted bookshelf. You have no choice but to start at one end and check every single book, one by one, until you find it or run out of books.

**How It Works:**

1.  Start at the first element (index 0).
2.  Compare the current element with the target value.
3.  If they match, return the current index.
4.  If they don't match, move to the next element.
5.  If you reach the end of the array without a match, the element is not present.

**Complexity Analysis:**

  * **Time Complexity: `O(n)`**
    In the worst case (the element is at the end or not present), you have to look at all `n` elements. The runtime grows linearly with the size of the array.
  * **Space Complexity: `O(1)`**
    It requires no extra memory, regardless of the array's size.

-----

#### \#\# Part 2: Binary Search Algorithm

Binary Search is a much faster and more efficient algorithm, but it comes with one crucial prerequisite: **the array must be sorted.** It works by repeatedly dividing the search interval in half.

**Analogy:** Now imagine looking for a name in a phone book (which is sorted alphabetically). You don't start at the first page. You open to the middle, see if the name you want is before or after that page, and instantly eliminate half the book. You repeat this process on the remaining half.

**How It Works (Iterative Approach):**

1.  Set two pointers: `low` at the beginning (index 0) and `high` at the end (index `size - 1`).
2.  While `low` is less than or equal to `high`, repeat the following:
3.  Calculate the middle index: `mid = low + (high - low) / 2;` (This avoids potential overflow).
4.  Compare the element at `mid` with the target:
      * If `arr[mid]` is equal to the target, you've found it\!
      * If the target is **less than** `arr[mid]`, it must be in the left half, so update `high = mid - 1`.
      * If the target is **greater than** `arr[mid]`, it must be in the right half, so update `low = mid + 1`.
5.  If the loop finishes (`low` becomes greater than `high`), the element is not in the array.

**Complexity Analysis:**

  * **Time Complexity: `O(log n)`**
    With each comparison, you cut the search space in half. This is incredibly efficient. For an array with a million elements, binary search takes at most 20 comparisons, while linear search could take a million.
  * **Space Complexity: `O(1)`**
    The iterative version requires no extra memory that scales with the input size.

