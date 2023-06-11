#include <iostream>

#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {

}

LinkedList::~LinkedList() {
    clear();
}

int LinkedList::size() {
    int size = 0;

    Node* current = head;

    while (current != nullptr) {
        size++;
        current = current->next;
    }

    return size;
}

void LinkedList::clear() {
    Node* current = head;

    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    head = nullptr;
}

int LinkedList::get(int i) {
    Node* current = head;
    int count = 0;

    while (current != nullptr) {
        if (count == i) {
            return current->data;
        }
        count++;
        current = current->next;
    }

    return -1;
}

void LinkedList::addFront(int data) {
    Node* newNode = new Node(data, head);
    head = newNode;
}

void LinkedList::addBack(int data) {
    Node* newNode = new Node(data, nullptr);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }
}

void LinkedList::deleteFront() {
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::deleteBack() {
    if (head != nullptr) {
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            Node* current = head;
            while (current->next->next != nullptr) {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }
    }
}