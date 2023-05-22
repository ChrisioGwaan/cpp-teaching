#ifndef P_07_CLASS_H
#define P_07_CLASS_H

#include <iostream>
#include <string>

class User {
    public:
        User();
        User(std::string name, int age);

        std::string getName();
        int getAge();

        void setName(std::string name);
        void setAge(int age);

    private:
        std::string name;
        int age;
};

#endif // P_07_CLASS_H