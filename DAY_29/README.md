
-----

### 📝 Day 29: Week 4 Review & `std::stack` Notes

#### \#\# Week 4 Recap: Linear Data Structures

This week was all about moving from the contiguous memory of arrays to more flexible, pointer-based structures.

  * **Linked Lists (Singly & Doubly):** You learned how to build data structures from scratch using `Node`s. The key takeaway is the trade-off: you lose `O(1)` index-based access but gain `O(1)` insertion and deletion (if you have a pointer to the right place). Doubly linked lists add the flexibility of bidirectional traversal at the cost of extra memory.
  * **Stacks:** You explored the LIFO (Last-In, First-Out) principle and even built your own stack using a `std::vector`. This demonstrated the concept of an **Abstract Data Type (ADT)**, where the behavior is more important than the underlying implementation.

#### \#\# The "Official" Stack: `std::stack`

After building your own stack, it's time to use the official STL version. To use it, you `#include <stack>`.

`std::stack` is not a standalone container; it's a **container adapter**.

**Analogy: A Car's Dashboard** 🚗
You don't need to know exactly how a car's engine works to drive it. You use the dashboard—the steering wheel, pedals, and gear stick—which provides a simple interface to the complex machinery underneath.

`std::stack` is that dashboard. It provides a strict LIFO interface (`push`, `pop`, `top`) while using a more flexible container (like `std::vector` or, by default, `std::deque`) as the "engine." It **adapts** a sequence container to behave only like a stack.

**Common `std::stack` Operations:**
The methods are nearly identical to the ones you implemented:

  * `push(value)`: Adds an element to the top.
  * `pop()`: Removes the top element.
  * `top()`: Accesses the top element.
  * `empty()`: Returns `true` if the stack is empty.
  * `size()`: Returns the number of elements.

#### \#\# The Problem: Valid Parentheses

This is a classic problem that perfectly illustrates the power of a stack.

**Problem Statement:** Given a string `s` containing just the characters `(`, `)`, `{`, `}`, `[` and `]`, determine if the input string is valid. A string is valid if:

1.  Open brackets must be closed by the same type of brackets.
2.  Open brackets must be closed in the correct order.

**Example:** `"()[]{}"` is valid. `"(]"` is invalid. `"{[]}"` is valid.

**Stack-based Logic:**
The LIFO nature of a stack is exactly what we need to check this "last-opened must be first-closed" rule.

1.  Iterate through the string, character by character.
2.  If you see an **opening** bracket (`(`, `{`, `[`), `push` it onto the stack. You are making a "promise" to close it later.
3.  If you see a **closing** bracket (`)`, `}`, `]`), check the top of the stack.
      * If the stack is empty, there's no matching opening bracket, so the string is invalid.
      * If the bracket at the top of the stack is the corresponding opening bracket, then the promise is fulfilled. `pop` the stack.
      * If it's the *wrong* opening bracket, the string is invalid.
4.  After the loop, if the stack is **empty**, all promises were fulfilled, and the string is valid. If it's **not empty**, there are unclosed opening brackets, and the string is invalid.

-----
