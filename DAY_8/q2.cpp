//Reverse a String In-Place

// Problem: Write a function that takes a string as input and reverses it in-place using the two-pointer technique. "In-place" means you should modify the original string directly without creating a new one.

// Hint: This uses the same logic as reversing an array.




#include <iostream>
#include <string>
#include <utility> // For std::swap

// By including this line, we no longer need to write std::cout, std::string, etc.
using namespace std;

// The function takes the string by reference (&) to modify the original.
void reverseString(string &s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Swap the characters at the left and right pointers
        swap(s[left], s[right]);

        // Move the pointers towards the center
        left++;
        right--;
    }
}

int main() {
    string message = "hello";
    
    cout << "Original string: " << message << endl;
    
    reverseString(message);
    
    cout << "Reversed string: " << message << endl;
    
    return 0;
}
