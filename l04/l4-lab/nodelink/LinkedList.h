#ifndef P_02_LINKED_LIST_H
#define P_02_LINKED_LIST_H

#include "Node.h"

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    
    int size();
    void clear();
    int get(int i);

    void addFront(int data);
    void addBack(int data);
    
    void deleteFront();
    void deleteBack();

private:
    Node* head;
};

#endif // P_02_LINKED_LIST_H