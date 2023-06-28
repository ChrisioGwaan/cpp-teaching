#include <iostream>

using std::cout;
using std::endl;

/*

Casting data types using pointers. Think about is it okay to do this?

Why: 

While the code is syntactically correct, it is considered an invalid typecast because it violates strict aliasing rules.

This program is attempting to access the same memory location with two different types (float and int). 

*/

int main(void) {
    float testFloat = 20;
    float* ptrF = &testFloat;

    int* ptrI = (int*) ptrF;

    cout << ptrI << " " << ptrF << endl;
    cout << *ptrI << " " << *ptrF << endl;

    return EXIT_SUCCESS;
}