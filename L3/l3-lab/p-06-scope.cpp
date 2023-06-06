#include <iostream>

using std::cout;
using std::endl;

void func(int x);

int main(void) {

    int x = 1;

    {
        int x = 2;
        func(x);
    }

    func(x);

    return EXIT_SUCCESS;
}

void func(int x) {
    cout << x << endl;
}