#include <iostream>
#include <limits>
#include <string>
#include <cmath>

#define FALSE 0
#define TRUE (!FALSE)

int main(void) {

    int      tem_i = 10;
    float    tem_f = 2.2356472f;
    double   tem_d = -42.2;
    char     tem_c = 'z';
    std::string tem_s = "Welcome to C PLUS PLUS!";

    std::cout << tem_i << " " << tem_f << std::endl;
    std::cout << tem_d << " " << tem_c << std::endl;
    std::cout << tem_s << std::endl;

    // Boolean
    std::cout << "\n* Boolean" << std::endl;

    if (0) {
        std::cout << "0 is false" << std::endl;
    }

    if (1) {
        std::cout << "1 is true" << std::endl;
    }

    if (-1) {
        std::cout << "-1 is true" << std::endl;
    }

    if (10) {
        std::cout << "10 is true" << std::endl;
    }

    if (TRUE) {
        std::cout << "TRUE #define" << std::endl;
    }

    if (FALSE) {
    } else {
        std::cout << "FALSE #define" << std::endl;
    }

    bool b = false;
    bool b2 = 1 > 2;

    std::cout << b << std::endl;
    std::cout << b2 << std::endl;

    // Characters are integers
    // (int)c is C style cast
    std::cout << "\n* Characters are integers" << std::endl;

    char c = 'a';
    printf("char: %c (%d)\n", c, c);
    // std::cout << "char: " << c << " (" << static_cast<int>(c) << ")\n";
    // std::cout << "char: " << c << " (" << int(c) << ")\n";
    ++c;
    printf("char: %c (%d)\n", c, c);
    // std::cout << "char: " << c << " (" << int(c) << ")\n";

    // Strings
    std::string s = "this is a string \t-\t sort of ";
    std::cout << "string: " << s << std::endl;
    s = s + "hello world";
    std::cout << "string: " << s << std::endl;

    // Casting (implicit and explicit)

    std::cout << "\n* Implicit and explicit" << std::endl;
    int      i = 10;
    double   d = 3.8;

    std::cout << "\n (1) i = 10 ; d = 3.8 \n" << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << "\n (2) i = d \n" << std::endl;
    i = d;
    // i = std::ceil(d);
    std::cout << "i: " << i << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << "\n (3) d = 8 / 3 \n" << std::endl;
    d = 8 / 3;
    std::cout << "i: " << i << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << "\n (4) d = 4 / 3.0 \n" << std::endl;
    d = 4 / 3.0;
    std::cout << "i: " << i << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << "\n (5) d = 4 / (double) 3 \n" << std::endl;
    d = 4 / (double) 3;
    std::cout << "i: " << i << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << "\n (6) i = (unsigned int) - 1 \n" << std::endl;
    i = (unsigned int) -1;
    std::cout << "i: " << i << std::endl;
    std::cout << "d: " << d << std::endl;

    // Extended Types
    // unsigned char:       An 8-bit unsigned integer type that can represent values from 0 to 255.
    // unsigned short:      A 16-bit unsigned integer type that can represent values from 0 to 65,535.
    // unsigned int:        A commonly used unsigned integer type, typically 32 bits in size, that can represent values from 0 to 4,294,967,295.
    // unsigned long:       An unsigned integer type that is at least 32 bits in size.
    // unsigned long long:  An unsigned integer type that is at least 64 bits in size.

    std::cout << "\nmax int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "\nmin int: " << std::numeric_limits<int>::min() << std::endl;

    std::cout << "\nmax unsigned int: " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "\nmin unsigned int: " << std::numeric_limits<unsigned int>::min() << std::endl;

    std::cout << "\nmax long: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "\nmin long: " << std::numeric_limits<long>::min() << std::endl;

    std::cout << "\nmax long int: " << std::numeric_limits<long int>::max() << std::endl;
    std::cout << "\nmin long int: " << std::numeric_limits<long int>::min() << std::endl;

    std::cout << "\nmax short: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "\nmin short: " << std::numeric_limits<short>::min() << std::endl;

    std::cout << "\nmax short int: " << std::numeric_limits<short int>::max() << std::endl;
    std::cout << "\nmin short int: " << std::numeric_limits<short int>::min() << std::endl;

    std::cout << "\nmax float: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "\nmin float: " << std::numeric_limits<float>::min() << std::endl;

    std::cout << "\nmax double: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "\nmin double: " << std::numeric_limits<double>::min() << std::endl;

    std::cout << "\nmax long double: " << std::numeric_limits<long double>::max() << std::endl;
    std::cout << "\nmin long double: " << std::numeric_limits<long double>::min() << std::endl;

    // ASCII 0-31 and 127 (decimal) are non-printing control characters
    // If dont understand at this point, feel free to discord me
    std::cout << "\nmax char: " << std::numeric_limits<char>::max() << std::endl;
    std::cout << "\nmin char: " << std::numeric_limits<char>::min() << std::endl;

    int c1 = std::numeric_limits<char>::max();
    int c2 = std::numeric_limits<char>::min();
    std::cout << "\nmax char: " << c1 << std::endl;
    std::cout << "\nmin char: " << c2 << std::endl;

    return EXIT_SUCCESS;
}