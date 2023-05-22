
#include <iostream>
#include "User.h"

int main(void) {
    User* user1 = new User();
    user1->setName("John");
    user1->setAge(20);
    std::cout << user1->getName() << std::endl;
    std::cout << user1->getAge() << std::endl;

    User* user2 = new User("Flex", 30);
    std::cout << user2->getName() << std::endl;
    std::cout << user2->getAge() << std::endl;

    return EXIT_SUCCESS;
}