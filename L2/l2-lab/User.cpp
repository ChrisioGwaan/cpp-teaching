
#include "User.h"

User::User(std::string _name, int _age) {
    name = new std::string(_name);
    age = new int(_age);
}

// Copy constructor
User::User(const User &other) {
    name = new std::string(*other.name);
    this->age = new int(*other.age);
}

User::~User() {
    delete name;
    delete age;
}

std::string User::getName() {
    return *name;
}

int User::getAge() {
    return *age;
}

// set name
void User::setName(std::string _name) {
    *name = _name;
}

void User::setAge(int _age) {
    *age = _age;
}