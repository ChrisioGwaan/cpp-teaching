# C++ Intro

* README: For better reading, use `ctrl+Shift+v` OR browse in GitHub Web.

* COMMAND:

1. To compile a cpp file without any class files, run(excluding `<>` symbol!)

`g++ -Wall -Werror -std=c++14 -O -o <exe_name> <filename>.cpp`

2. To compile a cpp file with class files, run(excluding `<>` symbol!)

`g++ -Wall -Werror -std=c++14 -O -o <exe_name> <class_filename>.cpp ... <main_filename>.cpp `

3. For example, in No.6 exercise, we need to use _User_ class, run:

`g++ -Wall -Werror -std=c++14 -O -o p-06-class User.cpp p-06-class.cpp`

## <span style="color: #A9C399;">**C++ Variables**</span>

> <span style="color: orange;">***float*** **and** ***double***</span>
 
Precision:

* float: It is a single-precision floating-point type that occupies 4 bytes (32 bits) of memory. It provides approximately 6 decimal digits of precision.
* double: It is a double-precision floating-point type that occupies 8 bytes (64 bits) of memory. It provides approximately 15 decimal digits of precision.

Storage Size:

* float: Requires 4 bytes of memory to store the value.
* double: Requires 8 bytes of memory to store the value.

> <span style="color: orange;">***string*** **and** ***char***</span>

**GOOD PRACTICE** is to use `#include <string>` when everytime you use strings.

**A string is made up of multiple characters.**

`\n`, `\t`, ` `, are considered to be characters as well.

`\0` null-terminator character, in the end of every string.

> <span style="color: orange;">**ASCII Table**</span>

* CLICK ==>> [ASCII](https://www.ascii-code.com/)

## <span style="color: #A9C399;">**Pointers & References**</span>

* Copy the code from p-07-pointers-reference.cpp and paste to the website below. It's very helpful to understand pointers in visualisation.
[Debugger&Visualizer](https://pythontutor.com/cpp.html#mode=edit)

## <span style="color: #A9C399;">**Dynamic Memory Management**</span>
```
std::string result;
```
The variable is created, but it does not yet refer to any memory or have any specific value assigned to it.

| Data Type         | Memory Allocated |
|-------------------|------------------|
| char, bool        | 1 Byte           |
| short             | 2 Bytes          |
| int, long, float  | 4 Bytes          |
| double            | 8 Bytes          |

## <span style="color: #A9C399;">**Array**</span>

> <span style="color: orange;">**Description**</span>

* Array must be initialized with a length and values before they can be used

> <span style="color: orange;">**Initialization**</span>

* There are two ways to initialize an array in **GOOD PRACTICE**:
```
// (1)
std::string arr1[10];

// (2)
std::string arr1[3] = {"abc", "acb", 'bac"}
```

> <span style="color: orange;">**Size of an Array**</span>

* In order to get the size of an array, use  <span style="color: yellow;">sizeof()</span>  operator:

```
int arr1[5] = {1, 2, 3, 4, 5} // Will return 20, WHY?
```

Because the <span style="color: yellow;">sizeof()</span> operator will return the size of a type in bytes, and each integer takes 4 bytes (4 bytes * 5 elements = 20).

To avoid getting bytes for the result, you can let 20 divided by the type in byte, which means `sizeof(arr1) / sizeof(int)`.

> <span style="color: orange;">**First and Last**</span>

* To return the first element in an array, use <span style="color: yellow;">begin()</span> operator.

* On the other hand, there is an <span style="color: yellow;">end()</span> operator. It will return an iterator pointing to the _past-the-end_ element in an array container.

```
int arr1[5] = {1, 2, 3, 4, 5};

std::cout << arr1.end() << std::endl; // It will return an iterator to the element next to 5, > 0 [some garbage value]
```