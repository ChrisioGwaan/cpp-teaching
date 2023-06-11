#ifndef P_01_CONTRACT_EMPLOYEE_H
#define P_01_CONTRACT_EMPLOYEE_H

#include <iostream>
#include <string>

#include "Employee.h"

class ContractEmployee : public Employee {
    public:
        ContractEmployee(std::string _name, int _birthYear, std::string _role, int _salary, int _workingHour, int monthlySalary);

        // Copy constructor
        ContractEmployee(const ContractEmployee &other);

        // Deconstructor
        ~ContractEmployee();

        int getMonthlySalary();
        void setMonthlySalary(int _monthlySalary);

        void printSalary() override;

    private:
        int* monthlySalary;
};

#endif // P_01_CONTRACT_EMPLOYEE_H