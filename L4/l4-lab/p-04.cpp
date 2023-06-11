#include <iostream>

int factorial(int n);

int main(void) {
    int n = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "The factorial of " << n << " is " << factorial(n) << std::endl;

    return EXIT_SUCCESS;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}