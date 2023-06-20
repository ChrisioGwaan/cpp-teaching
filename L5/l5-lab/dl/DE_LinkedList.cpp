#include <iostream>

#include "DE_LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

LinkedList::LinkedList(LinkedList& other) {
    head = nullptr;
    tail = nullptr;

    int otherSize = other.size();

    for (int i = 0; i < otherSize; i++) {
        int* value = other.get(i);

        add_back(*value);
    }
}

LinkedList::~LinkedList() {
    clear();
}

int LinkedList::size() {
    int length = 0;

    Node* current = head;
    while (current != nullptr) {
        ++length;
        current = current->next;
    }
    return length;
}

int* LinkedList::get(int index) {
    int* value = nullptr;

    if (index >= 0 && index < size()) {
        int counter = 0;
        Node* current = head;

        while (counter < index) {
            ++counter;
            current = current->next;
        }

        value = current->val;
    }
    return value;
}

void LinkedList::add_front(int data) {
    Node* newNode = new Node();
    newNode->val = new int(data);
    newNode->next = head;
    newNode->prev = nullptr;

    if (head == nullptr) {
        tail = newNode;
    } else {
        head->prev = newNode;
    }

    head = newNode;
}

void LinkedList::add_back(int data) {
    Node* node = new Node();
    node->val = new int(data);
    node->next = nullptr;
    node->prev = tail;

    if (tail == nullptr) {
        head = node;
    } else {
        tail->next = node;
    }

    tail = node;
}

void LinkedList::remove_front() {
    if (head != nullptr) {
        Node* toDelete = head;
        head = head->next;

        if (head == nullptr) {
            tail = nullptr;
        } else {
            head->prev = nullptr;
        }
        
        delete toDelete->val;
        delete toDelete;
    }else{
        throw std::runtime_error("Nothing to remove");
    }
}
void LinkedList::remove_back() {
    if (head != nullptr) {
        Node* toDelete = tail;
        tail = tail->prev;

        if (tail == nullptr) {
            head = nullptr;
        } else {
            tail->next = nullptr;
        }

        delete toDelete->val;
        delete toDelete;
    } else {
        throw std::runtime_error("Nothing to remove");
    }
}

void LinkedList::remove(int index) {
    if (index >= 0 && index < size()) {
        if (head != nullptr) {
            int counter = 0;
            Node* current = head;
            //pre should point to node before current;
            //Node* prev = nullptr;

            while (counter != index) {
                ++counter;
                //prev = current;
                current = current->next;
            }

            if (current->prev == nullptr) {
                head = current->next;
            } else {
                current->prev->next = current->next;
            }

            if (current->next == nullptr) {
                tail = current->prev;
            } else {
                current->next->prev = current->prev;
            }
 
            delete current->val;
            delete current;
        }
    }
}

void LinkedList::clear() {
    while(head != nullptr){
        remove_front();
    }
}