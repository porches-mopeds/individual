#include <iostream>
#include "greeting.h" // Include the header file

int main() {
    std::cout << "This is the main file." << std::endl;

    // Call functions from another file
    greet("Alice");
    farewell("Bob");

    return 0;
}
