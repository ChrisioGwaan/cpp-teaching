#include <iostream>

#include "bst.h"

BST::BST() {
    root = nullptr;
}

BST::~BST() {
    destroyTree(root);
}

void BST::insert(int value) {
    root = insertHelper(root, value);
}

bool BST::search(int value) {
    Node* result = searchHelper(root, value);
    return (result != nullptr);
}

void BST::remove(int value) {
    root = removeHelper(root, value);
}

void BST::printInorder() {
    printInorderHelper(root);
}

Node* BST::createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void BST::destroyTree(Node* node) {
    if (node != nullptr) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

Node* BST::insertHelper(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertHelper(root->left, value);
    } else if (value > root->data) {
        root->right = insertHelper(root->right, value);
    }

    return root;
}

Node* BST::searchHelper(Node* root, int value) {
    if (root == nullptr || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return searchHelper(root->left, value);
    } else {
        return searchHelper(root->right, value);
    }
}

Node* BST::removeHelper(Node* root, int value) {
    if (root == nullptr) {
        return root;
    }

    if (value < root->data) {
        root->left = removeHelper(root->left, value);
    } else if (value > root->data) {
        root->right = removeHelper(root->right, value);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* minValue = minValueNode(root->right);
        root->data = minValue->data;
        root->right = removeHelper(root->right, minValue->data);
    }

    return root;
}

Node* BST::minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

void BST::printInorderHelper(Node* root) {
    if (root != nullptr) {
        printInorderHelper(root->left);
        std::cout << root->data << " ";
        printInorderHelper(root->right);
    }
}
