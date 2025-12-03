#include <iostream>

int main() {
    std::cout << "--- Exercise 1: The Static Contract ---" << std::endl;

    int x = 5;
    std::cout << "x is: " << x << std::endl;

    // x = "hello"; // illegal in C++
    
    std::cout << "Now x is: " << x << std::endl;

    // Task 3
    double pi = 3.14159;
    char initial = 'A';
    bool is_cpp_fun = true;

    // Task 4
    std::cout << "Pi is: " << pi << std::endl;
    std::cout << "Initial is: " << initial << std::endl;
    std::cout << "Is C++ fun? " << is_cpp_fun << std::endl;
    
    std::cout << "---------------------------------------" << std::endl;
    return 0;
}
