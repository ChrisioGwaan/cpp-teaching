# C++ L4

## <span style="color: #A9C399;">**Abstract Data Types - Singly Linked List**</span>

> <span style="color: orange;">**Singly Linked List**</span>

* A _Linked List_ is created which internally contains a pointer to the head (first node) of the list and defines methods to interact with the linked list.

```
Head: *         Data: 21        Data: 25
      └───────> Next: * ──────> Next: * ──────> NULL
LinkedList      Node            Node
```

> <span style="color: orange;">**Linked List vs Arrays/Vectors**</span>

|                | Array/Vector                 | Linked List                 |
|----------------|------------------------------|-----------------------------|
| Element Types  | All elements are same type   | All elements are same type  |
| Resizeable     | Yes, requires copy           | Yes                         |
| Storage Layout | Contiguous                   | Non-Contiguous              |
| Cell Lookup    | Constant Time, random access | Linear Time, randome access |

> <span style="color: orange;">**Algorithm Analysis**</span>

|                 | Array/Vector  | Linked List                                 |
|-----------------|---------------|---------------------------------------------|
| `addFront()`    | Linear Time   | Constant Time                               |
| `addBack()`     | Constant Time | Linear Time (if no back ptr), Constant Time |
| `deleteFront()` | Linear Time   | Constant Time                               |
| `deleteBack()`  | Constant Time | Linear Time (if no back ptr), Constant Time |

## <span style="color: #A9C399;">**Abstract Data Types - Doubly Linked List**</span>

* TBA, last week topic.

## <span style="color: #A9C399;">**Template**</span>

> <span style="color: orange;">**Description**</span>

* C++ provides generics through `templates`.
* A template uses placeholders for where typenames are used in code.
* A template cannot be directly compiled until the typename is instantiated.
* A template is instantiated when some other piece of code *fills in* the typename.

> <span style="color: orange;">**Instantiating**</span>

* All of the **placeholder types** are filled with the instantiated copies, similar to `#define`.
* The copied instantiated template is what is **compiled**.
* The **placeholder typename** can be instantiated to any valid type, including primitive types, arrays, pointers, references, enumerations and/or classes.

> <span style="color: orange;">**Example with Node and LinkedList**</span>

* Node.h
```
template<typename T>
class Node {
public:

    Node(T data, Node<T>* next);
    Node(const Node<T>& other);
    ~Node();

    T        data;
    Node<T>* next;
};
```

* LinkedList.h
```
template<typename T>
class LinkedList {
public:

    LinkedList();
    ~LinkedList();

    int size() const;
    void clear();
    T get(int i) const;

    void addFront(const T data);
    void addBack(const T data);

    Node<T>* head;
};
```

> <span style="color: orange;">**Issues using Template**</span>

**If a type isnt known when writing a template:**
* How can operators be used? (ie, +, -, *, /, ==, etc)
* How can assignment be used? (ie, a = b)
* What functions or methods can the generic entity be passed to?
* Can a method be called on the generic entity?

**Explanation**
* These issues are all resolved at compile time by the copying process. The copied and fully-instantiated template is compiles as if it the code was originally written that way. Normal C++ rules then take over.
* There are *standard* C++ ways of doing things, ie, Copy constructors, Move semantics, Operator overloading.

## <span style="color: #A9C399;">**Enum**</span>

> <span style="color: orange;">**Description**</span>

* An _enumeration_ is a user-defined data type that consists of integral constants.
* It is also used in Python. The idea for enumeration is the same. For example, when you are iterating a list {'a', 'b', 'c', 'd'}. If you use enumerate to iterate the list, in `Python`, it would be like `for i, key in enumerate(list)`. `i` is the position and `key` is the value. Therefore, C++ has the same idea for it, check the code below.

```
enum week {
    Sunday,     // 0
    Monday,     // 1
    Tuesday,    // 2
    Wednesday,  // 3
    Thursday,   // 4
    Friday,     // 5
    Saturday    // 6
};
...
    
week today;
today = Wednesday; // 3
cout << "Day " << today+1; // Day 4
...
```