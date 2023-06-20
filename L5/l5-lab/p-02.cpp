#include <iostream>

#include "bst/BST.h"

int main(void) {
    BST bst;

    // Insert nodes into the BST
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);
    
    // Search for a value in the BST
    int searchValue = 40;
    bool found = bst.search(searchValue);
    if (found) {
        std::cout << "Value: " << searchValue << " found in the BST." << std::endl;
    } else {
        std::cout << "Value: " << searchValue << " not found in the BST." << std::endl;
    }

    // Remove a node from the BST
    int removeValue = 30;
    bst.remove(removeValue);

    // Print the BST in inorder traversal
    std::cout << "Inorder traversal of the BST: ";
    bst.printInorder();
    std::cout << std::endl;

    return EXIT_SUCCESS;
}