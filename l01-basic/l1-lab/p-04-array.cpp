#include <iostream>
#include <string>

int main(void) {

    // Array
    std::cout << "\n* Array" << std::endl;

    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << std::endl;
    }

    // Array of strings
    std::cout << "\n* Array of strings" << std::endl;

    std::string arr_s[10];

    for (int i = 0; i < 10; i++) {
        arr_s[i] = "Hello World!";
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr_s[i] << std::endl;
    }

    // 2D array using nested for loop
    std::cout << "\n* 2D array" << std::endl;

    int arr_2d[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr_2d[i][j] = i * j;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << arr_2d[i][j] << std::endl;
        }
    }

    return EXIT_SUCCESS;
}