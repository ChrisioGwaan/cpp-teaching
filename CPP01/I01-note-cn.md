<h1 id="top">C++ 基础</h1>

* [编译与运行](#1-a)
  * [Just a Reminder](#1-aa)
  * [WSL2 编译指令](#1-ab)
  * [常见的问题](#1-ac)
* [变量](#2-a)
  * [float and double](#2-aa)
  * [string and char](#2-ab)
  * [ASCII 表](#2-ac)
* [指针与引用](#3-a)
* [动态内存管理](#4-a)
* [数组](#5-a)
  * [定义](#5-aa)
  * [初始化](#5-ab)
  * [数组的大小](#5-ac)
  * [数组的首与尾](#5-ad)

<h2 id="1-a">编译与运行</h2>

<h3 id="1-aa">Just a Reminder</h3>

* README: 在 [GitHub](https://github.com/ChrisioGwaan/cpp-teaching) 网页阅读此文档内容会更加好

<h3 id="1-ab">WSL2 编译指令</h3>

1. 在没有其余类文件的时候, 可使用以下指令进行编译 (记得取代 `<...>`)

`exe_name` 为执行文件名称

`filename` 为需要编译的cpp文件

`g++ -Wall -Werror -std=c++14 -O -o <exe_name> <filename>.cpp`

2. 编译cpp文件及带有其余类文件指令 (取代 `<...>`)

`class_filename` 为类文件名称

`g++ -Wall -Werror -std=c++14 -O -o <exe_name> <class_filename>.cpp ... <main_filename>.cpp `

3. 运行可执行文件 (取代 `<...>`)

`./<exe_name>`

<h3 id="1-ac">常见的问题</h3>

* 有时候如果你发现以上指令都无输入错误, 但控制台显示错误的时候, 记得检查控制台路径是否正确 (使用 `cd ` 更改路径)

<h2 id="2-a">变量</h2>

<h3 id="2-aa"><b>Float</b> and <b>Double</b></h3>
 
精度:

* float: 它是一种单精度浮点类型, 占用4字节（32位）的内存. 它提供约6位小数位的精度
* double: 它是一种双精度浮点类型, 占用8字节（64位）的内存. 它提供约15位小数位的精度

存储大小:

* float: 需要4字节的内存来存储数值
* double: 需要8字节的内存来存储数值

<h3 id="2-ab"><b>String</b> and <b>Char</b></h3>

* 在C++用字符串的时候, 记得用 `#include <string>`

* 记住: **一个字符串由单个或多个字符组成**

* `\n`, `\t`, `空格` 都被视为字符

* `\0` 空字符 (null-terminator), 位于每个字符串的末尾

<h3 id="2-ac">ASCII 表</h3>

* 有兴趣可以去研究 ==>> [ASCII](https://www.ascii-code.com/)

<h2 id="3-a">指针与引用</h2>

* 复制 p-07-pointers-reference.cpp 的代码, 并且粘贴到 [Debugger&Visualizer](https://pythontutor.com/cpp.html#mode=edit), 代码可视化会促进理解指针与引用的使用

<h2 id="4-a">动态内存管理</h2>

通常, 一个变量会占用内存的一些空间位置, 而该位置可以通过指针方式访问, 位置代码可通过引用方式输出

```
std::string result;
```

字符串变量 `result` 已被声明, 但没有初始化, 这个时候改变量并没有被赋予任何内存位置

| 数据类型           | 被赋予内存字节大小 |
|-------------------|------------------|
| char, bool        | 1 Byte           |
| short             | 2 Bytes          |
| int, long, float  | 4 Bytes          |
| double            | 8 Bytes          |

<h2 id="5-a">数组</h2>

<h3 id="5-aa">定义</h3>

* 数组在创建的时候必须声明大小

<h3 id="5-ab">初始化</h3>

* 以下是两种不同的数组初始化方式:
```
// (1)
std::string arr1[10];

// (2)
std::string arr1[3] = {"abc", "acb", 'bac"}
```

<h3 id="5-ac">获取数组的大小</h3>

虽然在初始化的时候, 数组的大小已经被知悉. 但当一个程式使用了一百个甚至几千个数组的时候, 会无法分清每一个数组大小.

* 通过使用 <span style="color: yellow;">sizeof()</span> 返回数组大小:

```
int arr1[5] = {1, 2, 3, 4, 5};
sizeof(arr1); // 结果返回 20 ?
```

这是因为 <span style="color: yellow;">sizeof()</span> 返回的是数组数据类型的总字节, 对于这个整数数组, 每个整数占4个字节, 数组中总共有5个元素 (4 bytes * 5 元素 = 20). 为了解决这个问题, 可以通过除掉数据类型字节大小 `sizeof(arr1) / sizeof(int)` 从而获取数组大小

<h3 id="5-ad">数组的首和尾</h3>

* 使用 <span style="color: yellow;">begin()</span> 获取数组的首位值

* 使用 <span style="color: yellow;">end()</span> 获取数组的尾值. It will return an iterator pointing to the _past-the-end_ element in an array container.

```
int arr1[5] = {1, 2, 3, 4, 5};

std::cout << arr1.end() << std::endl; // It will return an iterator to the element next to 5, > 0 [some garbage value]
```