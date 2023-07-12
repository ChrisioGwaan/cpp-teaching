#include <iostream>
#include <string>

template <typename T> T maxStuff(T a, T b) {
    return a > b ? a : b;
}

int main(void) {
    std::cout << maxStuff<int> (1, 2) << std::endl;

    std::cout << maxStuff<double> (1.5, 2.5) << std::endl;

    std::cout << maxStuff<char> ('a', 'b') << std::endl;

    std::cout << maxStuff<std::string> ("ac", "ad") << std::endl;

    return EXIT_SUCCESS;
}