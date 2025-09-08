

### C++ Fundamentals: Notes 📝

-----

#### \#\# Basic Program Structure

Every C++ program has a `main` function, which is the entry point where the program execution begins. The basic "Hello, World\!" program looks like this:

```cpp
// This line includes the input/output stream library.
#include <iostream>

// This is the main function where the program starts.
int main() {
    // std::cout sends output to the console.
    // << is the stream insertion operator.
    // std::endl adds a newline character.
    std::cout << "Hello, World!" << std::endl;
    
    // return 0 indicates that the program executed successfully.
    return 0;
}
```

  * `#include <iostream>`: A preprocessor directive that tells the compiler to include the `iostream` file, which contains the code for input and output operations (like `cin` and `cout`).
  * `int main()`: The main function where your program's logic resides.
  * `std::cout`: The standard character output stream, used to print text to the screen. The `std::` prefix means that `cout` is part of the standard namespace.

-----

#### \#\# Variables and Data Types

Variables are named storage locations. You must declare a variable's type before you can use it.

**Common Data Types:**

  * `int`: For whole numbers (e.g., `10`, `-5`, `0`).
  * `double` or `float`: For floating-point (decimal) numbers (e.g., `3.14`, `-0.5`). `double` has more precision.
  * `char`: For single characters (e.g., `'a'`, `'%'`, `'5'`). Note the single quotes.
  * `bool`: For boolean values, which can be either `true` or `false`.
  * `std::string`: For sequences of characters (e.g., `"Hello"`). Requires `#include <string>`.

**Example:**

```cpp
#include <iostream>
#include <string>

int main() {
    int age = 25;
    double price = 19.99;
    char grade = 'A';
    bool isStudent = true;
    std::string name = "Alex";

    std::cout << name << " is " << age << " years old." << std::endl;
    return 0;
}
```

-----

#### \#\# Input/Output (I/O)

We use `std::cout` for output and `std::cin` for input.

  * `std::cout << "Some text";` // Prints text to the console.
  * `std::cin >> variableName;` // Reads input from the keyboard and stores it in a variable.

**Example:**

```cpp
#include <iostream>
#include <string>

int main() {
    int age;
    std::cout << "Please enter your age: ";
    std::cin >> age; // Waits for user input
    std::cout << "You are " << age << " years old." << std::endl;
    return 0;
}
```

-----

#### \#\# Conditional Statements (If-Else)

Conditionals allow your program to make decisions and execute different blocks of code based on whether a condition is `true` or `false`.

**Syntax:**

```cpp
if (condition) {
    // Code to run if condition is true
} else if (another_condition) {
    // Code to run if another_condition is true
} else {
    // Code to run if all previous conditions are false
}
```

**Relational Operators:** `==` (equal to), `!=` (not equal to), `>` (greater than), `<` (less than), `>=` (greater or equal), `<=` (less or equal).

-----

#### \#\# Loops (For and While)

Loops are used to execute a block of code repeatedly.

  * **`for` loop**: Used when you know the number of iterations in advance.

    ```cpp
    for (initialization; condition; update) {
        // Code to repeat
    }
    ```

    **Example (prints numbers 1 to 5):**

    ```cpp
    for (int i = 1; i <= 5; i++) {
        std::cout << i << std::endl;
    }
    ```

  * **`while` loop**: Used when the number of iterations is not known; the loop continues as long as a condition is `true`.

    ```cpp
    while (condition) {
        // Code to repeat
    }
    ```

    **Example (counts down from 3):**

    ```cpp
    int countdown = 3;
    while (countdown > 0) {
        std::cout << countdown << "..." << std::endl;
        countdown--; // Decrement the counter
    }
    ```

-----

#### \#\# Functions

Functions are reusable blocks of code that perform a specific task. They make code more modular and easier to manage.

**Pass-by-Value vs. Pass-by-Reference**

  * **Pass-by-Value (Default)**: A *copy* of the argument's value is passed to the function. Any changes made to the parameter inside the function do **not** affect the original argument.
  * **Pass-by-Reference (`&`)**: The function receives a *reference* (the memory address) to the original argument. Changes made to the parameter inside the function **will** modify the original argument.

**Example:**

```cpp
#include <iostream>

// This function receives a copy of the variable (pass-by-value)
void addFiveValue(int num) {
    num += 5; // Modifies the local copy
    std::cout << "Inside addFiveValue, num is: " << num << std::endl;
}

// This function receives a reference to the original variable (pass-by-reference)
void addFiveReference(int &num) { // Note the ampersand &
    num += 5; // Modifies the original variable
    std::cout << "Inside addFiveReference, num is: " << num << std::endl;
}

int main() {
    int myNum1 = 10;
    std::cout << "Original myNum1: " << myNum1 << std::endl;
    addFiveValue(myNum1);
    std::cout << "After addFiveValue, myNum1 is still: " << myNum1 << std::endl;

    std::cout << "--------------------" << std::endl;

    int myNum2 = 10;
    std::cout << "Original myNum2: " << myNum2 << std::endl;
    addFiveReference(myNum2);
    std::cout << "After addFiveReference, myNum2 is now: " << myNum2 << std::endl;
    
    return 0;
}
```

**Output:**

```
Original myNum1: 10
Inside addFiveValue, num is: 15
After addFiveValue, myNum1 is still: 10
--------------------
Original myNum2: 10
Inside addFiveReference, num is: 15
After addFiveReference, myNum2 is now: 15
```

