### 📝 Day 7: Insertion Sort Notes

**Insertion Sort** is a simple, in-place sorting algorithm that builds the final sorted array one item at a time. It's particularly efficient for small datasets or datasets that are already substantially sorted.

**\#\# The "Sorting Playing Cards" Analogy**
This is the best way to understand Insertion Sort. Imagine you are dealt playing cards one by one.

1.  You hold your already-sorted cards in your left hand. The very first card you get is, by default, a sorted hand of one.
2.  When the dealer gives you a new card (with your right hand), you look at it.
3.  You then scan the cards in your sorted left hand from right to left, find the correct position for the new card, and **insert** it there, shifting the other cards over to make space.
4.  You repeat this process for every card you're dealt.

The algorithm works the exact same way: it treats the beginning of the array as the "sorted hand" and iteratively inserts the remaining elements into their proper place.

**\#\# How It Works**
The algorithm divides the array into two parts: a sorted sub-array at the beginning and an unsorted part containing the rest.

1.  Start with the second element (at index 1), as the first element is already a "sorted" sub-array of size one.
2.  Select this element and store it in a `key` variable.
3.  Compare the `key` with the elements to its left (the sorted sub-array).
4.  If an element in the sorted part is greater than the `key`, shift that element one position to the right to make space.
5.  Continue this shifting process until you find an element that is smaller than or equal to the `key`, or you reach the beginning of the array.
6.  Insert the `key` into the newly created "gap".
7.  Move to the next element in the unsorted portion and repeat.

**\#\# Complexity Analysis**

  * **Time Complexity:**
      * **Worst Case: `O(n²)`** — This occurs when the array is sorted in reverse order. For each element, you have to shift all the elements in the sorted portion before it.
      * **Best Case: `O(n)`** — This occurs when the array is already sorted. The algorithm just has to iterate through the array once, making a single comparison for each element to confirm it's in the right place. This makes it much faster than Bubble or Selection sort for nearly-sorted data.
  * **Space Complexity: `O(1)`**
    It's an in-place sorting algorithm that requires only a single extra variable (`key`) for storage.

