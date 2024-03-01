#ifndef BST_H
#define BST_H

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BST {
public:
    BST();
    ~BST();
    
    void insert(int value);
    bool search(int value);
    void remove(int value);
    void printInorder();
    
private:
    Node* root;
    
    Node* createNode(int value);
    void destroyTree(Node* node);
    Node* insertHelper(Node* root, int value);
    Node* searchHelper(Node* root, int value);
    Node* removeHelper(Node* root, int value);
    Node* minValueNode(Node* node);
    void printInorderHelper(Node* root);
};

#endif  // BST_H
