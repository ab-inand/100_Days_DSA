

#### **Task:** Think about how you would design a hash function for a string. What makes a good hash function?

This is a classic thought experiment that reveals the challenges of hashing.

**1. Designing a String Hash Function (A Thought Process):**

  * **Attempt 1 (Bad): Use the string's length.** `hash("cat") = 3`, `hash("dog") = 3`. This would cause a huge number of collisions for all strings of the same length.
  * **Attempt 2 (Better, but still bad): Use the ASCII value of the first character.** `hash("Apple")` and `hash("Avocado")` would collide. Not very distributive.
  * **Attempt 3 (Getting Warmer): Sum the ASCII values of all characters.** `hash("cat")` would be the sum of the ASCII values for 'c', 'a', and 't'. This is better because all characters are involved. However, anagrams like "cat" and "act" would produce the same hash, causing a collision.
  * **A Good Approach (Polynomial Hashing):** This is a widely used technique. You treat the string as a number in a large base (`p`, usually a prime number like 31), where the "digits" are the character codes.
    `hash("cat") = (code('c') * p²) + (code('a') * p¹) + (code('t') * p⁰)`
    This calculation produces a unique large number for "cat" and "act" because the *position* of each character matters. This large number is then taken modulo the table size (`% table_size`) to get a valid index.

**2. What Makes a Good Hash Function?**
A good hash function should have these properties:

  * **Deterministic:** The same key must always produce the same hash value.
  * **Fast to Compute:** It should be very efficient.
  * **Uniform Distribution:** It should spread keys evenly across all available slots in the hash table to minimize collisions.
  * **Avalanche Effect:** A tiny change in the input key (e.g., changing one bit) should produce a large, unpredictable change in the output hash.

