//Swap Two Numbers Using Pointers


#include <iostream>
#include <utility> // For std::swap

// The function receives the addresses of num1 and num2
void swap_by_pointer(int* ptrA, int* ptrB) {
    int temp = *ptrA;  // Get the value at address ptrA
    *ptrA = *ptrB;     // Set the value at address ptrA to the value at ptrB
    *ptrB = temp;      // Set the value at address ptrB to the temp value
}

int main() {
    int num1 = 10;
    int num2 = 20;

    std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // We pass the memory addresses of num1 and num2 to the function
    swap_by_pointer(&num1, &num2);

    std::cout << "After swap:  num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
