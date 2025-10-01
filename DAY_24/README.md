
-----

### 📝 Day 24: Linked List Insertion Notes

#### \#\# The Art of Pointer Manipulation

Inserting a node into a linked list is like adding a new stop on our "treasure hunt." It doesn't involve moving any existing data; it's purely an exercise in re-wiring the `next` pointers (the "clues") to include the new node in the chain.

#### \#\# 1. Inserting at the Head (Prepending)

This is the fastest and simplest way to add a node to a list.

**The Recipe:**

1.  Create your new node.
2.  Set the `next` pointer of your new node to point to the current `head` of the list.
3.  Update the list's `head` pointer to point to your new node.

This works perfectly even if the list is empty. If `head` is `nullptr`, the new node's `next` pointer becomes `nullptr`, and the new node becomes the new `head`, which is the correct result for a list with one element.

  * **Complexity: `O(1)`** - It takes the same amount of time regardless of the list's size.

#### \#\# 2. Inserting at the Tail (Appending)

To add a node to the end, you must first find the current last node.

**The Recipe:**

1.  Create your new node.
2.  **Edge Case:** If the list is empty (`head == nullptr`), the new node is now the head, so set `head = newNode` and you're done.
3.  If the list is not empty, start at the `head` with a temporary pointer (`current`).
4.  Traverse the list until you find the last node. The last node is the one whose `next` pointer is `nullptr` (`while (current->next != nullptr)`).
5.  Once you've found the last node, set its `next` pointer to point to your new node.

<!-- end list -->

  * **Complexity: `O(n)`** - In the worst case, you have to visit every node to find the end.
    *(Note: This can be optimized to `O(1)` if you maintain a separate `tail` pointer that always points to the last node.)*

-----
