//Declare and Print Pointer Values




#include <iostream>

int main() {
    int myVar = 42;
    int* myPtr = &myVar; // Pointer holds the address of myVar

    std::cout << "--- Using the Variable ---" << std::endl;
    std::cout << "Value of myVar: " << myVar << std::endl;
    std::cout << "Address of myVar: " << &myVar << std::endl;

    std::cout << "\n--- Using the Pointer ---" << std::endl;
    std::cout << "Value of myPtr (the address it holds): " << myPtr << std::endl;
    std::cout << "Value at the address myPtr points to: " << *myPtr << std::endl;
    
    return 0;
}
