Here are your combined notes and resources for Day 3.

Today's lesson is a big one, covering two crucial C++ topics: the versatile `std::string` and the powerful concept of **pointers**.

### 📝 C++ Strings & Pointers: Notes

-----

#### \#\# Part 1: C++ Strings (`std::string`)

In C++, `std::string` is an object from the Standard Library that represents a sequence of characters. Unlike C-style character arrays, it's dynamic, meaning its size can change automatically. You must include the `<string>` header to use it.

**Common String Operations:**

  * **Declaration:** `std::string greeting = "Hello, World!";`
  * **Concatenation (`+`):** You can combine strings using the `+` operator.
    ```cpp
    std::string firstName = "Alex";
    std::string lastName = "Smith";
    std::string fullName = firstName + " " + lastName; // "Alex Smith"
    ```
  * **Getting Length:** Use `.length()` or `.size()` (they do the same thing).
    ```cpp
    std::cout << fullName.length(); // Outputs 10
    ```
  * **Accessing Characters (`[]`):** Access individual characters just like in an array (0-based indexing).
    ```cpp
    char firstInitial = fullName[0]; // 'A'
    ```
  * **Substrings (`.substr()`):** Extract a portion of the string. The first argument is the starting index, and the second is the length of the substring.
    ```cpp
    std::string part = greeting.substr(7, 5); // "World"
    ```

-----

#### \#\# Part 2: C++ Pointers

A **pointer** is a special type of variable that doesn't hold a value directly, but instead holds the **memory address** of another variable.

Think of it this way: a variable is a box with a value inside. A pointer is a sticky note that tells you the location of that box.

**Key Operators:**

  * **Address-of Operator (`&`):** Gets the memory address of a variable. Think of it as "address of".
  * **Dereference Operator (`*`):** Gets the value stored at the memory address a pointer is holding. Think of it as "value at address".

**Declaration and Use:**

```cpp
#include <iostream>

int main() {
    int score = 95; // A regular variable

    // Declare a pointer that can hold the address of an integer.
    // The * indicates it's a pointer.
    int* scorePtr; 

    // Store the memory address of 'score' in 'scorePtr'.
    scorePtr = &score; 

    std::cout << "Value of score: " << score << std::endl; // 95
    std::cout << "Address of score: " << &score << std::endl; // e.g., 0x61ff08

    std::cout << "Value of scorePtr (the address it holds): " << scorePtr << std::endl; // 0x61ff08
    std::cout << "Value at the address scorePtr points to: " << *scorePtr << std::endl; // 95 (dereferencing)

    return 0;
}
```

  * **Null Pointer (`nullptr`):** A pointer that is intentionally set to point to nothing. It's a safe way to initialize a pointer if you don't have a variable to point to yet.
    `int* myPointer = nullptr;`
