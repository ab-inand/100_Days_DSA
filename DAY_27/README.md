
-----

### 📝 Day 27: Doubly Linked Lists Notes

#### \#\# What is a Doubly Linked List?

A doubly linked list is an enhancement of the singly linked list. In addition to the `next` pointer that points to the next node in the sequence, each node also contains a **`prev`** pointer that points to the **previous** node.

**Analogy: A Train with Connecting Cars** 🚆

  * A **singly linked list** is like a conga line. Each person only has a hand on the shoulder of the person in front of them; they don't know who is behind them.
  * A **doubly linked list** is like a train. Each train car (`Node`) is coupled to the car in front of it (`next`) **and** the car behind it (`prev`). This allows you to walk from the front of the train to the back, or from the back to the front, with equal ease.

The `Node` structure is updated to include this new pointer:

```cpp
struct Node {
    int data;
    Node* next;
    Node* prev; // The new addition!
};
```

#### \#\# Advantages and Disadvantages

**Advantages:**

1.  **Bidirectional Traversal:** You can easily traverse the list forwards and backwards.
2.  **Efficient Deletion:** If you have a pointer to a specific node you want to delete, the operation is `O(1)`. You don't need to traverse the list to find the `previous` node because the node itself already has that information (`node->prev`).

**Disadvantages:**

1.  **Extra Memory:** Each node requires extra memory to store the `prev` pointer.
2.  **More Complex Operations:** Insertions and deletions are slightly more complex because you have to manage an extra set of pointers (`prev` in addition to `next`), which means there are more places to make a mistake.

#### \#\# Insertion at the Head (The Recipe)

Inserting a node at the beginning of a doubly linked list requires re-wiring four pointers.

**The Recipe (for a non-empty list):**

1.  Create the new node.
2.  Set the new node's `next` pointer to the current `head`.
3.  Set the current `head`'s `prev` pointer to point back to the new node.
4.  Update the list's `head` pointer to now be the new node.

-----


