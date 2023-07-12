# Browse this file on GitHub would be better

## Q1:

> Task

* Take a look at `Card.cpp`, `Card.h` & `LinkedList.h`, finish the implementation of `LinkedList.cpp` and `q1.cpp`.

* Main program interface

```
Please select one of the following options:
1. Add card
2. Delete card
3. Print all the cards
4. Quit
```

> Note:

* For every input, you should check if `eof` is triggered. If it is, print `EOF Terminate`.
* For every input, user can type `help` for more information.

> Example

```
What's your preferred name?
> Chrisio

Welcome, Chrisio!

Please select one of the following options:
1. Add card
2. Delete card
3. Print all the cards
4. Quit

> 1

@Adding cards
What color do you want to add?
> red

Status: Red - 1 has been added.

What color do you want to add?
> yellow

Status: Yellow - 3 has been added.

What color do you want to add?
> lime

Status: Color lime is not found. Type `help` for more information.

What color do you want to add?
> help

@Help
## You can only type the following colors when adding cards (Each card has its own value):
Red, 1
Orange, 2
Yellow, 3
Green, 4
Blue, 5
Indigo, 6
Violet, 7
## You can also type `quit` or `exit` to got back to main program interface.
## But if you are in main program interface and select 4, the program will end.

What color do you want to add?
> quit

Please select one of the following options:
1. Add card
2. Delete card
3. Print all the cards
4. Quit

> 3

@Printing all the cards
You have: Red-1, Yellow-3

Please select one of the following options:
1. Add card
2. Delete card
3. Print all the cards
4. Quit

> 2

@Deleting cards
What color do you want to delete? (Position only)
> 1

Status: Yellow-3 has been deleted.

What color do you want to delete? (Position only)
> 1

Status: Position 1 does not exist.

What color do you want to delete? (Position only)
> exit

Please select one of the following options:
1. Add card
2. Delete card
3. Print all the cards
4. Quit

> 3

@Printing all the cards
You have: Red-1

Please select one of the following options:
1. Add card
2. Delete card
3. Print all the cards
4. Quit

> 4

Cya, Chrisio!
```