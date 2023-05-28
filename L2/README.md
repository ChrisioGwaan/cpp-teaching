# C++ Advanced Programming Techniques 1

## <span style="color: #A9C399;">**Dynamic Memory Management II**</span>

> <span style="color: orange;">**Typedef**</span>
* A typedef is a user-defined type that is a synonym for another type

```
        Existing Type
        |
        V
typedef int* IntPtr;
                ^
                |
                New Type name
```

> <span style="color: orange;">**Computer Memory**</span>

* Each byte has a unique address
* Addresses are stored in hex, and adjacent memory locations are sequential

```
 Pointer       Name                  Memory
    |           |                       |
    V           V                       V
0x0004fca4   integer: 00000000, 00000000, 00000000, 00000111
0x0004fca8 character: 01100100
0x0004fca9   decimal:
```

> <span style="color: orange;">**Pointers & References**</span>

* A reference type is denoted in syntax using a `&`

```
int value = 10
int* ptr = &value
int& ref = value
ptr = nullptr

int* ptr        int value <----------- int& ref
    * ------------> 7
    * ------------> nullptr
```

## <span style="color: #A9C399;">**Vector**</span>

* C++ Provides STL containers for a number the data structures, vector is one of them.

> <span style="color: orange;">**Vector vs Array**</span>

| Vector                           | Array                      |
|----------------------------------|----------------------------|
| Dynamically sized array          | Fixed sized array          |
| All elements are same type       | All elements are same type |
| Can be resizeable (require copy) | Un-resizeable              |

> <span style="color: orange;">**Iterators**</span>

1. `begin()`: Returns the first element in a vector.
2. `end()`: Returns the theoretical element that follows the last element in a vector.
3. `rbegin()`: Returns the last element in a vector. *reverse begin*
4. `rend()`: Returns the theoretical element preceding the first element in a vector. *reverse end*

> <span style="color: orange;">**Capacity**</span>

1. `size()`: Returns the number of elements in the vector.
2. `max_size()`: Returns the maximum number of elements that the vector can hold.
3. `capacity()`: Returns the size of the storage space currently allocated to the vector expressed as number of elements.
4. `resize(n, x)`: Resizes the container that contains `n` elements. `x` is considered as a default value of new elements afer resizing. *[Optional]*
5. `empty()`: Check if the container is empty.

> <span style="color: orange;">**Accessing Element**</span>

1. `at(x)`: Returns a reference to the element at `x` position in the vector.
2. `front()`: Returns a reference to the first element.
3. `back()`: Returns a reference to the last element.
4. `vector[x]`: This is a _reference operator_ that is similar to access the elements in an array. It returns a reference to the element at `x` position in the vector.

> <span style="color: orange;">**Modifiers**</span>

1. `push_back()`: Append the elements into a vector from the back.
2. `pop_back()`: Pop or remove elements from a vector from the back.
3. `insert(x, value)`: Insert `value` at `x` position.
4. `erase(x)`: Remove the element at `x` position.
5. `clear()`: Remove all elements.

> <span style="color: orange;">**More about Vector**</span>

* [std::vector](https://en.cppreference.com/w/cpp/container/vector)

## <span style="color: #A9C399;">**Switch**</span>

* `switch` statement has a similar logic to if-else statement.

> <span style="color: orange;">**Syntax**</span>

```
switch (val) {
    case value1:
        // do something
        break;
    case value2:
        // do something
        break;
    // more case statements...
    default:
        // If all case statements are not statisfied.
        break;
}
```

## <span style="color: #A9C399;">**Copy Constructor**</span>
* A Copy Constructor is a special constructor that duplicates an existing object.
* It must take a reference to an existing object of the same type
* It makes an identical copy of the existing object

> <span style="color: orange;">**Copy means?**</span>
* _Shallow copy_ : Only the immediate fields are duplicated, not the contents of
any sub-classes.
* _Deep copy_ : Duplicate all contents of every field.

## <span style="color: #A9C399;">**Additional**</span>

> <span style="color: orange;">**EOF**</span>

* `EOF` stands for _End-of-File_ and represents a special value that is returned by input/output functions to indicate the end of a file or input stream.
* How to trigger it? When the user presses `Ctrl+D` (Unix-like systems) or `Ctrl+Z` (Windows) to indicate the end of input.
