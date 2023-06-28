/*

Write a program to uppercase a string using pointer.

*/

#include <iostream>

using std::cout;

void toUpper(char* str);

int main(void) {
    char str[] = "Hello World!";

    cout << "Before: " << str << '\n';
    toUpper(str);
    cout << "After: " << str << '\n';

    return EXIT_SUCCESS;
}

void toUpper(char* str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32;
        }
        ++str;
    }
}