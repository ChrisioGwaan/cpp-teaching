#ifndef P_01_DOCTOR_H
#define P_01_DOCTOR_H

#include <iostream>
#include <string>

#include "User.h" // Doctor inherits from User

class Doctor : public User {
    public:
        Doctor(std::string _name, int _age, int _hourlySalary);

        // copy constructor
        Doctor(const Doctor &other);

        // deconstructor
        ~Doctor();

        int getHourlySalary();
        void setHourlySalary(int _hourlySalary);

    private:
        int* hourlySalary;
};


#endif // P_01_DOCTOR_H