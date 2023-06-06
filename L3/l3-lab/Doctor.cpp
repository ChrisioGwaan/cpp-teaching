#include "Doctor.h"

Doctor::Doctor(std::string _name, int _age, int _hourlySalary)
    : User(_name, _age), hourlySalary(new int(_hourlySalary))
{
}

// copy constructor
Doctor::Doctor(const Doctor &other) 
    : User(other), hourlySalary(new int(*other.hourlySalary))
{
}

// deconstructor
Doctor::~Doctor() {
    delete hourlySalary;
}

int Doctor::getHourlySalary() {
    return *hourlySalary;
}

void Doctor::setHourlySalary(int _hourlySalary) {
    *hourlySalary = _hourlySalary;
}