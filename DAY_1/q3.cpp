//Function to check if a number is prime


#include <iostream>
#include <cmath> // For sqrt() function

// Function to check if a number is prime.
// It returns true if prime, false otherwise.
bool isPrime(int n) {
    // Prime numbers are greater than 1.
    if (n <= 1) {
        return false;
    }

    // Check for factors from 2 up to the square root of n.
    // If we find a factor, the number is not prime.
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; // Found a factor, so not prime.
        }
    }

    // If no factors were found, the number is prime.
    return true;
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
