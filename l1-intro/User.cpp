
#include "User.h"

User::User() {}

User::User(std::string name, int age) {
    this->name = name;
    this->age = age;
}

std::string User::getName() {
    return this->name;
}

int User::getAge() {
    return this->age;
}

void User::setName(std::string name) {
    this->name = name;
}

void User::setAge(int age) {
    this->age = age;
}