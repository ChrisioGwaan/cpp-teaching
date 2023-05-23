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
ptr = NULL

int* ptr        int value <----------- int& ref
    * ------------> 7
    * ------------> NULL
```

## <span style="color: #A9C399;">**Vector**</span>

> <span style="color: orange;">**Vector vs Array**</span>
> 
TBA
| Vector            | Array            |
|-------------------|------------------|
<!-- |         | 1 Byte           |
| short             | 2 Bytes          |
| int, long, float  | 4 Bytes          |
| double            | 8 Bytes          | -->