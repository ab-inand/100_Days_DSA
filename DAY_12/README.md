-----

### 📝 Day 12: Practice with Recursion Notes

#### \#\# Thinking Recursively: The Leap of Faith

The trick to solving problems recursively is to stop thinking about the entire sequence of calls. Instead, you take a "leap of faith." You only need to think about two things:

1.  **The Base Case:** What is the simplest possible input that I can solve directly? (e.g., an empty array, n=0, etc.).
2.  **The Recursive Step:** Can I solve the current problem if I **assume** my function already works perfectly for a slightly smaller version of the problem?

**Analogy: Climbing a Ladder** 🪜
You don't need a grand plan to climb a 100-rung ladder. You just need to know:

1.  How to climb **one** rung (the recursive step).
2.  When to stop (the base case: you've reached the top).

You take one step and then trust that the same process will get you the rest of the way. For a function `isSorted(array)`, you just check the first two elements and then trust that `isSorted(rest_of_the_array)` will give you the correct answer for the remainder.

#### \#\# Tracing a Recursive Function (Example: `factorial(3)`)

Understanding the **call stack** is key to visualizing recursion. Let's trace `factorial(3)`.

1.  `main()` calls `factorial(3)`. The call stack has `main()`, then `factorial(3)` on top.
      * `factorial(3)` can't solve, so it calls `factorial(2)`.
2.  `factorial(2)` is pushed on top of the stack.
      * `factorial(2)` can't solve, so it calls `factorial(1)`.
3.  `factorial(1)` is pushed on top.
      * `factorial(1)` can't solve, so it calls `factorial(0)`.
4.  `factorial(0)` is pushed on top.
      * **Base Case Hit\!** `factorial(0)` returns `1`. It is popped off the stack.
5.  Control returns to `factorial(1)`. It calculates `return 1 * factorial(0)` which is `1 * 1 = 1`. It returns `1` and is popped off.
6.  Control returns to `factorial(2)`. It calculates `return 2 * factorial(1)` which is `2 * 1 = 2`. It returns `2` and is popped off.
7.  Control returns to `factorial(3)`. It calculates `return 3 * factorial(2)` which is `3 * 2 = 6`. It returns `6` and is popped off.
8.  Control returns to `main()`, which receives the final value of `6`.

-----
