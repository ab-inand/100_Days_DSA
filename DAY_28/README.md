
-----

### 📝 Day 28: Stacks (Conceptual & Array Implementation) Notes

#### \#\# What is a Stack?

A **Stack** is an Abstract Data Type (ADT) that operates on the **LIFO** principle: **Last-In, First-Out**. This means the last element added to the stack will be the first element to be removed.

An "Abstract Data Type" means we define the stack by its *behavior* (the rules of how we interact with it), not by its specific underlying implementation (which could be an array, a vector, or a linked list).

**Analogy: A Stack of Plates** 🍽️
The classic analogy is a stack of clean plates in a cafeteria.

  * **Push:** When you add a new plate, you can only place it on the **top** of the stack.
  * **Pop:** When you take a plate, you must take it from the **top**. You can't pull a plate from the middle or bottom.
  * **Top/Peek:** You can look at the top plate to see its pattern, but you don't remove it.
  * **isEmpty:** You can see if there are any plates on the stack.

The last plate you put on is always the first one you take off. This is LIFO.

#### \#\# Core Stack Operations

All stacks support these fundamental operations:

1.  **`push(value)`:** Adds an element to the top of the stack.
2.  **`pop()`:** Removes the element from the top of the stack. (Note: In many implementations, `pop` is a `void` function; it only removes, it doesn't return the value).
3.  **`top()`** (or **`peek()`**): Returns a reference to the top element of the stack without removing it.
4.  **`isEmpty()`:** Returns `true` if the stack contains no elements, and `false` otherwise.

#### \#\# Common Applications

Stacks are used everywhere in computer science:

  * **Function Call Stack:** When a function is called, it's pushed onto the call stack. When it returns, it's popped off. This is how your program keeps track of where to return to.
  * **Undo/Redo Operations:** Each action you take is `push`ed onto a stack. When you hit "Undo," the last action is `pop`ped.
  * **Browser History:** Clicking the "back" button is like popping the last visited page off a stack.
  * **Expression Evaluation:** Compilers use stacks to correctly evaluate mathematical expressions with parentheses and operator precedence.

-----
