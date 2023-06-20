#ifndef DE_LINKEDLIST
#define DE_LINKEDLIST

class Node{
public:
    int* val;
    Node* next;
    Node* prev;
};

class LinkedList{
public:
    LinkedList();
    LinkedList(LinkedList& other);
    ~LinkedList();

    int size();

    int* get(int index);

    void add_front(int data);
    void add_back(int data);

    void remove_front();
    void remove_back();

    void remove(int index);

    void clear();

private:

    Node* head;
    Node* tail;
    
};


#endif //LINKEDLIST