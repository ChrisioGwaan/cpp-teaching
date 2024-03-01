#include <iostream>
#include <string>

#include "Doctor.h"

int main(void) {
    Doctor* doctor = new Doctor("John", 30, 100);

    std::cout << "Name: " << doctor->getName() << std::endl;
    std::cout << "Age: " << doctor->getAge() << std::endl;
    std::cout << "Hourly Salary: " << doctor->getHourlySalary() << std::endl;

    return EXIT_SUCCESS;
}