#include <iostream>
#include <string>

#include "employeeClasses/Employee.h"
#include "employeeClasses/ContractEmployee.h"

int main(void) {

    Employee* employee1 = new Employee("John Doe", 1990, "Manager", 20, 40);

    ContractEmployee* contractEmployee1 = new ContractEmployee("Jane Doe", 1995, "Contractor", 10000, 40, 10000);

    employee1->printSalary();

    std::cout << std::endl;

    contractEmployee1->printSalary();


    return EXIT_SUCCESS;
}