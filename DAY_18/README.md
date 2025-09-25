
-----

### 📝 Day 18: Introduction to Hashing Notes

#### \#\# What is Hashing? The "Magical Library" Analogy

**Hashing** is a technique used to map data of any size (like a string, a person's name, or a large object) to a fixed-size value, typically an integer. This integer is then used as an index in an array to store and retrieve the data. The goal is to achieve near-instantaneous `O(1)` average time for lookups, insertions, and deletions.

**Analogy: A Magical Library** 📚
Imagine a special library where you don't have to search for books.

1.  **The Librarian (Hash Function):** You give the book's title (the **key**) to a magical librarian. The librarian performs a special, super-fast calculation on the title.
2.  **The Shelf Number (Hash Code):** This calculation instantly produces a specific shelf number (the **hash code** or **array index**). This is the only shelf where that book can be.
3.  **The Library (Hash Table):** The entire library, with its numbered shelves, is the **hash table** (the underlying array).

To find the book later, you just give the title to the librarian. They perform the exact same calculation, give you the shelf number, and you go directly to the book. There's no searching from shelf to shelf\!

#### \#\# The Core Components of Hashing

1.  **Hash Function:** A function that takes a key and computes a hash code. A good hash function is fast and distributes keys evenly.
2.  **Hash Table:** The underlying data structure, which is almost always a simple array.
3.  **Collisions:** The problem that occurs when the hash function generates the same index for two or more different keys. (In our analogy, the librarian assigns two different books to the same shelf). Collisions are unavoidable, so we need strategies to handle them.

#### \#\# Collision Handling Strategies

How do we store multiple items that map to the same slot?

**1. Separate Chaining (The "Drawer on the Shelf" Method)**
This is the most common and often simplest approach. Each slot in the hash table array doesn't just store one item; instead, it holds a pointer to another data structure, usually a **linked list**.

  * **Analogy:** When the librarian assigns two books to Shelf \#7, they don't have a problem. Shelf \#7 has a drawer. The librarian simply opens the drawer and puts both books inside. To find a specific book, they go to the shelf and do a quick linear search through the 2-3 books in that drawer.

**2. Open Addressing (The "Find the Next Empty Shelf" Method)**
In this strategy, if a slot is already occupied, we find another empty slot within the table itself to place the item. This is called "probing."

  * **Analogy:** The librarian goes to put a book on Shelf \#7, but it's full. So, they follow a rule: "Just try the next shelf, \#8." If \#8 is full, they try \#9, and so on, until they find an empty one. This simple "try the next one" rule is called **Linear Probing**. (Other more complex rules exist, like Quadratic Probing and Double Hashing, to avoid clustering issues).

-----
