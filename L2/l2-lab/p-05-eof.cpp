#include <iostream>

int main(void) {

    int number1;

    std::cout << "Please enter a number: ";
    std::cin >> number1;

    if (std::cin.eof()) {
        std::cout << "EOF is triggered" << std::endl;
    } else {
        std::cout << "Number: " << number1 << std::endl;
    }

    return EXIT_SUCCESS;
}