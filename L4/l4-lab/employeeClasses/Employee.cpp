
#include "Employee.h"

Employee::Employee(std::string _name, int _birthYear, std::string _role, int _salary, int _workingHour) {
    name = new std::string(_name);
    birthYear = new int(_birthYear);
    role = new std::string(_role);
    salary = new int(_salary);
    workingHour = new int(_workingHour);
}

// Copy constructor
Employee::Employee(const Employee &other) {
    name = new std::string(*other.name);
    birthYear = new int(*other.birthYear);
    role = new std::string(*other.role);
    salary = new int(*other.salary);
    workingHour = new int(*other.workingHour);
}

Employee::~Employee() {
    delete name;
    delete birthYear;
    delete role;
    delete salary;
    delete workingHour;
}

std::string Employee::getName() {
    return *name;
}
int Employee::getBirthYear() {
    return *birthYear;
}
std::string Employee::getRole() {
    return *role;
}
int Employee::getSalary() {
    return *salary;
}
int Employee::getWorkingHour() {
    return *workingHour;
}

void Employee::setName(std::string _name) {
    *name = _name;
}
void Employee::setBirthYear(int _birthYear) {
    *birthYear = _birthYear;
}
void Employee::setRole(std::string _role) {
    *role = _role;
}
void Employee::setSalary(int _salary) {
    *salary = _salary;
}
void Employee::setWorkingHour(int _workingHour) {
    *workingHour = _workingHour;
}

void Employee::printSalary() {
    std::cout << "Salary: " << getSalary() << std::endl;
}
