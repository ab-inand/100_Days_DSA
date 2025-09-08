//Print the first N Fibonacci numbers


#include <iostream>

int main() {
    int n;
    int t1 = 0, t2 = 1, nextTerm = 0;

    std::cout << "Enter the number of Fibonacci terms to print: ";
    std::cin >> n;

    std::cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            std::cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            std::cout << t2 << " ";
            continue;
        }
        // Generate the next term.
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        std::cout << nextTerm << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
