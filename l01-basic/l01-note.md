<h1 id="top">C++ Introduction</h1>

* [Compile and Run](#1-a)
  * [Just a Reminder](#1-aa)
  * [Command On WSL2](#1-ab)
  * [Common Mistake](#1-ac)
* [Variables](#2-a)
  * [float and double](#2-aa)
  * [string and char](#2-ab)
  * [ASCII Table](#2-ac)
* [Pointers & References](#3-a)
* [Dynamic Memory Management](#4-a)
* [Array](#5-a)
  * [Description](#5-aa)
  * [Initialization](#5-ab)
  * [Size of an Array](#5-ac)
  * [First and Last](#5-ad)

<h2 id="1-a">Compile and Run</h2>

<h3 id="1-aa">Just a Reminder</h3>

* README: For better reading, press `CTRL+SHIFT+V` in VS Code OR browse on [GitHub](https://github.com/ChrisioGwaan/cpp-teaching).

<h3 id="1-ab">Command On WSL2</h3>

1. To compile a cpp file without any class files (replaces `<...>`)

`g++ -Wall -Werror -std=c++14 -O -o <exe_name> <filename>.cpp`

2. To compile a cpp file with class files (replaces `<...>`)

`g++ -Wall -Werror -std=c++14 -O -o <exe_name> <class_filename>.cpp ... <main_filename>.cpp `

3. To run the executable file (replaces `<...>`)

`./<exe_name>`

<h3 id="1-ac">Common Mistake</h3>

* Sometimes you have to check the directory path on your terminal, and make sure you are in the right directory. (`cd ` to change directory)

<h2 id="2-a">Variables</h2>

<h3 id="2-aa"><b>Float</b> and <b>Double</b></h3>
 
Precision:

* float: It is a single-precision floating-point type that occupies 4 bytes (32 bits) of memory. It provides approximately 6 decimal digits of precision.
* double: It is a double-precision floating-point type that occupies 8 bytes (64 bits) of memory. It provides approximately 15 decimal digits of precision.

Storage Size:

* float: Requires 4 bytes of memory to store the value.
* double: Requires 8 bytes of memory to store the value.

<h3 id="2-ab"><b>String</b> and <b>Char</b></h3>

* **GOOD PRACTICE** is to use `#include <string>` when everytime you use strings.

* **A string is made up of multiple characters.**

* `\n`, `\t`, `whitespace`, are considered to be characters as well.

* `\0` null-terminator character, in the end of every string.

<h3 id="2-ac">ASCII Table</h3>

* CLICK ==>> [ASCII](https://www.ascii-code.com/)

<h2 id="3-a">Pointers & References</h2>

* Copy the code from p-07-pointers-reference.cpp and paste to the website below. It's very helpful to understand pointers in visualisation.
[Debugger&Visualizer](https://pythontutor.com/cpp.html#mode=edit)

<h2 id="4-a">Dynamic Memory Management</h2>
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

<h2 id="5-a">Array</h2>

<h3 id="5-aa">Description</h3>

* Array must be initialized with a length and values before they can be used

<h3 id="5-ab">Initialization</h3>

* There are two ways to initialize an array in **GOOD PRACTICE**:
```
// (1)
std::string arr1[10];

// (2)
std::string arr1[3] = {"abc", "acb", 'bac"}
```

<h3 id="5-ac">Size of an Array</h3>

* In order to get the size of an array, use  <span style="color: yellow;">sizeof()</span>  operator:

```
int arr1[5] = {1, 2, 3, 4, 5} // Will return 20, WHY?
```

Because the <span style="color: yellow;">sizeof()</span> operator will return the size of a type in bytes, and each integer takes 4 bytes (4 bytes * 5 elements = 20).

To avoid getting bytes for the result, you can let 20 divided by the type in byte, which means `sizeof(arr1) / sizeof(int)`.

<h3 id="5-ad">First and Last</h3>

* To return the first element in an array, use <span style="color: yellow;">begin()</span> operator.

* On the other hand, there is an <span style="color: yellow;">end()</span> operator. It will return an iterator pointing to the _past-the-end_ element in an array container.

```
int arr1[5] = {1, 2, 3, 4, 5};

std::cout << arr1.end() << std::endl; // It will return an iterator to the element next to 5, > 0 [some garbage value]
```