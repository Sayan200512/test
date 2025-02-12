//! Write a C++ program to implement exception handeling.
#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    try {
        int result = divide(x, y);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
