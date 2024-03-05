#include <iostream>
#include <unistd.h> // This is not an error, it's a POSIX standard library
// Which is why it's recommended to use WSL for C++ compiling.

#define DOT "."
#define HOLD_TIME 5

int main (void) {

    // *
    std::cout << "\033[1;31mFIRST ROUND" << std::endl;
    std::cout << "============" << std::endl;

    int a = 7;
    std::cout << "\033[1;32m[LOG] Value of 'a' is assigned to 7" << std::endl;
    sleep(1);
    int* ptr = &a;
    std::cout << "[LOG] Pointer 'ptr' -> 'a' address\n" << std::endl;
    sleep(1);

    std::cout << "\033[1;33ma: " << a << std::endl;
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < HOLD_TIME; i++) {
        std::cout << "\033[1;37m" << DOT << std::flush; // flush the buffer
        sleep(1);
    }
    std::cout << "\n" << std::endl;

    // **
    std::cout << "\033[1;31mSECOND ROUND" << std::endl;
    std::cout << "============" << std::endl;

    int b = 10;
    std::cout << "\033[1;32m[LOG] Value of 'b' is assigned to 10" << std::endl;
    sleep(1);
    ptr = &b;
    std::cout << "[LOG] Pointer 'ptr' -> 'b' address" << std::endl;
    sleep(1);
    *ptr = 12;
    std::cout << "[LOG] Pointer 'ptr' *current address value* -> 12\n" << std::endl;
    sleep(1);

    std::cout << "\033[1;33mb: " << b << std::endl;
    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < HOLD_TIME; i++) {
        std::cout << "\033[1;37m" << DOT << std::flush;
        sleep(1);
    }
    std::cout << "\n" << std::endl;
    
    // ***
    std::cout << "\033[1;31mTHIRD ROUND" << std::endl;
    std::cout << "============" << std::endl;

    b = a;
    std::cout << "\033[1;32m[LOG] Value of 'b' is assigned to value of 'a'\n" << std::endl;
    sleep(1);

    std::cout << "\033[1;33m*ptr: " << *ptr << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < HOLD_TIME; i++) {
        std::cout << "\033[1;37m" << DOT << std::flush;
        sleep(1);
    }
    std::cout << "\n" << std::endl;
    
    // ****
    std::cout << "\033[1;31mFOURTH ROUND" << std::endl;
    std::cout << "============" << std::endl;

    int* ptr2 = &a;
    std::cout << "\033[1;32m[LOG] Pointer 'ptr2' -> 'a' address" << std::endl;
    sleep(1);
    int *ptr3 = &b;
    std::cout << "[LOG] Pointer 'ptr3' -> 'b' address" << std::endl;
    sleep(1);
    a = -3;
    std::cout << "[LOG] Value of 'a' is assigned to -3" << std::endl;
    sleep(1);
    b = 10;
    std::cout << "[LOG] Value of 'b' is assigned to 10" << std::endl;
    sleep(1);
    *ptr = 2;
    std::cout << "[LOG] '*ptr' -> 2" << std::endl;
    sleep(1);
    *ptr3 = 6;
    std::cout << "[LOG] '*ptr3' -> 6\n" << std::endl;
    sleep(1);

    std::cout << "\033[1;33ma: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    std::cout << "ptr3: " << *ptr3 << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < HOLD_TIME; i++) {
        std::cout << "\033[1;37m" << DOT << std::flush;
        sleep(1);
    }
    std::cout << "\n" << std::endl;

    // *****
    std::cout << "\033[1;31mFIFTH ROUND" << std::endl;
    std::cout << "============" << std::endl;

    int** pptr = &ptr;
    std::cout << "\033[1;32m[LOG] 'pptr' -> 'ptr' address" << std::endl;
    sleep(1);
    **pptr = 20;
    std::cout << "[LOG] 'pptr' -> 20\n" << std::endl;
    sleep(1);
    
    std::cout << "\033[1;33ma: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    std::cout << "*ptr3: " << *ptr3 << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < HOLD_TIME; i++) {
        std::cout << "\033[1;37m" << DOT << std::flush;
        sleep(1);
    }
    std::cout << "\n" << std::endl;

    // ******
    std::cout << "\033[1;31mCHALLENGE" << std::endl;
    std::cout << "============" << std::endl;

    *&**&pptr = &a;
    std::cout << "\033[1;32m[LOG] 'pptr' -> 'a' address" << std::endl;
    sleep(1);
    **pptr = -1;
    std::cout << "[LOG] 'pptr' -> -1\n" << std::endl;
    sleep(1);
    
    std::cout << "\033[1;33m*a: " << a << std::endl;
    std::cout << "*b: " << b << std::endl;

    return EXIT_SUCCESS;
}