// Alphanzo Moore

//CIS-5 Online (or Hybrid)

// 9/02/23

// Lab 2C: Alphanzo Moore - Assignment 2C: Full Name

#include <iostream>
#include <string>

int main() {
    // Declare a string variable for the full name
    std::string fullName;

    // Prompt the user to input their full name (including first and last names)
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    // Display the welcome message
    std::cout << "Welcome to C++ programming, " << fullName << ". "
              << "I applaud your choice to learn to code and increase your technical skills." << std::endl;

    return 0;
}
