#include <iostream>

int main(void) {

    /* AND
      | T | F |
    T | T | F |
    F | F | F |
    */

    /* OR
      | T | F |
    T | T | T |
    F | T | F |
    */

    int a = 10;
    int b = 20;

    if (a > b) {
        std::cout << "a is greater than b" << std::endl;
    } else {
        std::cout << "a is not greater than b" << std::endl;
    }

    if (a > b) {
        std::cout << "a is greater than b" << std::endl;
    } else if (a < b) {
        std::cout << "a is less than b" << std::endl;
    } else {
        std::cout << "a is equal to b" << std::endl;
    }

    return EXIT_SUCCESS;
}