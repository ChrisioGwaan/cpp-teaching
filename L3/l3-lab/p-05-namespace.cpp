#include <iostream>

using std::cout;
using std::endl;

namespace first_namespace {
    void func() {
        cout << "the first namespace" << endl;
    }
    namespace second_namespace {
        void func() {
            cout << "the second namespace" << endl;
        }
    }
}

using namespace first_namespace::second_namespace;

int main(void) {
    func();

    return EXIT_SUCCESS;
}