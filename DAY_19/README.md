
-----

### 📝 Day 19: C++ STL: `unordered_map` Notes

#### \#\# Putting Hashing Theory into Practice

Yesterday, we learned the theory behind hash tables. `std::unordered_map` is the C++ STL's ready-to-use, highly optimized implementation of a hash table. It allows you to store and retrieve data in **key-value pairs** with incredible speed.

**Analogy: A Dictionary** 📖
An `unordered_map` is like a dictionary. You look up a unique **key** (a word) to instantly find its corresponding **value** (the definition). You don't have to scan the dictionary from A-Z; the key tells you exactly where to go. This is what provides the `O(1)` average time performance.

To use `unordered_map`, you must `#include <unordered_map>`.

#### \#\# Common `unordered_map` Operations

  * **Declaration:** `unordered_map<KeyType, ValueType> myMap;`

    ```cpp
    // A map to store student ages, where the key is a string (name)
    // and the value is an int (age).
    unordered_map<string, int> studentAges;
    ```

  * **Insertion & Modification (`[]`):** The square bracket operator is the easiest way to insert or update elements.

    ```cpp
    studentAges["Alice"] = 21; // Inserts the new key "Alice" with value 21.
    studentAges["Bob"] = 22;
    studentAges["Alice"] = 22; // Updates the value for the existing key "Alice".
    ```

    A very common and powerful idiom is `myMap[key]++;` for counting, as we'll see below.

  * **Access (`[]`):** You can also access values using the key.

    ```cpp
    cout << studentAges["Bob"]; // Outputs 22
    ```

    **Warning:** If you try to access a key that doesn't exist using `[]`, the map will automatically create that key and give it a default-initialized value (e.g., `0` for `int`, `""` for `string`)\!

  * **Checking for a Key:** To safely check if a key exists without accidentally creating it, use `.count()` or `.find()`.

    ```cpp
    // .count() is simple and readable. It returns 1 if the key exists, 0 otherwise.
    if (studentAges.count("Charlie")) {
        cout << "Charlie exists!" << endl;
    } else {
        cout << "Charlie does not exist." << endl;
    }
    ```

  * **Deletion (`.erase()`):**

    ```cpp
    studentAges.erase("Bob"); // Removes the key-value pair for "Bob".
    ```

  * **Traversal:** The easiest way to loop through a map is with a range-based for loop. Each element in the map is a `std::pair`.

    ```cpp
    for (const auto& pair : studentAges) {
        cout << "Name: " << pair.first << ", Age: " << pair.second << endl;
    }
    ```

-----
