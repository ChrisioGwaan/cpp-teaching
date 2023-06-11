#ifndef P_01_EMPLOYEE_H
#define P_01_EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
    public:
        Employee(std::string _name, int _birthYear, std::string _role, int _salary, int _workingHour);

        // Copy constructor
        Employee(const Employee &other);

        // Deconstructor
        ~Employee();

        std::string getName();
        int getBirthYear();
        std::string getRole();
        int getSalary();
        int getWorkingHour();

        void setName(std::string _name);
        void setBirthYear(int _birthYear);
        void setRole(std::string _role);
        void setSalary(int _salary);
        void setWorkingHour(int _workingHour);

        virtual void printSalary();

    private:
        std::string* name;
        int* birthYear;
        std::string* role;
        int* salary;
        int* workingHour;
};

#endif // P_01_EMPLOYEE_H