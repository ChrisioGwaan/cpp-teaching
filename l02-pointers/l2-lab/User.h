#ifndef P_07_CLASS_H
#define P_07_CLASS_H

#include <iostream>
#include <string>

class User {
    public:
        User(std::string _name, int _age);

        // Copy constructor
        User(const User &other);

        // Deconstructor
        ~User();

        std::string getName();
        int getAge();

        void setName(std::string _name);
        void setAge(int _age);

    private:
        std::string* name;
        int* age;
};

#endif // P_07_CLASS_H