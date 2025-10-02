
-----

### 📝 Day 25: Linked List Deletion Notes

#### \#\# The Art of Unlinking and Deallocating

Deleting a node is a precise two-step process:

1.  **Re-wire Pointers:** You first adjust the `next` pointers of the surrounding nodes to "bypass" or "unlink" the node you want to remove from the chain.
2.  **Deallocate Memory:** Once the node is safely unlinked, you must free its memory using the `delete` keyword. Forgetting this step results in a **memory leak**.

A crucial pattern emerges: to delete a node, you almost always need a pointer to the node **before** it (`previous`) so you can update its `next` pointer.

#### \#\# 1. Deleting the Head Node

This is the simplest case because you don't need a `previous` pointer.

**The Recipe:**

1.  **Edge Case:** If the list is empty (`head == nullptr`), there is nothing to do.
2.  Create a temporary pointer to hold the current `head` (e.g., `Node* temp = head;`).
3.  Move the list's `head` pointer to the next node (`head = head->next;`). The list now officially starts at the second element.
4.  Deallocate the memory of the original head node using the temporary pointer (`delete temp;`).

<!-- end list -->

  * **Complexity: `O(1)`**

#### \#\# 2. Deleting a Node by a Given Key

This is the general case for deleting a node from the middle or the end of the list.

**The Recipe:**

1.  **Edge Case (Target is the Head):** Check if the `head` node is the one to be deleted. If so, use the "Delete the Head" logic above and you're done.
2.  If the target is not the head, start traversing the list to find the node. You'll need two pointers: `current` (to find the target node) and `previous` (to track the node before `current`).
3.  Loop until you find the node (`current->data == key`) or reach the end of the list. In each step of the loop, advance both pointers: `previous = current;`, `current = current->next;`.
4.  If you reach the end (`current == nullptr`), the key was not found, so you can stop.
5.  If the key was found, perform the bypass: `previous->next = current->next;`. This links the previous node directly to the node after the current one.
6.  Finally, deallocate the memory: `delete current;`.

<!-- end list -->

  * **Complexity: `O(n)`** - You may need to traverse the entire list to find the key.
