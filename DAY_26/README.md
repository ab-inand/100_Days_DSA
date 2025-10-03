
-----

### 📝 Day 26: Classic Linked List Problems Notes

#### \#\# 1. Reversing a Linked List

This is a fundamental linked list operation. The goal is to take a list like `A -> B -> C` and reverse the pointers to get `C -> B -> A`. This is done "in-place" without creating new nodes.

**The Three-Pointer Dance:**
The key to solving this iteratively is to use three pointers to keep track of your state as you traverse the list.

1.  **`prev`**: Points to the previous node. Starts as `nullptr` because the new tail will point to null.
2.  **`curr`**: Points to the current node you are processing. Starts at the `head`.
3.  **`next`**: Temporarily stores the next node in the original list before you break the link.

**The Algorithm:**

1.  Initialize `prev = nullptr` and `curr = head`.
2.  Loop while `curr` is not `nullptr`.
3.  Inside the loop (The "Dance Steps"):
    a. **Save the next node:** `next = curr->next;`
    b. **Reverse the pointer:** `curr->next = prev;` (This is the actual reversal).
    c. **Move forward:** `prev = curr;` and `curr = next;`.
4.  After the loop, `curr` is `nullptr`, and `prev` is pointing at the new head of the list. You must update the original `head` pointer.

#### \#\# 2. Finding the Middle Element (The Tortoise and the Hare)

The challenge is to find the middle node in a **single pass**. The classic solution is a clever algorithm known as the "tortoise and the hare" or the slow and fast pointer approach.

**The Race Analogy:** 🐢🐇
Imagine a tortoise (`slow` pointer) and a hare (`fast` pointer) starting a race at the beginning of the linked list path.

  * The tortoise moves one node at a time.
  * The hare moves two nodes at a time.

By the time the hare reaches the end of the path, where will the tortoise be? Exactly halfway\! This gives us the middle node.

**The Algorithm:**

1.  Initialize two pointers, `slow` and `fast`, both pointing to the `head`.
2.  Loop as long as `fast` is not null AND `fast->next` is not null. (This condition safely handles both even and odd length lists and prevents trying to access `next` on a null pointer).
3.  Inside the loop:
    a. Move `slow` one step: `slow = slow->next;`.
    b. Move `fast` two steps: `fast = fast->next->next;`.
4.  When the loop terminates, `slow` will be pointing to the middle node.

-----
