Here are your notes and resources for Day 4.

### 📝 Day 4: Review & Complexity Analysis Notes

-----

#### \#\# Part 1: Review of Core Concepts (Days 1-3)

Let's quickly recap the foundational topics we've covered so far.

  * **Day 1 (Fundamentals):** We covered the basic structure of a C++ program, variables (`int`, `double`, etc.), I/O (`cin`/`cout`), conditional logic (`if-else`), loops (`for`/`while`), and functions, including the key difference between **pass-by-value** and **pass-by-reference (`&`)**.
  * **Day 2 (Arrays):** We learned that arrays are fixed-size collections of elements of the same type, stored in **contiguous memory**. We practiced accessing elements using **0-based indexing** and traversing them with loops.
  * **Day 3 (Strings & Pointers):** We explored the dynamic and powerful `std::string` class for text manipulation. We then dove into **pointers**, learning that they are variables that store memory addresses, and practiced using the **address-of (`&`)** and **dereference (`*`)** operators.

-----

#### \#\# Part 2: Introduction to Time & Space Complexity

It’s not enough to write code that works; we also need to write code that is **efficient**. Complexity analysis is how we measure that efficiency.

**What is Algorithmic Complexity?**
It’s a way to describe how the runtime (Time Complexity) or memory usage (Space Complexity) of an algorithm grows as the size of the input (`n`) increases.

Think of it like this: If you need to find a word in a dictionary (`n` = number of words), you don't read every word from the beginning (**linear** approach). Instead, you open to the middle and check, repeatedly halving the search area (**logarithmic** approach). The second method is fundamentally faster for a large dictionary.

**The "Big Three" Asymptotic Notations**
We use these notations to describe the growth rate.

  * **Big O (O):** Describes the **worst-case scenario**. This is the most important one because it gives us an upper bound on performance. "The algorithm will take *at most* this much time."
  * **Big Omega (Ω):** Describes the **best-case scenario**. "The algorithm will take *at least* this much time."
  * **Big Theta (Θ):** Describes the **tight bound** or average-case scenario, used when the best and worst cases have the same growth rate.

**Common Time Complexities**

  * **O(1) — Constant:** The time taken is the same regardless of the input size. Ex: Accessing an array element by its index (`myArray[3]`).
  * **O(log n) — Logarithmic:** The time taken increases very slowly as the input size grows. Usually seen in algorithms that divide the problem in half with each step. Ex: Binary Search.
  * **O(n) — Linear:** The time taken grows directly in proportion to the input size. Ex: Looping through all elements of an array once.
  * **O(n²) — Quadratic:** The time taken grows by the square of the input size. Often seen in algorithms with nested loops. Ex: Comparing every element of a list to every other element.
