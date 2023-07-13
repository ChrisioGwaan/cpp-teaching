# C++ L3

## <span style="color: #A9C399;">**Inheritance**</span>

> <span style="color: orange;">**Definition**</span>

* Classes may derive from a **base-class** or **super-class** (**not** `extend` - slightly different terminology, `extend` is Java's terminology) another class, using the syntax below.

```

    Derived Class  Base Class
    Sub-class      Super-class
       |            |
       V            V
class Cat : public Pet {
    ...
}

```

> <span style="color: orange;">**Method Virtualisation**</span>

* **Override**: If a derived class overrides a method in the base class, the method must be `virtual` in both classes, have the same scope, and have the same type.
* **Overload**: A derived class can overload a method in the base class without virtualisation. (Example in L4-lab)
  
> <span style="color: orange;">**Field Names**</span>

* `public` and `protected` fields must have unique names. Otherwise shadowing occurs.
* `Private` fields may share names.

> <span style="color: orange;">**Constructors**</span>

* The first operation of the constructor of a derived class must be to call another constructor of itself. (Shown this in L3-lab)

> <span style="color: orange;">**Deconstructors**</span>

* Decontructors must be virtual. Otherwise, they cannot be properly called. But constructors don’t have to be virtual.
* C++ will automatically call the deconstructor of call base class(es) including all classes in an extended class hierarchy.

> <span style="color: orange;">**Non-Overridden Parent Methods**</span>

* A non-overridden method of a base class may be called by the derived class
directly, without any additional syntax.

> <span style="color: orange;">**Overridden Parent Methods**</span>

* An overridden method of a base class may be called by the derived class
directly, by explicitly referring to the namespace in which that method exists.


## <span style="color: #A9C399;">**Standard I/O**</span>

> <span style="color: orange;">**STL - cin**</span>

* `eof()` check for end of file.
* `fail()` check for read error.

## <span style="color: #A9C399;">**Writing ostream**</span>

> <span style="color: orange;">**Status of Output Streams**</span>

|  ostream  | Operation                                     |
|-----------|-----------------------------------------------|
| `good()`  | Check whether state of stream is good         |
| `fail()`  | Check whether either failbit or badbit is set |
| `flush()` | Flush output stream buffer                    |

> <span style="color: orange;">**Status of Read Streams**</span>

|  ifstream  | Operation                                     |
|------------|-----------------------------------------------|
| `good()`   | Check whether state of stream is good         |
| `fail()`   | Check whether either failbit or badbit is set |
| `eof()`    | Check if EOF is reached                       |

> <span style="color: orange;">**Technical Details**</span>

* The `>>` read operator only reads the **next valid token** from the input stream.
* Token are *always* separated by whitespace.
* Whitespace is not read! This includes spaces and newlines. Even if `std::string` is used, whitespace is ignored.

## <span style="color: #A9C399;">**Command Line Arguments**</span>

```

                Argument(s)
                |    |    |
                v    v    v
    ./program arg1 arg2 arg3 ...
        ^
        |
        |
    Program name

```
***Note:*** Technically the name of the command/program is also an argument.

```

                    Arguments as 2D array of strings
                        |
                        V
int main(int argc, char** argv) {
}             ^
              |
            Number of Arguments

```

* `argc` will always be at least 1.
* `argv` is an array of c-style strings.

## <span style="color: #A9C399;">**Make**</span>

> <span style="color: orange;">**Definition**</span>

* `make` is a tool for automated compilation that dates back to 1976.
* Make is a simple tool to for automated build.
* It is language independent, though typically used for C/C++.
* Make specified automated build through a series of rules.
* A rule contains: A target, dependencies, a command.

> <span style="color: orange;">**How to make a Makefile?**</span>

* Make rules are always placed in a file called `Makefile`.
* A rule of a makefile are executed using the `make` utility/command `make <target>`.
* If no target is given, the “default” target is run.

***Note:*** `!!!!` is not a command that needs to be writtern, it is only indicates here as an operation of `Tab`. You should click `Tab` there and not apply 4 whitespaces.

```
.default: all <--- Default Rule

Target Name
 |
 |
 V
all: unitTests <--- Dependencies

clean:
!!!!rm -f unitTests *.o <--- Rule

unitTests: Node.o LinkedList.o unitTests.o
!!!!g++ -Wall -Werror -std=c++14 -g -O -o $@ $^ <--- Compilation Command

%.o: %.cpp
!!!!g++ -Wall -Werror -std=c++14 -g -O -c $^ <--- Pattern Rule
```

> <span style="color: orange;">**More Make? Yes**</span>

* `Make` is a simple but effective tool. However, for complex projects it quickly becomes annoying to manually write makefiles.
* Common tools include: `automake`, `CMake`.