#include <iostream>

typedef int Number;

int main(void) {
    Number card1;

    std::cout << "Please enter a number of the first card: ";
    std::cin >> card1;

    std::cout << std::endl;

    std::cout << "The value of the first card is " << card1 << "." << std::endl;

    return EXIT_SUCCESS;
}