#include <iostream>
#include <string>

int main(void) {
        
    // For loop
    std::cout << "\n* For loop" << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    // While loop
    std::cout << "\n* While loop" << std::endl;

    int j = 0;
    while (j < 10) {
        std::cout << j << std::endl;
        j++;
    }

    // Do-while loop
    std::cout << "\n* Do-while loop" << std::endl;

    j = 0;
    do {
        std::cout << j << std::endl;
        j++;
    } while (j < 10);

    // String for loop
    std::cout << "\n* String for loop" << std::endl;
    std::string s = "Hello World!";

    for (int i = 0; i < (int)s.length(); i++) {
        std::cout << s[i] << std::endl;
    }


    // Enhanced for loop
    std::cout << "\n* Enhanced for loop" << std::endl;
    std::string s2 = "Hello World!";

    for (char c : s2) {
        std::cout << c << std::endl;
    } 

    return EXIT_SUCCESS;
}
