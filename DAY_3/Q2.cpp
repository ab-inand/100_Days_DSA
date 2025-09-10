//Check if a String is a Palindrome


#include <iostream>
#include <string>
#include <algorithm> // For std::equal

bool isPalindrome(const std::string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        // Skip non-alphanumeric characters from the start
        while (start < end && !isalnum(str[start])) {
            start++;
        }
        // Skip non-alphanumeric characters from the end
        while (start < end && !isalnum(str[end])) {
            end--;
        }

        // Compare characters (case-insensitive)
        if (tolower(str[start]) != tolower(str[end])) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }
    return true; // Is a palindrome
}

int main() {
    std::string testStr = "A man, a plan, a canal: Panama";
    if (isPalindrome(testStr)) {
        std::cout << "'" << testStr << "' is a palindrome." << std::endl;
    } else {
        std::cout << "'" << testStr << "' is not a palindrome." << std::endl;
    }
    return 0;
}
