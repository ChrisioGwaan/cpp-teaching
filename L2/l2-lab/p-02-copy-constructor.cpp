#include <iostream>
#include "User.h"

int main(void) {
    std::string name = "bob";
    int age = 20;

    User* user1 = new User(name, age);

    std::cout << "Before changing" << std::endl;

    std::cout << "User 1 name: " << user1->getName() << std::endl;
    std::cout << "User 1 age: " << user1->getAge() << std::endl;
    

    User* user2 = new User(*user1);

    std::cout << "Copy user1 to user2" << std::endl;

    user1->setName("alice");
    user1->setAge(30);

    std::cout << "User 1 name: " << user1->getName() << std::endl;
    std::cout << "User 1 age: " << user1->getAge() << std::endl;

    std::cout << "User 2 name: " << user2->getName() << std::endl;
    std::cout << "User 2 age: " << user2->getAge() << std::endl;

    return EXIT_SUCCESS;
}