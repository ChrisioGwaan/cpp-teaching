#include <iostream>

#include "dl/DE_LinkedList.h"

int main(void) {

    LinkedList* db_linkedlist = new LinkedList();

    db_linkedlist->add_front(41);
    db_linkedlist->add_back(17);
    db_linkedlist->add_front(18);

    for (int i = 0; i < db_linkedlist->size(); i++) {
        std::cout << *db_linkedlist->get(i) << std::endl;
    }

    db_linkedlist->remove_back();
    db_linkedlist->remove_front();

    std::cout << std::endl;

    for (int i = 0; i < db_linkedlist->size(); i++) {
        std::cout << *db_linkedlist->get(i) << std::endl;
    }

    delete db_linkedlist;

    return EXIT_SUCCESS;
}