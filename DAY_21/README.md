
-----

### 📝 Day 21: C++ STL: `unordered_set` Notes

#### \#\# What is an `unordered_set`?

An **`unordered_set`** is an STL container that stores a collection of **unique** elements in no particular order. It is implemented using a hash table, just like `unordered_map`, which gives it the same incredible average time complexity for its main operations.

**Analogy: A VIP Guest List** 🎟️

  * If `unordered_map` is a **dictionary** (you look up a key to get its value), then `unordered_set` is a **VIP guest list**.
  * You don't need to store any extra information about the guests (a value); you just need to perform three tasks instantly:
    1.  Add a new person to the list (`insert`).
    2.  Remove a person from the list (`erase`).
    3.  Check if a person is on the list (`count` or `find`).
  * Crucially, you can't add the same person to the list twice; the set only stores unique entries.

To use it, you must `#include <unordered_set>`.

#### \#\# Common `unordered_set` Operations

The operations are very similar to `unordered_map`, but simpler since there are no values to worry about.

  * **Declaration:** `unordered_set<Type> mySet;`
    ```cpp
    unordered_set<string> uniqueUsernames;
    ```
  * **Insertion (`.insert()`):**
    ```cpp
    uniqueUsernames.insert("alex_dev");
    uniqueUsernames.insert("beta_coder");
    uniqueUsernames.insert("alex_dev"); // This does nothing, as the key is already in the set.
    ```
  * **Checking for Existence (`.count()`):** This is the primary use case of a set. It returns `1` if the element exists and `0` if it does not.
    ```cpp
    if (uniqueUsernames.count("gamma_user")) {
        cout << "Username is already taken." << endl;
    } else {
        cout << "Username is available." << endl;
    }
    ```
  * **Deletion (`.erase()`):**
    ```cpp
    uniqueUsernames.erase("beta_coder"); // Removes the element.
    ```
  * **Traversal:** A range-based for loop is the easiest way to iterate through all the elements. Note that the order is not guaranteed.
    ```cpp
    cout << "All unique usernames:" << endl;
    for (const auto& username : uniqueUsernames) {
        cout << username << endl;
    }
    ```

-----
