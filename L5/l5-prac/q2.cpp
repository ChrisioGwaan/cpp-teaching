#include <iostream>

using std::cout;
using std::endl;

/*

Casting data types using pointers. Think about is it okay to do this?

Why: 

*/

int main(void) {
    float testFloat = 20;
    float* ptrF = &testFloat;

    int* ptrI = (int*) ptrF;

    cout << ptrI << " " << ptrF << endl;
    cout << *ptrI << " " << *ptrF << endl;

    return EXIT_SUCCESS;
}