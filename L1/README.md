# C++ Intro

* README: For better reading, use `ctrl+Shift+v` OR browse in GitHub Web.

* COMMAND:
To compile a cpp file without any class files, run(excluding `<>` symbol!)
`g++ -Wall -Werror -std=c++14 -O -o <exe_name> <filename>.cpp`

To compile a cpp file with class files, run(excluding `<>` symbol!)
`g++ -Wall -Werror -std=c++14 -O -o <exe_name> <class_filename>.cpp ... <main_filename>.cpp `

For example in No.6 exercise, we need to use _User_ class, run:
`g++ -Wall -Werror -std=c++14 -O -o p-06-class User.cpp p-06-class.cpp`

## C++ Syntax and String
### p-02-data-type

> `float` and `double`
Precision:

* float: It is a single-precision floating-point type that occupies 4 bytes (32 bits) of memory. It provides approximately 6 decimal digits of precision.
* double: It is a double-precision floating-point type that occupies 8 bytes (64 bits) of memory. It provides approximately 15 decimal digits of precision.

Storage Size:

* float: Requires 4 bytes of memory to store the value.
* double: Requires 8 bytes of memory to store the value.

> `String` and `char`

**A string is made up of multiple characters.**
`\n`, `\t`, ` `, are considered to be characters as well.

`\0` null-terminator character, in the end of every string.


> ASCII Table

[ASCII](https://www.ascii-code.com/)

## Classes
| Specifier    | Description                                                                 |
|--------------|-----------------------------------------------------------------------------|
| private      | Accessible by self.                                                         |
| protected    | Accessible by self, derived classes, and other classes in the same package. |
| public       | Accessible by self, derived classes, and everyone else.                     |
| no specifier | Accessible by self and other classes in the same package.                   |

## Pointers & References
[Debugger&Visualizer](https://pythontutor.com/cpp.html#mode=edit)

## Dynamic Memory Management
```
std::string result;
```
The variable is created, but it does not yet refer to any memory or have any specific value assigned to it.
