//Count Vowels in a String



#include <iostream>
#include <string>

int main() {
    std::string text = "Learning C++ is awesome!";
    int vowelCount = 0;

    // Loop through each character in the string
    for (char ch : text) {
        // Convert character to lowercase for easier comparison
        char lower_ch = tolower(ch);
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            vowelCount++;
        }
    }

    std::cout << "The string has " << vowelCount << " vowels." << std::endl;
    return 0;
}
