/*

Write a program to lowercase a string using pointer.

*/

#include <iostream>

using std::cout;

void toLower(char* str);

int main(void) {
    char str[] = "Hello World!";

    cout << "Before: " << str << '\n';
    toLower(str);
    cout << "After: " << str << '\n';

    return EXIT_SUCCESS;
}

void toLower(char* str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str += 32;
        }
        ++str;
    }
}