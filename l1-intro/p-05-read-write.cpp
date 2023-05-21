#include <iostream>
#include <string>

int main(void) {
    std::string username;
    std::string user_description;

    // std::cin.ignore() is to avoid the next getline input that would be stored empty.
    std::cout << "Please type your username: " << std::endl;
    std::cin >> username; // will leave a newline character in the buffer
    std::cin.ignore(); // ignore the newline character

    std::cout << "Tell me about yourself below: " << std::endl;
    std::getline(std::cin, user_description);

    std::cout << "Hello " << username << std::endl;
    std::cout << "You said: " << user_description << std::endl;

    return EXIT_SUCCESS;
}