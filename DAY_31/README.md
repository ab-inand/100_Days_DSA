
-----

### 📝 Day 31: C++ STL: `queue` & `deque` Notes

#### \#\# The "Official" Queue: `std::queue`

Just like `std::stack`, the C++ Standard Template Library provides a ready-to-use `std::queue`. To use it, you `#include <queue>`.

`std::queue` is also a **container adapter**. It takes an underlying container and provides a strict FIFO (First-In, First-Out) interface. This means it only exposes the essential queue operations, hiding other functionality of the underlying container.

**Core `std::queue` Operations:**

  * **`push(value)`:** Adds an element to the back (enqueues).
  * **`pop()`:** Removes the element from the front (dequeues).
  * **`front()`:** Accesses the front element.
  * **`back()`:** Accesses the back element.
  * **`empty()`:** Checks if the queue is empty.
  * **`size()`:** Returns the number of elements.

#### \#\# The Engine Underneath: `std::deque` (Double-Ended Queue)

By default, the "engine" that `std::queue` uses is `std::deque` (pronounced "deck"). A `deque` is a **double-ended queue**.

**Analogy: A Super-Flexible Line** 🚶‍♀️↔️🚶‍♂️
Imagine a line of people where new people can join at the **back** (like a normal queue) but also at the **front**. Similarly, people can leave from the **front** (like a normal queue) but also from the **back**. It's a dynamic, two-way street.

A `deque` provides `O(1)` average time complexity for insertions and deletions at **both ends**.

  * `push_back()`: Add to end.
  * `pop_back()`: Remove from end.
  * `push_front()`: Add to beginning.
  * `pop_front()`: Remove from beginning.

It also provides `O(1)` random access with the `[]` operator, just like a `vector`. To use it directly, you `#include <deque>`.

#### \#\# Why `std::queue` Uses `std::deque`

`deque` is the perfect underlying container for `queue` because its operations map perfectly to the queue's needs with maximum efficiency:

  * `std::queue::push()` simply calls `std::deque::push_back()`. (`O(1)`)
  * `std::queue::pop()` simply calls `std::deque::pop_front()`. (`O(1)`)

If `std::vector` were used instead, `pop()` would be an `O(n)` operation because removing an element from the front of a vector requires shifting all other elements down. `std::deque` is specifically designed to avoid this problem.

-----

