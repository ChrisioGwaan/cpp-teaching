#include <iostream>

#include "nodelink/LinkedList.h"

int main(void) {
    LinkedList mylist;

    mylist.addBack(10);
    mylist.addFront(5);
    mylist.addBack(15);
    mylist.addFront(0);

    for (int i = 0; i < mylist.size(); i++) {
        std::cout << mylist.get(i) << "->";
    }
    std::cout << "nullptr\n" << std::endl;

    mylist.deleteFront();

    for (int i = 0; i < mylist.size(); i++) {
        std::cout << mylist.get(i) << "->";
    }
    std::cout << "nullptr\n" << std::endl;

    mylist.deleteBack();

    for (int i = 0; i < mylist.size(); i++) {
        std::cout << mylist.get(i) << "->";
    }
    std::cout << "nullptr\n" << std::endl;

    std::cout << "The 1 position is: " << mylist.get(1) << std::endl;

    mylist.clear();

    std::cout << "(Cleared) Size: " << mylist.size() << std::endl;

    return EXIT_SUCCESS;
}