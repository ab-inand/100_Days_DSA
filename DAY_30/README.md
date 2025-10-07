
-----

### 📝 Day 30: Queues (Conceptual & Array Implementation) Notes

#### \#\# What is a Queue?

A **Queue** is an Abstract Data Type (ADT) that operates on the **FIFO** principle: **First-In, First-Out**. This means the first element added to the queue will be the first element to be removed.

**Analogy: A Checkout Line at a Store** 🛒
The best analogy for a queue is a line of people waiting for a checkout counter.

  * **Enqueue:** A new person arrives and joins the **back** of the line.
  * **Dequeue:** The person at the **front** of the line is served next and leaves the line.
  * **Front/Peek:** You can only see who is at the very front of the line, waiting to be served.
  * **isEmpty:** You can see if there's anyone in the line.

The first person to get in line is the first person to get out. This is FIFO.

#### \#\# Core Queue Operations

1.  **`enqueue(value)`** (sometimes called `push`): Adds an element to the back (rear/tail) of the queue.
2.  **`dequeue()`** (sometimes called `pop`): Removes the element from the front (head) of the queue.
3.  **`front()`** (or `peek()`): Returns a reference to the front element without removing it.
4.  **`isEmpty()`:** Returns `true` if the queue is empty, `false` otherwise.

#### \#\# Implementing with a Circular Array

If we use a simple array and just move a `front` pointer forward when we dequeue, we'll quickly run out of space at the end while wasting all the empty space at the beginning.

A **circular array** solves this by allowing the queue to "wrap around" the end of the array. We use the modulo (`%`) operator to achieve this.

**How it works:**

  * We use a fixed-size array and two indices: `front` and `rear`.
  * `front`: The index of the first element.
  * `rear`: The index of the *next available slot* at the back.
  * **The Wrap-Around:** When we increment an index, we do it like this: `front = (front + 1) % capacity;`. This ensures that after reaching the last index, the next one is `0`.
  * We also need a `size` variable to easily check if the queue is full or empty.

-----
