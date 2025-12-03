#include <iostream>
#include "../include/utils.h"
#include<limits>

int main() {
    std::cout << "=== C++ Project Demo ===" << std::endl;
    printMessage("Welcome to C++ Project!");
    
    std::cout << "\n--- Basic Interaction ---" << std::endl;
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    
    std::cout << "\n--- Mathematical calculation ---" << std::endl;
    int a, b;
    std::cout << "Please enter two integers (separated by a space): ";
    std::cin >> a >> b;
    
    int sum = a + b;
    std::cout << a << " + " << b << " = " << sum << std::endl;

     if (!(std::cin >> a >> b)) {
        std::cout << "Input error! Please enter a valid integer." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
        int sum = a + b;
        std::cout << a << " + " << b << " = " << sum << std::endl;
    }
    return 0;
}