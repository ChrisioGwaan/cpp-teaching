# C++ L3

## <span style="color: #A9C399;">**Inheritance and Polymorphism**</span>

## <span style="color: #A9C399;">**Streams I/O**</span>

## <span style="color: #A9C399;">**Algorithm: Binary Search**</span>

## <span style="color: #A9C399;">**Make**</span>

> <span style="color: orange;">**Definition**</span>

* `make` is a tool for automated compilation that dates back to 1976
* Make is a simple tool to for automated build
* It is language independent, though typically used for C/C++
* Make specified automated build through a series of rules
* A rule contains: A target, dependencies, a command

> <span style="color: orange;">**How to make a Makefile?**</span>

* Make rules are always placed in a file called `Makefile`
* A rule of a makefile are executed using the `make` utility/command `make <target>`
* If no target is given, the “default” target is run

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
* Common tools include: `automake`, `CMake`

## <span style="color: #A9C399;">**Recursive**</span>