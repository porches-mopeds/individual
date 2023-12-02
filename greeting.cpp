// Implementation of greeting functions
#include <iostream>
#include "greeting.h" // Include the header file

void greet(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

void farewell(const std::string& name) {
    std::cout << "Goodbye, " << name << "!" << std::endl;
}
