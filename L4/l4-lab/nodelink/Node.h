#ifndef P_02_NODE_H
#define P_02_NODE_H

#include <iostream>

class Node {
public:

    Node(int data, Node* next);
    Node(Node& other);

    int    data;
    Node*  next;
};

#endif // P_02_NODE_H