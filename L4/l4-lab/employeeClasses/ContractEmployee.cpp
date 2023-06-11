#include <iostream>

#include "ContractEmployee.h"

ContractEmployee::ContractEmployee(std::string _name, int _birthYear, std::string _role, int _salary, int _workingHour, int monthlySalary)
    : Employee(_name, _birthYear, _role, _salary, _workingHour), monthlySalary(new int(monthlySalary))
{
}

// Copy constructor
ContractEmployee::ContractEmployee(const ContractEmployee &other) 
    : Employee(other), monthlySalary(new int(*other.monthlySalary))
{
}

// Deconstructor
ContractEmployee::~ContractEmployee() {
    delete monthlySalary;
}

int ContractEmployee::getMonthlySalary() {
    return *monthlySalary;
}

void ContractEmployee::setMonthlySalary(int _monthlySalary) {
    *monthlySalary = _monthlySalary;
}

void ContractEmployee::printSalary() {
    std::cout << "Contract employee " << getName() << " has a monthly salary of " << getMonthlySalary() << std::endl;
}